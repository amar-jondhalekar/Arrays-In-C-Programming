// Pointer Arithmetic
#include<stdio.h>
int main()
{
    int a;
    int *ptr = &a;
    printf("The value of a is: %d\n", ptr);
    ptr++;
    ptr++;
    ptr++;
    ptr--;
    ptr--;
    ptr--;
    printf("The value of ptr when incremented: %d",  ptr);
    return 0;
}