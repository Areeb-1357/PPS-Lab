#include <stdio.h>
void main(void)
{
    int num, i;
    printf("Enter a Number : ");
    scanf("%d", &num);
    i = 2;
    while (i <= num - 1)
    {
        if(num % i == 0)
        {
            printf("\nThe Given Number %d is not a Prime Number.\n", num);
            break;
        }
        i++;
    }
    if(i == num)
     printf("\nThe Given Number %d is a Prime Number.\n", num);
    
}