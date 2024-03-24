#include <stdio.h>

void calcMedia(int *array, int n, int *resultado){
	int soma =0;
	int i;
	for(i=0;i<n;i++){
		soma+=array[i];
	}
	*resultado=soma/3;
}

int main(){
	int vet[3]={1,2,3};
	int n=3;
	int r;
	calcMedia(vet, n, &r);
	printf("Resultado: %d\n", r);
}