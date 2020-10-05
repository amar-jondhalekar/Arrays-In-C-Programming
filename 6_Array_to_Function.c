#include <stdio.h>
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + 1));
    }
    ptr[2] = 5555; // This value will be change in arr array of main as well.
}
/*
void printArray(int *ptr, int n) -> Only change for *ptr
{
        for(int i = 0; i < n; i++)
        {
            printf("The value of element %d is %d\n", i+1, *(ptr+1));
        }
}
*/
int main()
{
    int arr[] = {12, 34, 22, 33, 12, 23, 44, 45, 65, 56};
    printArray(arr, 10);
    printf("%d", arr[2]);
    return 0;
}