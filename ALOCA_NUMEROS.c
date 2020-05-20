#include <stdio.h>
#include <stdlib.h>

void aloca(int **p, int q);
void recebe(int *p, int q);
void mostra(int *p, int q);

main()
{

int *ptr=NULL, qtde;
do{
    printf("Digite a quantidade de numeros (max. 5): ");
    scanf("%i",&qtde);
    fflush(stdin);
}while(qtde<1 || qtde>5);

aloca(&ptr,qtde);
recebe(ptr,qtde);
mostra(ptr,qtde);
}

void aloca(int **p, int q)
{
if((*p=(int*)realloc(*p,q*sizeof(int)))==NULL)
  exit(1);
}

void recebe(int *p, int q)
{
int x;
for(x=0;x<q;x++,p++)
{
    printf("Endereco: %i  -  %i numero: ", p,x+1);
    scanf("%i",p);
    fflush(stdin);
}
printf("\n\n\n");
}

void mostra(int *p, int q)
{
int x;
for(x=0;x<q;x++,p++)
{
    printf("Endereco: %i  -  %i numero: %i\n", p, x+1, *p);
}
printf("\n\n\n");
system("pause");
}


