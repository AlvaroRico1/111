/*
 * Global pointer in flow-sensitive analysis.
 * Author: Sen Ye
 * Date: 08/11/2013
 */

#include "aliascheck.h"

int x, y; int *p = &x; int *q = &y;
int **pp = &p; int**qq = &q;

void foo() {
------- LABEL 1
}
void bar() {
     qq = &q;
     q = &x;
}
int main() {
    foo();
    bar();
------- LABEL 2
}

