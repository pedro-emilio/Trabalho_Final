#include <iostream>
#include <math.h>

/*
Faculdade de Medicina de Ribeirão Preto - Universidade de São Paulo (FMRP-USP)
Fundamentos de Informática em Biomecânica
Trabalho Final - Cruzamento de Retas
Discentes: Pedro Emilio Andrade Martins    N°USP - 11812500
Discentes: Juliana Sayuri Sakamoto    N°USP - 11858411		
Docente: Paulo Santiago
*/

int main ()
{	
	//Declaração de Variáveis
	char sex; 		
	int idade, aux, aux2, score;	
	float altura, peso, dc1, dc2, dc3, dc4, dc5, dc6, dc7;		
	float imc, dc, Porcent_G, massa_g, massa_m;
	
	//Inserção dos Valores do Usuário
	printf("Insira o sexo (m - para masculino) e (f - para feminino): ");
	scanf("%c", &sex);
	printf("\nInsira a idade: ");
	scanf("%d", &idade);
	printf("\nInsira a altura em metros: ");
	scanf("%f", &altura);
	printf("\nInsira o peso em kg: ");
	scanf("%f", &peso);
	printf("\nInsira os valores das dobras cutaneas: ");
	printf("\nPeitoral --> ");
	scanf("%f", &dc1);
	printf("Triceps --> ");
	scanf("%f", &dc2);
	printf("Subescapular --> ");
	scanf("%f", &dc3);
	printf("Axilar Media --> ");
	scanf("%f", &dc4);
	printf("Suprailiaca --> ");
	scanf("%f", &dc5);
	printf("Abdomen --> ");
	scanf("%f", &dc6);
	printf("Coxa --> ");
	scanf("%f", &dc7);
	
	//Fórmula IMC
	imc = peso/(altura * altura);
	
	//Fórmula da Densidade Corporal segundo Jackson e Pollock
	dc = (1.112 - 0.00043499 * (dc1 + dc2 + dc3 + dc4 + dc5 + dc6 + dc7) + 0.00000055 * pow(dc1 + dc2 + dc3 + dc4 + dc5 + dc6 + dc7, 2) - 0.00028826 * (idade));
	
	//Fórmula do Percentual de Gordura de acordo com Siri
	Porcent_G = ((4.95/ dc) - 4.50) * 100;
	
	//Conversão de percentual para kg de massa gorda e massa magra
	massa_g = peso * (Porcent_G / 100);
	massa_m = peso - massa_g;
	
	//Tabela dos Resultados Obtidos
	printf("\n***Resultados Obtidos:***\n\n");
	printf("IMC (kg/m^2) \t Densidade Corporal \t Porcentagem de Gordura (%) \t Massa Gorda (kg) \t Massa Magra (kg)\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf("%.3f \t\t\t %.3f \t\t\t %.3f \t\t\t %.3f \t\t %.3f\n\n",imc, dc, Porcent_G, massa_g, massa_m);
	
	
	//Padrões de Gordura Corporal de acordo com Idade, Sexo e Porcentagem de Gordura
		//Idade entre 20 e 29
	if(idade >= 20 && idade <= 29 && sex == 'm' && Porcent_G < 11)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'm' && Porcent_G >= 11 && Porcent_G < 13)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'm' && Porcent_G >= 13 && Porcent_G < 20)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'm' && Porcent_G >= 20 && Porcent_G <= 23)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'm' && Porcent_G > 23)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}		
	
	else if(idade >= 20 && idade <= 29 && sex == 'f' && Porcent_G < 16)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'f' && Porcent_G >= 16 && Porcent_G < 19)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}		
	else if(idade >= 20 && idade <= 29 && sex == 'f' && Porcent_G >= 19 && Porcent_G < 28)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'f' && Porcent_G >= 28 && Porcent_G <= 31)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 20 && idade <= 29 && sex == 'f' && Porcent_G > 31)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}
	
		//Idade entre 30 e 39
	else if(idade >= 30 && idade <= 39 && sex == 'm' && Porcent_G < 12)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'm' && Porcent_G >= 12 && Porcent_G < 14)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'm' && Porcent_G >= 14 && Porcent_G < 21)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'm' && Porcent_G >= 21 && Porcent_G <= 24)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'm' && Porcent_G > 24)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}	
		
	else if(idade >= 30 && idade <= 39 && sex == 'f' && Porcent_G < 17)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'f' && Porcent_G >= 17 && Porcent_G < 20)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'f' && Porcent_G >= 20 && Porcent_G < 29)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'f' && Porcent_G >= 29 && Porcent_G <= 32)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 30 && idade <= 39 && sex == 'f' && Porcent_G > 32)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}		
		
		
		//Idade entre 40 e 49
	else if(idade >= 40 && idade <= 49 && sex == 'm' && Porcent_G < 14)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}	
	else if(idade >= 40 && idade <= 49 && sex == 'm' && Porcent_G >= 14 && Porcent_G < 16)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 40 && idade <= 49 && sex == 'm' && Porcent_G >= 16 && Porcent_G < 23)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 40 && idade <= 49 && sex == 'm' && Porcent_G >= 23 && Porcent_G <= 26)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 40 && idade <= 49 && sex == 'm' && Porcent_G > 26)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}	
		
	else if(idade >= 40 && idade <= 49 && sex == 'f' && Porcent_G < 18)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}	
	else if(idade >= 40 && idade <= 49 && sex == 'f' && Porcent_G >= 18 && Porcent_G < 21)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 40 && idade <= 49 && sex == 'f' && Porcent_G >= 21 && Porcent_G < 30)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 40 && idade <= 49 && sex == 'f' && Porcent_G >= 30 && Porcent_G <= 33)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 40 && idade <= 49 && sex == 'f' && Porcent_G > 33)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}	
		
		
		//Idade entre 50 e 59
	else if(idade >= 50 && idade <= 59 && sex == 'm' && Porcent_G < 15)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}	
	else if(idade >= 50 && idade <= 59 && sex == 'm' && Porcent_G >= 15 && Porcent_G < 17)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 50 && idade <= 59 && sex == 'm' && Porcent_G >= 17 && Porcent_G < 24)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 50 && idade <= 59 && sex == 'm' && Porcent_G >= 24 && Porcent_G <= 27)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 50 && idade <= 59 && sex == 'm' && Porcent_G > 27)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}	
		
	else if(idade >= 50 && idade <= 59 && sex == 'f' && Porcent_G < 19)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Atleta");
			aux = 1;
		}	
	else if(idade >= 50 && idade <= 59 && sex == 'f' && Porcent_G >= 19 && Porcent_G < 22)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Bom");
			aux = 2;
		}
	else if(idade >= 50 && idade <= 59 && sex == 'f' && Porcent_G >= 22 && Porcent_G < 31)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Normal");
			aux = 3;
		}
	else if(idade >= 50 && idade <= 59 && sex == 'f' && Porcent_G >= 31 && Porcent_G <= 34)
		{
			printf("Classificacao do Padrão de Gordura Corporal Ideal = Elevado");
			aux = 4;
		}
	else if(idade >= 50 && idade <= 59 && sex == 'f' && Porcent_G > 34)
		{
			printf("Classificacao do Padrao de Gordura Corporal Ideal = Muito Elevado");
			aux = 5;
		}	
		
			
	else if(idade < 20 || idade > 59 )
		{
			printf("\n\nUma vez que os valores padroes utilizados correspondem a pessoas entre 20 e 59 anos, individuos nao pertencentes a esta faixa etaria devem ser analisados a partir de um nutricionista");
		}	
	else if(sex != 'm' && sex != 'f' )
		{
			printf("\n\nE necessario que insira um sexo valido para a realizacao para a analise de parametros");
		}	
	
	
	//Padrões do IMC
	if(imc < 18.5)
		{
		printf("\nClassificacao do IMC: Abaixo do Peso");
		aux2 = 1;
		}
	else if(imc >= 18.5 && imc < 25)
		{
		printf("\nClassificacao do IMC: Ideal");
		aux2 = 2;
		}
	else if(imc >= 25 && imc < 30)
		{
		printf("\nClassificacao do IMC: Sobrepeso");
		aux2 = 3;
		}
	else if(imc >= 30)
		{
		printf("\nClassificacao do IMC: Obesidade");
		aux2 = 4;
		}
		
	//Pontuação associada entre IMC e Porcentagem de Gordura Corporal	
	score = aux + aux2;	
	
	if(score == 2 || score == 3)
		{
		printf("\nConclusao: Pode apresentar riscos na cognicao do individuo, sendo mais significativo em crianças em desenvolvimento e idosos ");
		}
		
	else if(score >=4 && score <=6)
		{
		printf("\nConclusao: Apresenta baixos riscos relacionados ao desenvolvimento de deficiencias motoras");
		}	
		
	else if(score >=7 && score <=9)
		{
		printf("\nConclusao: Apresenta alto risco de perda de flexibilidade, de deficit na coordenacao motora e de problemas articulatorios com mudanças na amplitude do movimento do quadril. \nTais riscos sao mais provaveis em criancas e idosos, cabendo ao nutricionista realizar as analises de modo preciso.");
		}	
		
}
