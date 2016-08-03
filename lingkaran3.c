#include<stdio.h>
#include <stdlib.h>
int main()
{
int x,y;

GraphDriver= DETECT;
int graph(&GraphDriver, &GraphMode,":\\tc");
ErrorCode = graphresult();
if(ErrorCode != ok)
{
printf("Graphics System Error : %s\n", grapherrormsg(ErrorCode));
exit(1);
}
x=getmax();
y=getmax();
rectangle(x/4,y/4,3*x/4,3*y/4);
line(x/4,y/4,3*x/4,3*y/4);

line(3*x/4,y/4,x/4,3*y/4);
circle(x/2,y/2,200);

return 0;
}

