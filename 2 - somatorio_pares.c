#include <stdio.h>

int main(){
	
	int soma = 0,i;
	
	for(i = 0;i <= 500;i++){
		if(i % 2 == 0){
			soma = soma + i;
			printf("%d = %d + %d\n",soma,soma,i);
		}
	}
		printf("Somat�rio dos n�meros pares: %d",soma); 
	
	
	
	
	
	
	
	return(0);
}