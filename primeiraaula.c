#include<stdio.h>
/*Receba como argumento um array d tipo inteiro
  e inverta os valores d Array*/
void funcao(int *vet)
{
int i, aux;
for(i=0; i<4/2; i++)
    {
        aux = vet[i];
        vet[i]= vet[4-1-i];
        vet[4-1-i]= aux;
    }
}
int main()
{
int i, vet[]={1,2,3,4};
printf("Vetor original:");
for(i=0;i<4; i++)
{
    printf("%d", vet[i]);
}
funcao(vet);
printf("\nVetor Invertido:");
for(i=0;i<4; i++)
{
    printf("%d", vet[i]);
}
return 0;
}
