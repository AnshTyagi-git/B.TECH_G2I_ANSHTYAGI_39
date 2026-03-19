#include <stdio.h>
int main()
{
int i,j,a[2][2],sum1=0,sum2=0,det;
printf("Enter the elements\n");
for(i=0;i<2;i++)
{ 
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        if(i==j)
        {
            sum1=sum1+a[i][j]*a[i][j];
        }
        else
        {
            sum2=sum2+a[i][j]*a[i][j];
        }
    }
}

det=sum1-sum2;
printf("The determinant of matrix is: %d",det);

return 0;
}






