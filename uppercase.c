#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[31];
    printf("Input: ");
    scanf("%s", &word);

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // If lowercase
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            printf("%c", word[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");

}