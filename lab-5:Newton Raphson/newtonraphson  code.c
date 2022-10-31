Code for Newton Raphson:

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (3 * x - cos(x) - 1);
}

float g(float x)
{
    return (3 + sin(x));
}


int main()
{
    float x0, x1, x2, err;
    int count = 1;

    printf("Enter the value of x0: ");
    scanf("%f", &x0);

    if (g(x0) == 0)
    {
        printf("f'(%f) = 0. \t Lol you Dumb . \nTry again with another value of x0 you dumb.", x0);
        return -1;
    }

    printf("\nEnter the allowed error: ");
    scanf("%f", &err);

    do
    {
        x1 = x0 - f(x0) / g(x0);
        printf("\nIteration= %d \t Root %f", count, x1);
        count++;
        x2 = x1 - f(x1) / g(x1);
        printf("\nIteration= %d \t Root %f", count, x2);
        count++;
        x1 = x2;
    } while ((x2 - x1) > err);

    printf("\nIteration= %d \t Root= %f \n", count, x1);
    return 0;
}
