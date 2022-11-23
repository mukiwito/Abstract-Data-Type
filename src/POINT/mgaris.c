/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 9 September 2021 */
/* Topik Praktikum : Praktikum 1 */
/* Deskripsi : program menerima input dari garis dan membandingkannya dengan n buah garis lain*/

#include <stdio.h>
#include "garis.h"
#include "boolean.h"
#include "point.h"

int main() 
{
    /* KAMUS */
    int i,n,sejajar,tegak;
    GARIS P,Pn;
    /* ALGORITMA */
    i = 0;
    sejajar = 0;
    tegak = 0;
    BacaGARIS(&P);
    scanf("%d", &n);
    while(i<n) {
        BacaGARIS(&Pn);
        if (IsTegakLurus(P,Pn)) {
            tegak += 1;
            i += 1;
        }
        else if (IsSejajar(P,Pn)) {
            sejajar += 1;
            i += 1;
        } else {
            i += 1;
        }
    }
    printf("Sejajar: %d\n", sejajar);
    printf("Tegak lurus: %d\n", tegak);
    return 0;
}