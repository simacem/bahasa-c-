#include <stdio.h>

// program utama
int main(int argc) {
 int pil;
 float x, y;

 // menampilkan menu dan pilihan
 printf("              [ MENU ]             \n\n");
 printf(" 1. Garis Vertikal\n");
 printf(" 2. Garis Horizontal\n");
 printf(" 3. Garis Diagonal\n\n");
 printf("Masukkan pilihan anda [1..3] : ");
 scanf("%i", &pil);
 
 // seleksi kondisi pilihan
 if (pil == 1) {
  printf("\n\n        [ Garis Vertikal ]        \n\n");
  printf("Masukkan y [1..99] : ");
  scanf("%f", &y);
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
  // posisi kotak (x,y)
  glutInitWindowPosition(405,95);
  // besarnya kotak (x,y)
  glutInitWindowSize(500,500);
  glutCreateWindow("Garis Vertikal OpenGL");
  glClear(GL_COLOR_BUFFER_BIT);
  // gambar garisnya
  glBegin(GL_LINES);
  glVertex2f (0.0, 0.0);
  glVertex2f (0.0, y/100);
  glEnd();
  glFlush();
  glutMainLoop();
 } else if (pil == 2) {
  printf("\n\n       [ Garis Horizontal ]       \n\n");
  printf("Masukkan x [1..99] : ");
  scanf("%f", &x);
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
  // posisi kotak (x,y)
  glutInitWindowPosition(405,95);
  // besarnya kotak (x,y)
  glutInitWindowSize(500,500);
  glutCreateWindow("Garis Horizontal OpenGL");
  glClear(GL_COLOR_BUFFER_BIT);
  // gambar garisnya
  glBegin(GL_LINES);
  glVertex2f (0.0, 0.0);
  glVertex2f (x/100, 0.0);
  glEnd();
  glFlush();
  glutMainLoop();
 } else if (pil == 3) {
  printf("\n\n        [ Garis Diagonal ]        \n\n");
  printf("Masukkan x [1..99] : ");
  scanf("%f", &x);
  printf("Masukkan y [1..99] : ");
  scanf("%f", &y);
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
  // posisi kotak (x,y)
  glutInitWindowPosition(405,95);
  // besarnya kotak (x,y)
  glutInitWindowSize(500,500);
  glutCreateWindow("Garis Diagonal OpenGL");
  glClear(GL_COLOR_BUFFER_BIT);
  // gambar garisnya
  glBegin(GL_LINES);
  glVertex2f (0.0, 0.0);
  glVertex2f (x/100, y/100);
  glEnd();
  glFlush();
  glutMainLoop();
 } else {
  // print error
  printf("ERROR!! Masukkan pilihan antara 1-3 !\n");
 }
 
 return 0;
}


