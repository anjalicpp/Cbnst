OBJECTIVE:WRITE A C PROGRAM TO REDUCE AN ERROR INVOLVED IN ANY POLYNOMIAL EQUATION.

ALGORITHM:
STEP 1:Start of the program.
STEP 2:Input the variables true value(tval),approximate value(apval).
STEP 3:Calculate the absolute error(abs) as absolute=|true value-approximate value| 
STEP 4:Calculate the relative error(rel) as relative=absolute /true value;
STEP 5:Calculate the percentage error (per) as percentage=relative *100;
STEP 6:Print absolute error,relative error ,percentage error.
STEP 7:END


#include<stdio.h>
#include<math.h>
int main()
{
    float tval,apval,abs,rel,per;
    printf("Enter the true value:");
    scanf("%f",&tval);
    printf("Enter the approx value");
    scanf("%f",&apval);

    abs=fabs(tval-apval);
    rel=abs/tval;
    per=rel*100;
    printf("The absolute error is:%f",abs);
    printf("The Relative error is:%f",rel);
    printf("The Percentage error is:%f",per);

    return 0;
}
