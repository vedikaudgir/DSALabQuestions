#include <stdio.h>
#include <string.h>

void  main()
{
    char s1[50], s2[50];

    printf("\nEnter first string - ");
    scanf("%s",s1);
    printf("\nEnter second string - ");
    scanf("%s",s2);

    printf("\nThe concatenated strings are - %s", strcat(s1,s2));
    printf("\nThe copied strings are - %s", strcpy(s1,s2));
    printf("\nthe length of s1 - %d\nThe length of s22 - %d",strlen(s1),strlen(s2));
    printf("\nThe comparison of both are %d",strcmp(s1,s2));
}