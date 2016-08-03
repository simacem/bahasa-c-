
#include <stdio.h>

int persegi()
{
int p,l,i,j;
printf("Masukkan panjang: ");
scanf("%d",&p);
printf("Masukkan lebar: ");
scanf("%d",&l);
for (i=1;i<=l;i++)
 {
 if (i==1 || i==l) 
for( j=1;j<=p;j++) 
{
 if (j==1 || j==p)
 printf("|");
 else printf("|");
 }
 else for ( j=1;j<=p;j++)
 {
if(j==1 || j==p)
 printf("|");
 else printf(" ");
 }
 printf("\n"); 
}
  return 0;
 }
