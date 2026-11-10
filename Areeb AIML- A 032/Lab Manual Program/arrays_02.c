#include <stdio.h>
void main()
{
    int s[5],sum=0;
    printf("Enter 5 Values : ");
    for(int i=0; i<5; i++)
        scanf("%d", &s[i]);

    for(int i=0; i<5; i++)
        sum=sum + s[i];

    printf("Sum of the array = %d", sum);
}
