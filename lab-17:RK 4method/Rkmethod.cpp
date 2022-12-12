code:rk 4 method
#include<stdio.h>
#define F(x,y) (x-y)/(x+y)

int main()
{

    int i,n;
    float xo,yo,xn,h;
    float k1,k2,k3,k4,k,x,y;
    printf("Enter the values:xo,yo,h,xn:\n");
    scanf("%f%f%f%f",&xo,&yo,&h,&xn);
    n=(xn-xo)/h;
    x=xo;
    y=yo;

    for(i=0;i<=n;i++)
    {
        k1=h*F(x,y);
        k2=h*F(x+h/2.0,y+k1/2.0);
        k3=h*F(x+h/2.0,y+k2/2.0);
        k4=h*F(x+h,y+k3);
        k=(k1+(k2+k3)*2.0+k4)/6.0;
        printf("\n X=%f Y=%f",x,y);
        x=x+h;
        y=y+k;

    }
    return 0;

}
