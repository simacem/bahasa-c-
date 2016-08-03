#include<stdio.h>
int main()
{
   

int x,y,angka;

scanf("%d", &angka);

for (x=1;x<=angka;x++)
{
for (y=1;y<=angka;y++)
{
if(x==1 || x==angka)
printf("x");
else if(y==1 || y==angka)
printf("x");
else 
printf(" ");
}
printf("\n");
}
return 0;
}

