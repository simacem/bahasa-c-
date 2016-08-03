#include <stdio.h>

int  main(){
int data[10] = {1,2,3,4,5,6,7,8,9,10};
int cari;
int ketemu=0;   
  printf("data = 1,2,3,4,5,6,7,8,9,10\n");
  printf("masukkan data yang ingin dicari = ");
  scanf("%d",&cari);
   for(int i=0;i<10;i++){
   if(data[i] == cari) 
ketemu=1;
   }
   if(ketemu==1) 
printf("Data ada!\n"); 
else 
printf("Data tidak ada!\n");

}

