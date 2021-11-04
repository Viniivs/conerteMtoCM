# Coonversor de Metros para Centímetros.

Instale o Dev C++;
Plataforma Windows;
Desenvolvido em C;
Auto: Vinícius Vargas de Souza;
Dia: 03/11/2021;



O sistema "Coonverte" se baseia na entrada do valor em metros(m), para logo em seguida realizar a conversão em centímetros(cm), na operação de multiplicação do valor digitado pelo usuário multiplicado por 100! 

printf("Digite o valor em metros(m)\n");
    scanf("%f",&metros);
    
    resultado = (metros * 100);

Logo após o programa irá mostrar o valor final da conversão de metros para centímetros:

 
    if(resultado > 0){
	printf("O valor coonvertido de %.2f(m) e %.2f(cm)",metros ,resultado);
	}
	else
	{
		if(resultado <= 0){
			printf("ERRO- \n Valor não encontrado");
		}
	}
