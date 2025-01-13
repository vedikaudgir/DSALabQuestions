#include <stdio.h>
#include <string.h>

char maximumFrequencyChar(char s[])
{
    char frequency[256];
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        frequency[s[i]]++;
    }
    int max = 0;
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] >= frequency[max])
        {
            max = i;
        }
        
    }
    
    return max;
}
void main()
{
    char s1[50];

    printf("\nEnter the string - ");
    scanf("%s", s1);
    printf("\nThe highest frequency char of %s is - %c",s1,maximumFrequencyChar(s1));
}