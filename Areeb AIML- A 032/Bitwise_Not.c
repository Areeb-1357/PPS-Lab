#include <stdio.h>
int main()
{
    int a, result;
    printf("Enter a Number : ");
    scanf("%d", &a);

    result = ~a;
    printf("NOT Result = %d", result);
    return 0;

}
