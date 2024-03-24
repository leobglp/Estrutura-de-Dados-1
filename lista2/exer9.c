#include <stdio.h>

void swap(int *x, int *y){
	int aux=*x;
	*x=*y;
	*y=aux;
}

int main(){
	int x=1;
	int y=2;
	swap(&x, &y);
	printf("x=%d", x);
	printf(" y=%d", y);
}
