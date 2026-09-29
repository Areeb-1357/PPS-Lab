#include <Stdio.h>
int main()
{
    int choice, units;
    float bill;

    printf("ELECTRICITY BILL CALCULATOR\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");
    printf("3. Industrial\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    printf("Enter Units Consumed : ");
    scanf("%d", &units);
    if (units<0)

{
    printf("Invalid Units");
    return 0;
}
    switch(choice)

{
case 1 :
    bill = units*2;
    printf("Domestic Bill = RS. %.2f", bill);
    break;

case 2 :
    bill = units*5;
    printf("Commercial Bill = RS. %.2f", bill);
    break;

case 3 :
    bill = units*7;
    printf("Industrial Bill = RS. %.2f", bill);
    break;

default :
    printf("Invalid Choice");
}
return 0;
}
