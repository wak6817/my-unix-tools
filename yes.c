#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    while (1)
    {
        if (argc > 1)
        {
            for (i = 1; i < argc; i++)
            {
                printf("%s", argv[i]);

                if (i < argc - 1)
                    putchar(' ');
            }
        }
        else
        {
            putchar('y');
        }

        putchar('\n');
    }

    return 0;
}
