/* File program : jumkar.c
Menhitung jumlah kata dan karakter dalam suatu kalimat */
#include <stdio.h>

int main()
{
    char kar;
    int jumkar = 0, jumspasi = 0;

    puts("Masukkan sebuah kalimat dan akhiri dgn ENTER.\n");
    puts("Saya akan menghitung jumlah karakter ");
    puts("pada kalimat tersebut.\n");

    while ((kar = getchar()) != '\n')
    {
        jumkar++;
        if (kar == ' ') 
            jumspasi++;
    }

    printf("\nJumlah karakter = %d", jumkar);
    printf("\nJumlah SPASI    = %d\n\n", jumspasi);
}

Masukkan sebuah kalimat dan akhiri dgn ENTER.

Saya akan menghitung jumlah karakter 
pada kalimat tersebut.

Belajar bahasa C sangat menyenangkan

Jumlah karakter = 36
Jumlah SPASI    = 4