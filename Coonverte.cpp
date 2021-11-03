/* Implementar um sistema que o usuário 
digite um valor em metros(m) e converta 
para centímetros (cm)
-- Digite o Valor em (m)
-- O valor Coovertido de X (m) é Y (cm)
*/
#include <stdio.h>

int main()
{
 

 float metros, centimetros, resultado;

    printf("Digite o valor em metros(m)\n");
    scanf("%f",&metros);
    
    resultado = (metros * 100);
    
    
    if(resultado > 0){
	printf("O valor coonvertido de %.2f(m) e %.2f(cm)",metros ,resultado);
	}
	else
	{
		if(resultado <= 0){
			printf("ERRO- \n Valor não encontrado");
		}
	}
	
   
   return 0;
}
