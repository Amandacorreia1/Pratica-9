#include <stdio.h>
#include <locale.h>

int fibonacci(int n){
	if(n <= 0){
		return -1;
	} if(n > 2){
		return fibonacci(n-1) + fibonacci(n-2);
		}else
			return 1;
}

  
    
int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	printf("\t\t\t\t\tCalcular o fibonacci de um número\n\n");
	
	int num, r;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	r = fibonacci(num);
	
	if(r == -1){
		printf("Entrada inválido\n");
	}else{
		printf("O resultado é: %d", fibonacci(num));	
	}
		
	return 0;
}
