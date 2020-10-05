#include<stdio.h>
void printArray(int *mulTable, int num, int n)
{
    for(int i = 0; i < n; i++)
    {
        mulTable = num * (i + 1);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%dx%d = %d\n", num, i+1, mulTable[i]);
    }
}
int main()
{
    int r, c;
    int mulTable[r][c];
    printf("Enter the rows:");
    scanf("%d", &r);
    printf("Enter the columns:");
    scanf("%d", &c);
    printArray(mulTable[0], 2, 10);
    printArray(mulTable[1], 7, 10);
    printArray(mulTable[2], 9, 10);
    return 0;
}