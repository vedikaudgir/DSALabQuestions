#include <stdio.h>
#include <string.h>

void stringReverse(char s[])
{
    int i, l = strlen(s);
    char temp[50];
    strcpy(temp, s);
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = temp[l - i - 1];
    }
    s[l + 1] = '\0';
}
void main()
{
    char s1[50], temp[50];
    printf("\nEnter the string - ");
    scanf("%s", s1);
    strcpy(temp,s1);
    stringReverse(s1);
    if (strcmp(temp,s1) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
}