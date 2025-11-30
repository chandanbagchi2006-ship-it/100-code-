#include<stdio.h>

int main()
{
    int rows,columns;
    int matrix[100][100],i,j,sum=0;
    printf("Enter the rows:");
    scanf("%d",&rows);
    printf("Enter the columns:");
    scanf("%d",&columns);
    printf("Enter the elements of matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        sum=0;
        for(j=0;j<columns;j++)
        {
            sum+=matrix[i][j];
        }
        printf("The sum of %d row:%d\n",i+1,sum);
    }
    return 0;
}
