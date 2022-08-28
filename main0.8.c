#include <stdio.h>
#include <stdlib.h>


/// mediana
void mediana(int vet[])
{
    printf("\n");
    printf("As medianas do vetor sao : %d e %d", vet[499],vet[500]);
}

/// função que ordena
void bubble_sort (int vetor[], int n) {
    int k, j, aux,i;

    for (k = n - 1; k > 0; k--) {

        for (j = 0; j < k; j++) {


            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("\n");
    printf("\n");
    for(i=0;i<1000;i++)
        printf("[%4d]  ", vetor[i]);

    mediana(vetor);


}

/// funçao com 1000 entradas
void vetor100(int vet[])
{
    int i;
    for(i=0;i<1000;i++)
        vet[i]=rand() % 5000;


    for(i=0;i<1000;i++)
        printf("[%4d]  ", vet[i]);



}
/// media

void media(int vet[])
{
    int x=0,i;
    for(i=0;i<1000;i++)
        x=x+vet[i];

    printf("\n");
    printf("A media do vetor eh: %d ", x/1000);
}

/// mostra o maior valor
void maior_valor(int vet[])
{
    int i, aux=0;
    for(i=0;i<1000;i++){
        if(vet[i]>aux)
            aux=vet[i];
    }
    printf("\n");
    printf("O maior valor eh: %d ", aux);
}


int main()
{
    int vetor[1000];

    vetor100(vetor);
    bubble_sort(vetor,1000);
    media(vetor);
    maior_valor(vetor);

    printf("\n");
    return 0;
}
