//Write a pgm to create an array of 10 integers and store multiplication for general
//inout provided by the user using scanf();
#include<stdio.h>
int main()
{
    int mul[10], n;
    printf("Enter the multiplication number:\n");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++)
    {
        mul[i] = n * (i+1);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("The %dx%d is: %d\n",n, i+1, mul[i]);
    }
    return 0;
}