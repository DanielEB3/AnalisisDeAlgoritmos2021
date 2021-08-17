#include <stdlib.h>
#include <stdio.h>

int main(){
	int i, num = 0;
	
	printf("¿Cuantos numeros deseas ordenar? \n");
	scanf("%d",&num);

	int arreglo[num];
	for(i=0;i<num;i++){
		arreglo[i]= rand() % (num+1);	
	}

	int j;
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(arreglo[j]<arreglo[i]){
				int aux=0;
                		aux = arreglo[j];
				arreglo[j] = arreglo[i];
				arreglo[i] = aux;	
			}
		}	
	}
	}
}
