#include <stdio.h>
#include <string.h>

void reverseCase(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
        else if (s[i] >= 97 && s[i] <= 113)
        {
            s[i] -= 32;
        }
    }
}
void main()
{
    char s1[50];

    printf("\nEnter the string - ");
    scanf("%s", s1);

    reverseCase(s1);
    printf("The string is - %s",s1);
}