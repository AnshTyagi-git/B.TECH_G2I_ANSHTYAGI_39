#include <stdio.h>
int main()
{float a,b,c;
    char op;
printf("Choose from the following operations: \"+\" \"-\" \"*\" \"/\"\n");
printf("Enter the operation:");
scanf("%c",&op);
printf("Enter the first number:");
scanf("%f",&a);
printf("Enter the second number:");
scanf("%f",&b);
switch(op)
{
    case '+': c=a+b;
    printf("The addition of the two numbers is %.2f",c);
    break;
    case '-': c=a-b;
    printf("The subtraction of the two numbers is %.2f",c);
    break;
    case '*': c=a*b;
    printf("The multipliaction of the two numbers is %.2f",c);
    break;
    case '/': c=a/b;
    printf("The division of the two numbers is %.2f",c);
    break;

}

return 0;
}