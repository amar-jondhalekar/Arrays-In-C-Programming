#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr = arr;
    //ptr = ptr + 2;
    ptr++;
    ptr++;
    if(ptr == & arr[2])
    {
        printf("These points to the same location in memory.\n");
    }
    else{
        printf("These do not points to the same location in memory.\n");
    }
}