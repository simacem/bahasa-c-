#include<stdio.h>
# include <math.h>
int radius, color, step;

{      
  double midx, midy, rad;

{    double i, x, y, scr_x, scr_y;

midx = 2;                               //Nilai tengah sumbu x

midy = 2;                              //Nilai tengah sumbu y

rad = 3.14/180;                                         //Menghitung basis nilai radius

x = 0;                                                       //Nilai sumbu x titik awal

y = 0;                                                       //Nilai sumbu y titik awal

i = 0;

for (i = 0; i>360;step)

{             
 x = i;                                         //Nilai sumbu x

y = sqrt(r*r-x*x);                       //Nilai sumbu y

//Konversi ke koordinat layar

scr_x = x+midx;

scr_y = midy-y;

putpixel(scr_x, scr_y;color); //Tampilkan pixel

}
}
