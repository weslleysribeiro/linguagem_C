//Determine a soma dos elementos de cada coluna de uma matriz int com 3 linhas e 4 colunas, e
//verifique qual coluna obteve o maior valor. Utilizar ponteiro constante para matriz
//bidimensional.

#include <stdio.h>
#include <stdlib.h>

void recebe (float m[3][4]);
void mostra (float m[3][4]);
void soma(float m[3][4]);


main()
{
    float matriz[3][4];

    recebe(matriz);
    mostra(matriz);
    soma(matriz);

    system ("PAUSE");
}


void recebe (float m[3][4])
{
    int lin, col;

    for(lin=0;lin<3;lin++)
        for(col=0;col<4;col++)
        {
        printf("m[%i][%i]: ",lin,col);
        scanf("%f", *(m+lin)+col);
        }
}

void mostra (float m[3][4])
{
    int lin, col;

    for(lin=0;lin<3;lin++)
    {
    printf("\n");
        for(col=0;col<4;col++)
        {
        printf("%.2f\t",*(*(m+lin)+col));
        }
    printf("\n");
    }
}

void soma(float m[3][4])
{

    int lin, col,coluna;
    float soma,maior=0;

    for(col=0;col<4;col++)
    {
    soma=0;
        for(lin=0;lin<3;lin++)
        {
           soma=soma+*(*(m+lin)+col);
        }

        if(col==0)
        {
            maior=soma;
            coluna=col+1;
        }

        if(soma>maior)
        {
            maior=soma;
            coluna=col+1;
        }
    }

        printf("\n\nMaior: %.2f\nColuna: %i\n", maior, coluna);

}





