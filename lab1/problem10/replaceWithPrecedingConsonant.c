#include <stdio.h>
#include <string.h>

void replaceWithPrecedingConsonant(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
        {
            s[i]--;
        }
    }
}
void main()
{
    char s1[50];

    printf("\nEnter the string - ");
    scanf("%s", s1);
    replaceWithPrecedingConsonant(s1);
    printf("\nThe new string is - %s", s1);
}