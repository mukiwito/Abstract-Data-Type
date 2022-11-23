/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 29 September 2021 */
/* Topik Praktikum : Praktikum 4 */
/* Deskripsi : implementasi queue.h */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

boolean IsEmpty (Queue Q) {
    /* ALGORITMA */
    return ((Head(Q) == Nil) && (Tail(Q) == Nil));
}

boolean IsFull (Queue Q) {
    /* ALGORITMA */
    return (NBElmt(Q) == MaxEl(Q)); 
}

int NBElmt (Queue Q) {
    /* ALGORITMA */
    if (IsEmpty(Q)) {
        return 0;
    }
    else if (Head(Q) >= Tail(Q)) {
        return MaxEl(Q) + Tail(Q) - Head(Q);
    }
    else {
        return Tail(Q) - Head(Q);
    }
}

void CreateEmpty (Queue * Q, int Max) {
    /* ALGORITMA */
    MaxEl(*Q) = Max;
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

void DeAlokasi(Queue * Q) {
    /* ALGORITMA */
    MaxEl(*Q) = Nil;
    free(Q->T);
}

void Add (Queue * Q, infotype X) {
    /* ALGORITMA */
    if (IsEmpty(*Q)) {
        Head(*Q) = 1;
        Tail(*Q) = 1;
    }
    else {
        if (Tail(*Q) == MaxEl(*Q)) {
            Tail(*Q) = 1;
        }
        else {
            Tail(*Q) = Tail(*Q) + 1;
        }
    }
    InfoTail(*Q) = X;
}

void Del (Queue * Q, infotype * X) {
    /* ALGORITMA */
    *X = InfoHead(*Q);
    if (Head(*Q) == Tail(*Q)) {
        Head(*Q) = Nil;
        Tail(*Q) = Nil;
    }
    else {
        if (Head(*Q) == MaxEl(*Q)) {
            Head(*Q) = 1;
        }
        else {
            Head(*Q) = Head(*Q) + 1;
        }
    }
}