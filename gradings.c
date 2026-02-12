#include <stdio.h>
int main()
{int s1,s2,s3,s4,s5,sum;
 float percent;
    printf("Enter the marks of first subject:");
    scanf("%d",&s1);
    printf("Enter the marks of second subject:");
    scanf("%d",&s2);
    printf("Enter the marks of third subject:");
    scanf("%d",&s3);
    printf("Enter the marks of fourth subject:");
    scanf("%d",&s4);
    printf("Enter the marks of fifth subject:");
    scanf("%d",&s5);
    sum=(s1+s2+s3+s4+s5);
    percent=((sum)*100.0094)/500;
    printf("Your percentage is %0.2f\n",percent);
    if (percent>=90)
    {
        printf("Your Grade is A");
    }
    else if (percent>=80 && percent<90)
    {
        printf("Your Grade is B");
    }

    else if (percent>=60 && percent<80)
    {
        printf("Your Grade is C");
    }
    else 
    {
        printf("Your Grade is D");
    }
    return 0;
}