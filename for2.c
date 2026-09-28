/* File program : for2.c
Contoh pemakaian for untuk membentuk deret turun */
#include <stdio.h>

int main()
{
    int bilangan;

    for (bilangan = 60; bilangan >= 10; bilangan -= 10)
        printf("%d\n", bilangan);
}

60
50
40
30
20
10