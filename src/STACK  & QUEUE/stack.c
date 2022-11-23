/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 29 September 2021 */
/* Topik Praktikum : Praktikum 4 */
/* Deskripsi : implementasi stack.h */

#include <stdio.h>
#include "stack.h"

void CreateEmpty (Stack *S) {
    Top(*S) = Nil;
}

boolean IsEmpty (Stack S) {
    return (Top(S) == Nil);
}

boolean IsFull (Stack S) {
    return (Top(S) == MaxEl);
}

void Push (Stack * S, infotype X) {
    Top(*S) = Top(*S) + 1;
    InfoTop(*S) = X;
}

void Pop (Stack * S, infotype* X) {
    *X = InfoTop(*S);
    Top(*S) = Top(*S) - 1;
}
