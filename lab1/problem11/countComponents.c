#include <stdio.h>
#include <string.h>

void main()
{
    char a[50];
    int i,na,nd,ns;

    printf("\nEnter the string - ");
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            na++;
        }
        else if (a[i] >= 48 && a[i] <= 57)
        {
            nd++;
        }
        else
        {
            ns++;
        }
    }
    
    printf("\nNumber of alphabets is - %d",na);
    printf("\nNumber of digits is - %d",nd);
    printf("\nNumber of special symbols is - %d",ns);
    
}