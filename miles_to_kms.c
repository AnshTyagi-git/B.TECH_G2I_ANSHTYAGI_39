#include <stdio.h>
int main()
{int a;
 float b,c,d,e;
    printf("Distance conversion\n Press 1 for conversion in miles.\n Press 2 for conversion in kms.\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Enter the distance (in kms):");
        scanf("%f",&b);
        c=(0.62137)*b;
        printf("The distance entered (in miles) is %0.2f",c);
    }
    else if (a==2)
    {
        printf("Enter the distance (in miles):");
        scanf("%f",&d);
        e=(1.60934)*d;
        printf("The distance entered (in kms) is %0.2f",e);
    }
    else 
    {
        printf("Entered choice is wrong!\n Please choose from the given opticns!");
    }
    return 0;
}