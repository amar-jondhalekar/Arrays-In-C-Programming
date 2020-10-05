/*Write a program containing function which counts 
the numbers of positive/negative integer in an array*/
#include<stdio.h>
int Positive_El(int *arr, int n)
{
    int pos_count = 0;
    for(int i  = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            pos_count++;
        }
    }
    return pos_count;
}
int Negative_El(int *arr, int n)
{
    int neg_count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            neg_count++;
        }
    }
    return neg_count;
}
int printArray(int *arr, int n)
{
    printf("The Given Array:- ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
     printf("\n");
}
int main()
{
    int arr [] = {1,3,-5,-8,2,-6,-9,12,-23,33};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    printf("The positive elements in Array is:: %d\n", Positive_El(arr, n));
    printf("The negative elements in Array is:: %d\n", Negative_El(arr, n));
    return 0;
}