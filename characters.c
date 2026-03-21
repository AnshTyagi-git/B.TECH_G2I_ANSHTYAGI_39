#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character to check:");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        printf("%c is a lowercase letter\n",ch);
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("%c is a uppercase letter\n",ch);
    }
    else if (ch>=0 && ch<=9)
    {
        printf("%c is a number\n",ch);
    }
    else if (ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='&'||ch=='^'||ch=='~'||ch=='?'||ch=='_')
    {
        printf("%c is a special character\n",ch);
    }
    else if (ch=='+'||ch=='-'||ch=='/'||ch=='*')
    {
        printf("%c is a arithmetic operator\n",ch);
    }
    else if (ch=='['||ch==']'||ch=='{'||ch=='}'||ch=='('||ch==')')
    {
        printf("%c is a bracket\n",ch);
    }
    else
    {
        printf("%c is an unspecified character\n",ch);
    }
    return 0;
}