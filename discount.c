/*File Program : discount.c
Contoh penggunaan if untuk menghitung nilai discount*/

#include <stdio.h>

int main()
    {
        double total_pembelian, discount = 0;
        /* discount diinisialisasi dengan nilai 0 */

        printf("total pembelian = Rp ");
        scanf("%lf", &total_pembelian);

        if(total_pembelian >= 100000)
            discount = 0.05 * total_pembelian; /* 5% dari total pembelian */
        printf("Besarnya discount = Rp %.2lf\n", discount);
    }