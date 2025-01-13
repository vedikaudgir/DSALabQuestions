#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()
{
    int i, j;
    char s[50], ss[50];
    bool found;

    puts("Enter string:");
    gets(s);

    puts("Enter subtring to find:");
    gets(ss);

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 1;
        for (j = 0; ss[j] != '\0'; j++)
        {
            if (s[i + j] != ss[j])
            {
                found = 0;
                break;
            }
        }
        if (found && ss[j] == '\0')
        {
            printf("\nSubstring found at index = %d", i);
        }
    }
}