#include <stdio.h>

void vetor(int *vetor, int valor){
	int i;
	for(i=0; i<3; i++){
		if(vetor[i] == valor){
			printf("%x\n", vetor[i]);
		}
	}
	return NULL;
}

int main(){
	int v[3] = {1,2,3};
	int x=0;
	vetor(v, x);
}