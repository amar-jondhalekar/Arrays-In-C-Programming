//Write a pgm containing function which reverse the array passed to it.
#include<stdio.h>
int reverse(int *arr, int n)
{
    int temp;
    for(int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
   
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr, 7);
     for(int i = 0; i < 7; i++)
    {
        printf("The value of %d elements is: %d\n", i, arr[i]);
    }
    return 0;
}