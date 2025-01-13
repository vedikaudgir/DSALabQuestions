#include <stdio.h>
#include <string.h>

int checkPalindrome(char s[])
{
    int i, l = strlen(s), c = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[(l - i - 1)])
        {
            c++;
        }
    }
    if (c == l)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    char s1[50];
    printf("\nEnter the string - ");
    scanf("%s", s1);

    if (checkPalindrome(s1))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
}