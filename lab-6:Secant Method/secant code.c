Code for Secant Method:


#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x * x - 5 * x + 1;
}

int main()
{

    float x, x0, x1, err;
    int count = 1;
    printf("Enter the value of x0 and x1: ");
    scanf("%f%f", &x0, &x1);

    printf("\nEnter the allowed error: ");
    scanf("%f", &err);

    do
    {
        x = (x1 - ((x1 - x0) / (f(x1) - f(x0))) * f(x1));
        printf("\nIteration= %d \t Root: %f ", count, x);
        count+=1;
        if (x == x1)
        {
            printf("Condition failed");
            return -1;
        }

        x0 = x1;
        x1 = x;
    } while (fabs(x1 - x0) > err);

    printf("\nRoots are: %f", x1);
}
