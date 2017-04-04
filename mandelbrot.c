
#include <unistd.h>
#include <stdlib.h>
#include <omp.h>
#include <stdio.h>
#include <complex.h>
#include <time.h>
static int

calc_pixel(complex double c)
{
  const int max_iter = 256;
  complex double z = 0.;
  int cnt;


  for (cnt = 0; cnt < max_iter; cnt++) 
  {
    z = z*z + c;
    if (cabs(z) >= 2.) {
      break;
    }
  }
  return cnt;
}

#define MX 400
#define MY 400

int main(int argc, char **argv)
{
 
  clock_t tic =  clock();
  const complex double z0 = -2. - 1. * I;
  const complex double z1 =  1. + 1. * I;

  // data here is made "static" for the following reason: It's a fairly large
  // array. Without the "static", it'll be put on the stack, which
  // isn't really well-suited for large amounts of data -- in
  // particular, on MacOS it's quite possible to run out of stack space,
  // which kills the program. Using "static", the memory for data is
  // "statically allocated", which doesn't have such a limitation.
  static int data[MY][MX]; 
  int thread[MY][MX];

  double dx = creal(z1 - z0) / (MX - 1);
  double dy = cimag(z1 - z0) / (MY - 1);
  
  //#pragma omp parallel for  
  //#pragma omp parallel for num_threads(THREADS)
  //#pragma omp parallel for schedule(static,10) //num_threads(THREADS)
  #pragma omp parallel for schedule(dynamic,10) 
  //num_threads(THREADS)
  
  for (int iy = 0; iy < MY; iy++) {
  	
    for (int ix = 0; ix < MX; ix++) {

      complex double c = z0 + dx * ix + dy * iy * I;
      data[iy][ix] = calc_pixel(c);
      thread[iy][ix] = omp_get_thread_num();

    }
    
  }

  clock_t toc = clock();
  printf("Elapsed:%f s\n", (double)(toc-tic)/1000000);

  FILE *fp = fopen("test.asc", "w");
 
  for (int iy = 0; iy < MY; iy++) {

    for (int ix = 0; ix < MX; ix++) {
      complex double c = z0 + dx * ix + dy * iy * I;
      fprintf(fp, "%g %g %d\n", creal(c), cimag(c), thread[iy][ix]);
    }
    fprintf(fp, "\n");
  }
  fclose(fp);
    



   

  FILE *file = fopen("mandelbrot.asc", "w");
 
  for (int iy = 0; iy < MY; iy++) 
  {
    //#pragma omp parallel for  
    for (int ix = 0; ix < MX; ix++) 
    {
      complex double c = z0 + dx * ix + dy * iy * I;
      fprintf(file, "%g %g %d\n", creal(c), cimag(c), data[iy][ix]);
    }
    fprintf(file, "\n");
  }
  fclose(file);
  
  return 0;
 

  

}
