#include <stdio.h>
#include <string.h>

void replaceWithNextVowel(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a')
        {
            s[i] = 'e';
        }
        else if (s[i] == 'e')
        {
            s[i] = 'i';
        }
        else if (s[i] == 'i')
        {
            s[i] = 'o';
        }
        else if (s[i] == 'o')
        {
            s[i] = 'u';
        }
        else if (s[i] == 'A')
        {
            s[i] = 'E';
        }
        else if (s[i] == 'E')
        {
            s[i] = 'I';
        }
        else if (s[i] == 'I')
        {
            s[i] = 'O';
        }
        else if (s[i] == 'O')
        {
            s[i] = 'U';
        }
        else if (s[i] == 'u')
        {
            s[i] = 'a';
        }
        else if (s[i] == 'U')
        {
            s[i] = 'A';
        }
    }
}
void main()
{
    char s1[50];

    printf("\nEnter the string - ");
    scanf("%s", s1);
    replaceWithNextVowel(s1);
    printf("\nThe new string is - %s",s1);
}