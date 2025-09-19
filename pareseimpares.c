#include <stdio.h>
/*Escreva uma função em Linguagem C que receba um vetor de inteiros de
qualquer tamanho, verifique quais elementos desse vetor são pares e quais
são impares, retorne, para a função chamadora, um vetor contendo só os
pares e outro vetor contendo só os impares.*/
void funcao(int a, int *vet, int *par, int *imp,int *qtd_par,int *qtd_imp)
{
    int i,j=0,k=0;

    for(i=0; i<a; i++)
    {
     if(vet[i]%2 == 0)
        {
            par[k]=vet[i];
            k++;
        }
     else
        {
            imp[j]= vet[i];
            j++;
        }
    }
    *qtd_par = k;
    *qtd_imp = j;
}
int main(){
int qtd_par, qtd_imp;
int i,vet[5]={1,2,3,4,5}, par[5],imp[5];
funcao(5,vet,par,imp,&qtd_par, &qtd_imp);
for(i=0;i<qtd_par; i++)
{
    printf(" %d", par[i]);
}
printf("\n");
for(i=0;i<qtd_imp; i++)
{
    printf(" %d", imp[i]);
}

return 0;
}
