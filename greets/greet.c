#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
    if (argc == 2)
    {
        printf("Prazer em te conhecer, %s", argv[1]);
    }
    else
    {
        printf("Prazer em te conhecer!");
    }
}