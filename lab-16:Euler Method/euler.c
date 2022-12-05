#include<stdio.h>
#define F(x,y) (x-y)/(x+y)
int main()
{
int i,n;
float xo,yo,xn,x,y,h;
    printf("Enter the value for x0,x1,xn,h:\n");
    scanf("%f%f%f%f",&xo,&yo,&h,&xn);
        n=(xn-xo)/h+1;
    
    for(int i=0;i<n;i++)
    {
        y=yo+h*F(xo,yo);
        x=xo+h;
        printf("\n X=%f Y=%f ",xo,yo);
        if(x<xn)
        {
            xo=x;
            yo=y;
        }

    }

return 0;

}
