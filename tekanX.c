/* File program : keluar dengan tekan X.c
Pemakaian exit() untuk menghentikan eksekusi program */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;

    printf("Tekanlah X untuk menghentikan program.\n");

    for (;;)
    {
        while ((kar = getchar()) == 'X')
            exit(0);
    }
}

Tekanlah X untuk menghentikan program.
X