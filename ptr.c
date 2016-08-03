#include<stdio.h>
#include <math.h>
struct coordinates 
{
float x;
float y;
float z;
};
int main()
{
struct coordinates location1, location2;
struct coordinates *ptr1,*ptr2;
ptr1 = &location1;
ptr2 =&location2;
ptr1 ->x =3.5;
ptr1 ->y = 5.5;
ptr1 ->z = 10.5;
ptr2 ->x = ptr1 ->x;
ptr2 ->y = ptr1 ->y;
ptr2 ->z = ptr1 ->z;
return 0;
}
