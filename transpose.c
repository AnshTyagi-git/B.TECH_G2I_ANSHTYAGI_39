#include <stdio.h>
int main()
{int i,j,m,n;
    printf("Enter the no. of rows:");
    scanf("%d",&m);
    printf("Enter the no. of columns:");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the elements of matrix:\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {scanf("%d",&a[i][j]);}
    }
    printf("The matrix is:");
    for (i=0;i<m;i++)
    {printf("\n");
        for(j=0;j<n;j++)
        {printf("\t%d",a[i][j]);}
        printf("\n");
    }

    printf("Transpose of matrix is:");
     for (i=0;i<n;i++)
    {printf("\n");
        for(j=0;j<m;j++)
        {printf("\t%d",a[j][i]);}
    }




    return 0;
}