Code for iteratiuon Method :

#include<stdio.h>
#include<math.h>
#define f(x) cos(x)-(3*x)+1
#define o(x) (cos(x)+1)/3.0
#define O(x) (-sin(x)/3.0) 
//#define f(x) (2*x)-log10(x)-7 
int main()
{
    float x0,x1,e;
    int i=0;
    printf("Enter the value of x0 : ");
    scanf("%f",&x0);
    printf("Enter the value of allowed error : ");
    scanf("%f",&e);
    if(fabs(O(x0))<1)
    {
        printf("Roots found\n");
    }
    else
    {
        printf("Wrong value of x0\n");
        return 0;
    }
    x1=x0;
    do
    {
        x0=x1;
        x1=o(x0);
        i++;
        printf("Root at iteration %d = %f\n",i,x1);
    }while(fabs(x0-x1)>e);
    printf("\nFinal root after %d iteration = %f\n",i,x1);
    return 0;
}
