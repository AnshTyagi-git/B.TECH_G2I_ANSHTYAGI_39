#include <stdio.h>
int main()
{int a,n,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    for (a=1;a<=n; a++)
    {
       sum=sum+a;
    }
    printf("The sum of the numbers upto %d is %d",n,sum);

    return 0;
}