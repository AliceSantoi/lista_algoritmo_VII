#include <stdio.h>
#include <locale.h>

//refa�a usando fun��o.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,num;
	int fat = 1;
	
	printf("Insira o n�mero: ");
	scanf("%d",&num);
		if(num < 0){
			printf("N�o h� fatorial para este n�mero.");
		}else{
			for(i = 1; i <= num; i++){
			fat = fat * i;
			}
			printf("O resultado de !%d �: %d\n",num,fat);
		}
	
	
	
	
	
	
	
	return(0);
}