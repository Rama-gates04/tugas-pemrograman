/* File program ganjil.c
menampilkan bilangan ganjil antara 7 25 kecuali 15 */
#include <stdio.h>

int main()
{
    int x;

    for (x = 7; x <= 25; x += 2)
    {
        if (x == 15)
            continue;
        printf("%4d", x);
    }
    printf("\n");
}

   7   9  11  13  17  19  21  23  25