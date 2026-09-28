/* File program : tamat.c
Pemakaian break untuk keluar dari looping */
#include <stdio.h>

int main()
{
    char kar;

    printf("Ketik sembarang kalimat ");
    printf("dan akhiri dengan ENTER\n\n");

    for (;;)
    {
        kar = getchar();
        if (kar == '\n')
            break;
    }
    printf("Selesai\n");
}

Ketik sembarang kalimat dan akhiri dengan ENTER

Menulis apa saja
Selesai