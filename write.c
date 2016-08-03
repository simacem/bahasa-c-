#include<stdio.h>
int main;
void write_extern(void);

   extern int count;

   void write_extern(void)
   {
     printf("count is %i\n", count);
   }
