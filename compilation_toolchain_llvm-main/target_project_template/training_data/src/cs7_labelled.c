#include "aliascheck.h"
void foo(int **p, int **q){

	*q = *p;

}


void main(){

	int **a,**b,**c,**d,**e,**f,*x,*y,*z,*w,*k,x1,y1,z1,w1,k1;
	x = &x1;
	y = &y1;
	w = &w1;
	k = &k1;

	a = &x;
	b = &y;
	c = &w;
	d = &k;

	foo(a,b);
------- LABEL 1
	foo(c,d);
------- LABEL 2
------- LABEL 3
------- LABEL 4

}
