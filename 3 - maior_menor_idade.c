#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,idade;
	
	for(i = 1;i <= 10;i ++){
		printf("Insira sua idade: ");
		scanf("%d",&idade);
		//system("cls");
			if(idade < 18){
				printf("voc� � menor de idade.\n\n");
			}else{
				printf("voc� � maior de idade.\n\n");
			}
		
		
	}
	
	
	
	
	
	
	return(0);
}