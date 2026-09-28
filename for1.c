/* File program : for1.c
Contoh pemakaian for untuk membentuk deret naik */
#include <stdio.h>

int main()
{
    int bilangan;

    for (bilangan = 20; bilangan <= 100; bilangan += 10)
        printf("%d\n", bilangan);
}

20
30
40
50
60
70
80
90
100