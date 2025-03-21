#include <stdio.h>
int count = 0;
void towerOfHanoi(char source, char destination, char auxiliary, int n)
{
    count++;
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
    }
    else
    {
        towerOfHanoi(source, auxiliary, destination, n - 1);
        printf("Move disk %d from %c to %c\n", n, source, destination);
        towerOfHanoi(auxiliary, destination, source, n - 1);
    }
}
void main()
{
    int n;
    printf("Enter the number of disks:");
    scanf("%d", &n);
    printf("\n");
    towerOfHanoi('A', 'C', 'B', n);
    printf("\nNumber of iterations made:%d\n", count);
}