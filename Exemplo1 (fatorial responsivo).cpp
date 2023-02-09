//responsividade: � quando a fun��o que � chamada por ela dentro dela mesma.
//o caso base � o encerramento da fun��o, pra parar de chamar ela.
// caso repusivo � quando ela chama ela mesma.

#include <stdio.h>
#include <locale.h>

/*Fun��o: calcular fatorial.
  Entrada : n inteiro.
  Sa�da: fatorial de n, se n > 0 ou -1, se n < 0.
*/	
int fat(int n){
	if(n==0){
		return 1;
	}if(n>0){
		return n * fat(n-1);
	}
	return -1;// Quando for digitado um numero negativo, retorna a -1.
	
}


int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num, r;
	scanf("%d", &num);
		
	r = fat(num);
	
	if(r==1){
		printf("Entrada inv�lido\n");
	}else{
		printf("%d", fat(num));	
	}

	return 0;
}
