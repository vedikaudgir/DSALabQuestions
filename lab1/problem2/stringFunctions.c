#include <stdio.h>
#include <string.h>

int stringLength(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;
    return i;
}

void stringConcatenate(char s1[], char s2[])
{
    int i, l1 = stringLength(s1), l2 = stringLength(s2);
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[l1 + i] = s2[i];
    }
    s1[l1 + l2] = '\0';
}

void stringCopy(char s1[], char s2[])
{
    int i, l1 = stringLength(s1), l2 = stringLength(s2);
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[l2] = '\0';
}

int stringCompare(char s1[], char s2[])
{
    int i;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[1];
        }
    }
    if (s1[i] == s2[i])
    {
        return 0;
    }
}
void main()
{
    char s1[50], s2[50];

    printf("\nEnter first string - ");
    scanf("%s", s1);
    printf("\nEnter second string - ");
    scanf("%s", s2);

    stringConcatenate(s1, s2);
    printf("\nThe concatenated strings are - %s", s1);
    stringCopy(s1, s2);
    printf("\nThe copied strings are - %s", s1);
    printf("\nthe length of s1 - %d\nThe length of s2 - %d", stringLength(s1), stringLength(s2));
    printf("\nThe comparison of both are %d", stringCompare(s1, s2));
}