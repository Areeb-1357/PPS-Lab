#include <stdio.h>
int main()
{
    int values[5];
    printf("Enter 5 Integers : ");

    //taking input and storing it in an array
    for(int i=0; i<5; i++)
    {
         scanf("%d", &values[i]);

    }
    printf("Displaying Intergers : ");

    //printing elements of the array
    for(int i=0; i<5; i++)
    {
        printf("%d\t+", values[i]);
    }
    return 0;

}
