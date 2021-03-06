
## Assignments

1. (due 1/31/17) 
 * Sign up for an account at [GitHub](https://github.com) (if you don't have one already), and email me your GitHub username, so that I can add you to the UNH-HPC organization. 
 * Sign up for [![Gitter](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/unh-hpc/Lobby?utm_source=share-link&utm_medium=badge&utm_campaign=pr-badge)
 * Make sure that you can log in to fishercat, either from your laptop or a lab computer (or both).

2. (due 2/2/17)
 * Following the Class 2 notes, finish putting up a personal wiki page and link it to the [Students](https://github.com/unh-hpc/syllabus/wiki/Students) page.
 * Make sure that you can edit and compile a simple C program using the command line - either on fishercat or on your laptop (no need to hand anything in).
 * Edit the [Topics](https://github.com/unh-hpc/syllabus/wiki/Topics) page and add + / - to topics you would like to see emphasized or skipped.
 * Not due yet, but considering signing up for a presentation by editing [this page](https://github.com/unh-hpc/syllabus/wiki/Student-Presentations).

3. (due 2/7/17)
 * It'd be nice if you could add your real name to your GitHub account (click on the top right icon, select "Your Profile"), and even better if you could add an image. If you have privacy concerns, though, it's okay to not do this.
 * If you haven't done so, click on the "Watch" button (also near the top) for this (the syllabus) repo. If you watch this repo, github will send you notifications if anything changes, in particular if the assignment page gets updated.
 * If you have issues with following what we did in class, e.g., using an editor to write code, using VNC to log on to fishercat, etc, these things can be quite complex to set up, in particular if you're on Windows. Try to come to my office before the next class so that we can work these things out, and so that you're ready to finish the rest of your homework.
 * The actual homework: Finish the in-class tasks from [Class 3](https://github.com/unh-hpc/syllabus/wiki/Class-3): split out factorial.c, and add a Makefile that can be used to compile the code that's then split amongst three source files. Figure out some way to submit your homework to me (via email). If you happen to know your way around git, that could be a good way, but otherwise you can tell me where to find your work on fishercat, or attach the files to an email, put them into Dropbox or whatever. It'd be good to get the code to compile without warnings, too!
 * Read the [paper](BarelySufficientSoftwareEngineering.pdf) on barely sufficient software engineering through 2.5. Be ready to answer a question on what you read or talk about a point you found interesting.
 
4. (due 2/9/17)
 * Finish the in-class exercises from [Class 4](https://github.com/unh-hpc/syllabus/wiki/Class-4). Up the version number to 0.03, make a tarball and email that to me (or tell me where on fishercat to find it).
 * Finish reading the paper on barely sufficient software engineering.
 
5. (due 2/14/17)  [Notes](https://github.com/unh-hpc/syllabus/wiki/Assignment-5)
 * To partially make up for the snow day, I wrote up some introduction to doing more with git/github [here](https://github.com/unh-hpc/syllabus/wiki/Snow-Class-5). It's a bit lengthy, and it's a good idea to follow along trying things yourself, but not a whole lot of things you really need to do.
 * At the end, you should have your `class-4-in-class-xyz` repo pushed back to github, so that I can check it out.
 
6. (due 2/16/17) 
 * Not much of a homework, but please sign up for a [presentation](https://github.com/unh-hpc/syllabus/wiki/Student-Presentations) and pick a date, otherwise I will do that for you.
 
7. (due *before class* 2/21/17) [Notes](https://github.com/unh-hpc/syllabus/wiki/Assignment-7)
 * Finish the work on [Class 7](https://github.com/unh-hpc/syllabus/wiki/Class-7). Commit your changes and push them back to github.
 
8. (due before class 2/23/17)
 * There's nothing to submit here, but I recommend looking through the changes I made in the class-7 repository (or in your class-8-assignment repo, which is the same thing), and to read through the Class 8 notes to the point where we made it today in class.
 
9. (due before class 2/28/17) [Notes](https://github.com/unh-hpc/syllabus/wiki/Assignment-9)

  * Finish some work from Class 8:
 
    * Implement a `matrix_is_equal()` function and use it to complete the matrix-matrix multiplicaion test. Find and fix the bug in the matrix-matrix multiplication (see Class 8 notes).

    * Fortify the linear algebra routines with `assert()` statements that ensure that the functions are called with compatible vector lengths / matrix dimensions (e.g., if you add two vectors, they better have the same length, and the result vector should be the same length, too).

    Commit your changes and push them into your repository on github. Ideally, do your work on the `master` branch and push that back. If you use another branch, please let me know so that I'll know where to look.

  * What did you learn from the Class 9 exercises? (Send me an email with a brief report of what you did and what the results were -- copy&pasting results is perfectly fine.) If you worked in a group, it's also fine to send me one jointly created report.

  * (more challenging) Investigate how you can make the `print_matrix_double_pointer()` function work -- it's a good opportunity to become more familiar with C pointers. The intention here is not to change that function, but rather to pass it the right kind of argument so that it works. Note that I would like the data itself to remain stored where it is, so it shouldn't be all copied into some other data structure. You will, however, still have to add something.

10. (before class 3/2/17)

  * **By Wednesday night:** Email me to let me know which group you're joining for the next couple of classes (groups should have 2-3 members). If you don't have a group to join, email me to tell that.
  * Nothing to hand in, but finish the in-class exercises from [Class 10](https://github.com/unh-hpc/syllabus/wiki/Class-10).

11. (before class 3/7/17) [Notes](https://github.com/unh-hpc/syllabus/wiki/Assignment-11)

  * Prepare for actually parallelizing code by implementing the two functions from [Class 11](https://github.com/unh-hpc/syllabus/wiki/Class-11), including surrounding code to actually use / test these functions. Show that the averaging function works right, for example by generating some plots and adding them either to your repo or to the associated wiki. You could actually just do this part by editing the pre-existing `README.md` to include your plot(s) etc.

12. (before class 3/9/17)

  * Nothing to hand in, but finish the in-class exercises from [Class 12](https://github.com/unh-hpc/syllabus/wiki/Class-12).

13. (before class 3/30/17) [Notes now in the repo](https://github.com/unh-hpc/mandelbrot)

  * You don't have to hand anything in here, but it's always a good idea to finish the in-class exercises, in this case [Class 14/15](https://github.com/unh-hpc/syllabus/wiki/Class-14).
  
  * Get the actual assignment [here](https://classroom.github.com/group-assignment-invitations/893ff0ee9ee04268ddbee7d584938a10). Instructions are included in the repo.
  
14. (before class 4/4/17) A sample solution is in the [repo](https://github.com/unh-hpc/class-16/commits/hw14).

  * Finish the work from [Class 17](https://github.com/unh-hpc/syllabus/wiki/Class-17). In particular, that involves changing `message_mpi_2.c` so that it broadcasts the value of `test` to all other processes, and creating an MPI parallelized version of the integration example (you can copy existing code, e.g., `linear_algebra/test_integrate.c`, as a starting point). Work in the assignment repo from Class 16, and create a pull request when you're done. You don't need to write a report.
  
15. (before class 4/11/17)

  Use `MPI_Send()` / `MPI_Recv()` to correctly fill the ghost cells of
  the `test_derivative` example from Class 19. There are four ghost
  cells to fill (2 on each of the two procs). In the following, I made
  it happen for one out of those four. You can start from either (or
  start from the assignment repo as-is).
  
  ```diff
diff --git a/mpi/test_derivative.c b/mpi/test_derivative.c
index 5ff43e3..2a984d5 100644
--- a/mpi/test_derivative.c
+++ b/mpi/test_derivative.c
@@ -20,7 +20,7 @@ set_sine(struct fld1d *x, int N, int ib, int ie)
 
   for (int i = ib; i < ie; i++) {
     double xx = i * dx;
-    F1(x, i) = sin(xx);
+    F1(x, i) = sin(xx+1);
   }
 }
 
@@ -55,7 +55,16 @@ write(struct fld1d *x, int N, const char *filename)
 static void
 fill_ghosts(struct fld1d *x, int N)
 {
+  int rank;
+  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
+
   /* F1(x, -1) = F1(x, N-1); */
+  if (rank == 1) {
+    MPI_Send(&F1(x, 49), 1, MPI_DOUBLE, 0, 111, MPI_COMM_WORLD);
+  } else { // rank == 0
+    MPI_Recv(&F1(x, -1), 1, MPI_DOUBLE, 1, 111, MPI_COMM_WORLD,
+	     MPI_STATUS_IGNORE);
+  }
   /* F1(x,  N) = F1(x, 0  ); */
 }
 
@@ -102,9 +111,9 @@ main(int argc, char **argv)
   struct fld1d *d = fld1d_create(ib  , ie  );
 
   set_sine(x, N, ib, ie);
-  write(x, N, "x");
 
   calc_derivative(d, x, N);
+  write(x, N, "x");
   write(d, N, "d");
 
   fld1d_destroy(d);
  
  ```
  
  (The first change is not about the ghost points directly, but rather shifts the sine so that the ghost points issues are more easily discernible at all boundaries.)
  
  Actually, I have two versions of this change -- the first one (above) hardcodes the fact that we have 50 cells divided into two halves. The following version uses `ib` and `ie` instead, though it still only works for 2 procs.
  
  ```diff
  diff --git a/mpi/test_derivative.c b/mpi/test_derivative.c
index 5ff43e3..a1bf1ec 100644
--- a/mpi/test_derivative.c
+++ b/mpi/test_derivative.c
@@ -20,7 +20,7 @@ set_sine(struct fld1d *x, int N, int ib, int ie)
 
   for (int i = ib; i < ie; i++) {
     double xx = i * dx;
-    F1(x, i) = sin(xx);
+    F1(x, i) = sin(xx+1);
   }
 }
 
@@ -53,9 +53,18 @@ write(struct fld1d *x, int N, const char *filename)
 // fills the ghost cells at either end of x
 
 static void
-fill_ghosts(struct fld1d *x, int N)
+fill_ghosts(struct fld1d *x, int ib, int ie)
 {
+  int rank;
+  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
+
   /* F1(x, -1) = F1(x, N-1); */
+  if (rank == 1) {
+    MPI_Send(&F1(x, ie-1), 1, MPI_DOUBLE, 0, 111, MPI_COMM_WORLD);
+  } else { // rank == 0
+    MPI_Recv(&F1(x, ib-1), 1, MPI_DOUBLE, 1, 111, MPI_COMM_WORLD,
+	     MPI_STATUS_IGNORE);
+  }
   /* F1(x,  N) = F1(x, 0  ); */
 }
 
@@ -67,7 +76,7 @@ fill_ghosts(struct fld1d *x, int N)
 static void
 calc_derivative(struct fld1d *d, struct fld1d *x, int N)
 {
-  fill_ghosts(x, N);
+  fill_ghosts(x, d->ib, d->ie);
 
   double dx = 2. * M_PI / N;
 
@@ -102,9 +111,9 @@ main(int argc, char **argv)
   struct fld1d *d = fld1d_create(ib  , ie  );
 
   set_sine(x, N, ib, ie);
-  write(x, N, "x");
 
   calc_derivative(d, x, N);
+  write(x, N, "x");
   write(d, N, "d");
 
   fld1d_destroy(d);

  ```

As usual, work in your assignment git repo (the one from class 18), and make a pull request to submit.

16. (before class 4/20/17)

  * Finish the in-class exercise
    from
    [Class 20](https://github.com/unh-hpc/syllabus/wiki/Class-20). Do
    the work in your group's repo, use a pull request to submit your work.
    
17. (before class 4/27/17)

  * Finish the in-class exercise
    from
    [Class 23](https://github.com/unh-hpc/syllabus/wiki/Class-23). Do
    the work in your group's repo, use a pull request to submit your work.

## Project 1

  * Here are the instructions for [Project 1](project1.pdf). It is a group assignment, so form a teams and sign up for a project repository [here](https://classroom.github.com/group-assignment-invitations/2b0d0bba21396780cc7aed9dec6937a8).
  
  * The deadline for submission of your work is April 18th. I strongly recommend finishing a draft report a week earlier and sending it to me for feedback.
  
## Project 2
  * Here is the [sign up link](https://classroom.github.com/group-assignment-invitations/bd41f2c394fc855def760b9970133560) for your project 2 repository.
  
  * The final deadline for this project is the end of finals week -- as before, I recommend giving me a draft for comments before then.
  
  
