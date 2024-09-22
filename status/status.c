#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
    if (argc != 2)
    {
        printf("Missing comand-line argument\n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}