#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n,i,ch;
    printf("Enter the terms:\n");
    scanf("%d",&n);
    float sx=0.0,sy=0.0,sxy=0.0,sx2=0.0,sy2=0.0;
    printf("\n Enter the choice:1 Regression y on x\n2Regression x on y\n");

    printf("Enter rthe choice\n");
    scanf("%d",&ch);
    float x[n],y[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of x%d & y%d:",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
        sx+=x[i];
        sy+=y[i];


    }

    for(int i=0;i<n;i++)
    {
        sxy+=x[i]*y[i];
        sx2+=x[i]*x[i];
        sy2+=y[i]*y[i];


    }
    float X,Y,b,c;
    X=sx/n;
    Y=sy/n;
    if(ch==1)
    {

        b=(n*sxy-sx*sy)/(n*sx2-sx*sx);
        c=Y-b*X;
        printf("\nRegression coefficient of y on x=%f",b);
        printf("\nEquation:y=%0.2f*x-%0.2f",b,c);
    }
    else
    {
        b=(n*sxy-sx*sy)/(n*sx2-sx*sx);
        c=X-b*Y;
        printf("\nRegression coefficient of y on x=%f",b);
        printf("\nEquation:x=%0.2f*y-%0.2f",b,c);

    }
    return 0;
}    
