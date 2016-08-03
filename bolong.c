#include <stdio.h>

//using namespace std;

int bolong ()
{

int n;
printf("input : ");
scanf("%d", &n);

if (n > 2){
//baris
for (int i=0; i < n; i++){
//kolom
for (int j=0; j < n; j++) {
//kondisi pembentuk kota
if ((i==0) || (i==n-1) || (j==0) || (j==n-1)) {
printf("*");
}
else {
//kondisi bolong tengahnya
if (n%2==1){
{
printf(" ");
}
}
else {
printf(" ");
}
}
}//akhir kolom
printf("\n");
}//akhir baris
}
return 0;
}

