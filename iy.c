#include<stdio.h>
void line;
{
struct screen * pixsel;
  {     
     float X, Y;
       int i, j, x1, y1, x2, y2, mX, mY;
       scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

       if ((x1 >= 0 && x1 <= screen->width) && (y1 >= 0 && y1 <=screen>height) && (x2 >= 0 && x2 <= screen->width) && (y2 >= 0 && y2 <= screen->height))
      {
         X = (x2 - x1);
         Y = (y2 - y1);
        if (X < 0)
            mX = X*(-1);
        else
            mX = X;

        if (Y < 0)
            mY = Y*(-1);
        else
            mY = Y;

        if( mX>mY )
        {
           if (X > 0)
           {
              for (i = 0; i < X; i++)
              {
                j = (int)(((i*Y) / X) + 0.5);
                screen->pixel[x1 + i][y1 + j] = '*';
              }

            }
            else
           {
             for (i = 0; i > X; i--)
             {
                j = (int)(((i*Y) / X) + 0.5);
                screen->pixel[x1 + i][y1 + j] = '*';
             }
            }

         }
        else
       {
          if (Y > 0)
          {
             for (j = 0; j < Y; j++)
             {
                i = (int)(((j*X) / Y) + 0.5);
                screen->pixel[x1 + i][y1 + j] = '*';
              }
           }
          else
          {
              for (j = 0; j > Y; j--)
              {
                 i = (int)(((j*X) / Y) + 0.5);
                 screen->pixel[x1 + i][y1 + j] = '*';
               }
           }
   }
}      

