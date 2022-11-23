/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 30 September 2021 */
/* Topik Praktikum : Praktikum 4 */
/* Deskripsi : program menghitung jumlah pengguna yang sedang online */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    /* KAMUS */
    int n,x;
    infotype output;
    Queue Q;
    int i;
    /* ALGORITMA */
    scanf("%d", &n);
    CreateEmpty(&Q,n);

    i = 1;
    while (i <= n) {
        scanf("%d", &x);
        if (IsEmpty(Q)){
            Add(&Q,x);
            printf("%d\n", NBElmt(Q));
        }
        else {
            while ((x-InfoHead(Q)) > 300) {
                Del(&Q, &output);
            }
            Add(&Q,x);
            printf("%d\n", NBElmt(Q));
        }
        i = i+1;
    }
}