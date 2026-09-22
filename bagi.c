/*File Program : bagi.c
Contoh penggunaan if-else untuk menyeleksi bilangan pembagi*/

#include <stdio.h>

int main()
    {
        float a, b;

        printf("masukkan bilangan a = ");
        scanf("%f", &a);
        printf("masukkan bilangan b = ");
        scanf("%f", &b);

        if (b == 0)
            printf("\n%g dibagi dengan nol = TAK BERHINGGA\n", a);
        else
            printf("\n%g dibagi dengan %g = %g\n", a, b, a/b);
    }