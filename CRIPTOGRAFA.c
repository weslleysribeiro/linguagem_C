#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void criptografa (char *p, int n);


 main()
 {
    char frase[100];
    int n;

    printf("Digite a Frase: \n");
    gets(frase);
    fflush(stdin);
    printf("\nDigite um numero de 1 - 25: \n");

    do{
    scanf("%i",&n);
    }while(n<0 || n>25);

    fflush(stdin);
    criptografa(frase,n);


    getch();
 }

 void criptografa (char *p, int n)
{
    int i, tam;
    tam = strlen(p);

    for(i=0;i<tam;i++)
    {
        if (*(p+i)!=' ')
        {
           *(p+i)=*(p+i)+n;

        }



        if(*(p+i)>'z')
        {
            *(p+i)=*(p+i)-26;
        }

    }
    *(p+i)='\0';
    printf("\n%s",p);
}





