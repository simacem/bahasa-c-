#include <stdio.h>

int main()
{         
    int i,j,k,n,m[50][50];
     

    

    scanf("%d",&i);

    

    for(j=0;j<i;j++)

    {
        for(k=0;k<i;k++)

        {

        if(k==1)

           {
                printf(" 1 ");

           }

        else

            {

            printf("0 ");

            }
        }

        printf("\n");
    }

   
    return 0;
}
