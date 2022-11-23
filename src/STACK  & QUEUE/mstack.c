/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 30 September 2021 */
/* Topik Praktikum : Praktikum 4 */
/* Deskripsi : program membandingkan hasil dari dua buah set operasi menggunakan ADT stack */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    /* KAMUS */
    int n,m,a,b;
    Stack P,Q;
    int i,j,k;
    infotype output_a,output_b;
    boolean found;
    /* ALGORITMA */
    scanf("%d", &n);
    CreateEmpty(&P);

    i = 1;
    while (i <= n) {
        scanf("%d", &a);
        if (a == -1) {
            if (!IsEmpty(P)) {
                Pop(&P,&output_a);
            }
        }
        else {
            Push(&P, a);
        }
        i = i+1;
    }

    scanf("%d", &m);
    CreateEmpty(&Q);

    j = 1;
    while (j <= m) {
        scanf("%d", &b);
        if (b == -1) {
            if (!IsEmpty(Q)) {
                Pop(&Q,&output_b);
            }
        }
        else {
            Push(&Q, b);
        }
        j = j+1;
    }

    if (IsEmpty(P) && IsEmpty(Q)) {
        printf("SAMA\n");
    }
    else {
        found = false;
        while ((!IsEmpty(Q) || !IsEmpty(P)) && (!found)) {
            if (!IsEmpty(Q) && !IsEmpty(P)) {
                Pop(&P,&output_a);
                Pop(&Q,&output_b);
                if (output_a != output_b) {
                    found = true;
                }
            }
            else {
                found = true;
            }
        }
        if (found) {
            printf("BEDA\n");
        }
        else {
            printf("SAMA\n");
        }
    }

}