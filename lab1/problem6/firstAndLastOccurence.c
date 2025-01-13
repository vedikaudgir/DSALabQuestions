#include <stdio.h>
#include <string.h>

int firstOccurence(char s[], char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}
int lastOccurence(char s[], char c)
{
    int i, l = strlen(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[l - i - 1] == c)
        {
            return (l - i - 1);
        }
    }
    return -1;
}
void main()
{
    char s1[50], c;

    printf("\nEnter the string - ");
    scanf("%s", s1);

    printf("\nEnter a character - ");
    scanf(" %c", &c);

    printf("\nThe first ocurence of %c is - %d",c,firstOccurence(s1,c));
    printf("\nThe last ocurence of %c is - %d",c,lastOccurence(s1,c));
}