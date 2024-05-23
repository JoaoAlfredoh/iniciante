#include <stdio.h>
#include <locale.h>
#include <limits.h>

void main (){
	setlocale(LC_ALL,"");
	
	int vagas, ncsm, ncsf, curso;
	float maxCand, porcf, maior, maior_curso;
	
	vagas = 0;
	maxCand = 0;
	curso = 0;
	maior = INT_MIN;
	maior_curso = 0;
	
	printf ("Digite o código do curso: ");
	scanf ("%d", &curso);
	
	while (curso > 0) {
		
		printf ("Informe o número de vagas: ");
		scanf ("%d", &vagas);
		
		printf ("Informe o número de vagas do Sex. Masc.: ");
		scanf ("%d", &ncsm);
		
		printf ("Informe o número de vagas do Sex. Fem.: ");
		scanf ("%d", &ncsf);
		
	// calculando o nº de candidatos por vaga: 
	
		maxCand = (float)(ncsm + ncsf)/vagas;
		
	// calculando a porcentagem de candidatas do sexo feminino:	 
		porcf = (float)ncsf / (ncsf + ncsm) * 100;
		
		printf ("Curso %d\n", curso);
		printf ("Cand/Vagas: %.2f\n", maxCand);
		printf ("Porc. de Candidatos do sexo feminino: %.2f\n ", porcf);
		
		if (maxCand>maior) {
			maior = maxCand;
			maior_curso = curso;
		}
				
	printf ("Digite o código do curso");
	scanf ("%d", &curso);
		
	}
	
	printf ("Curso mais concorrido: %d\n", maior_curso);
	printf ("Porcentagem de Candidatos do sexo feminino: %.2f\n", porcf);
	
}

