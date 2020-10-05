#include<stdio.h>
int main()
{
    int n_students = 3;
    int n_subjects = 5;
    // int a[3][2] = {{1,2},
    //                {3,4},
    //                {4,6}};
    int marks[3][5];
    for(int i = 0; i < n_students; i++)
    {
        for(int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of subjects %d is %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(int i = 0; i < n_students; i++)
    {
        for(int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of subjects %d is %d : %d\n", i+1, j+1, marks[i][j]);
        }
    }
    //printf("The elements of:%d", a[3][2]);
    return 0;
}