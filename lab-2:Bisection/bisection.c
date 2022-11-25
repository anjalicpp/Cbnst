#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (x*x*x-5*x+1);
}
int main()
{
float a,b,err,root;
while(1)
{ printf("Enter value of a:");
    scanf("%f",&a);
    printf("\n");
    printf("Enter value of b:");
     scanf("%f",&b);
     printf("\n");
     printf("Enter value of allowed error");
     scanf("%f",&err);
     printf("\n");

     if(f(a)*f(b)<0)
     {
        printf("Roots found\n");
        break;
     }
     else printf("Wrong Interval");
}

do{
root=(a+b)/2;
if(f(a)*f(root)<0)
b=root;

else a=root;
printf("Root value is=%f",root);printf("\n");
printf("Value of a=%f and b=%f",a,b);printf("\n");


}while(fabs(f(root))>err);
printf("Root value is=%f",root);printf("\n");

return 0;
}
