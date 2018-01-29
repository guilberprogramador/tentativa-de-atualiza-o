#include <stdio.h>
#include <stdlib.h>

bool Verificar(int nota){
	if (nota>=60)
			return true;
	    else
			return false;		
}

int main()
{

	int nota[50], contador[3] = {0,0,0};
		
	printf(" Atencao sao 50 notas digite uma nota seguida da outra\n ");

    for(contador[0] = 0; contador[0] < 3; contador[0]++)
	{
		printf("Digite a nota:");
        scanf("%i",&nota[contador[0]]);
        
        Verificar(nota[contador[0]]);
        
	}
	
	printf("%i alunos tiveram nota acima da media e %i abaixo da media.",contador[1],contador[2]);

    getch();
}
