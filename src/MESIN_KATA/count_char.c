#include "count_char.h"
#include <stdio.h>

int count_char(char needle) {
    int count;
    count = 0;
    
    START();
    while (CC != MARK) {
        if (CC == needle) {
            count ++;
        }
        ADV();
    }
    return count;
}


int count_kata(Kata point) {
    int count = 0;

    STARTKATA();
    while (EndKata != true) {
        if (IsKataSama(point, CKata)) {
            count ++;
        }
        ADVKATA();
    }
}

boolean IsKataSama(Kata k1, Kata k2) {
    int i;
    boolean found;

    if (k1.Length == k2.Length) {
        i = 1;
        found = false;
        while ((found != true) && (i <= k1.Length)) {
            if (k1.TabKata[i] != k2.TabKata[i]) {
                found = true;
            }
            else {
                i ++;
            }
        }
        return (found == false);
    }
    else {
        return false;
    }
}

