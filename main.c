# Porcentagem
/**
Objetivo 
	Calcular o desconto sobre um produto.
Descrição
	O programa apresentará o valor final de um produto com o seu desconto aplicado e quanto a pessoa economiza com esse desconto.
**/

#include <stdio.h>

int main(void) {
	float valor_produto, desconto, valor_final, economia;

	printf("Valor do produto em reais: \n");
	scanf("%f", &valor_produto);

  printf("Valor da porcentagem de desconto: \n");
	scanf("%f", &desconto);

	valor_final = valor_produto * ((100-desconto)/100);
  economia = valor_produto * (desconto/100);

	printf("O valor final do produto é R$ %.2f e a economia é de R$ %.2f", valor_final, economia);

  	return 0;
}
