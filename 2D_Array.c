#include<stdio.h>
int main()
{
    int r, c;
    int twod[2][3];
    printf("Enter the rows:");
    scanf("%d", &r);
    printf("Enter the columns:");
    scanf("%d", &c);
    printf("Enter the array elements:");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
           printf("Enter the value for display[%d][%d]\n", i+1, i+j);
           scanf("%d", &twod[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
           printf("%d\n", twod[i][j]);
        }
    }
    return 0;
}