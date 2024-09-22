#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[31];
    printf("Before: ");
    scanf("%s", &name);
    printf("After: ");
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c", toupper(name[i]));
    }
    printf("\n");
}