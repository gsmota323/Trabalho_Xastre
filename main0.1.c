#include <stdio.h>
#include <stdlib.h>

/// fun�ao com 1000 entradas
void vetor100(int vet[])
{
    int i;
    for(i=0;i<1000;i++)
        vet[i]=rand() % 5000;


    for(i=0;i<1000;i++)
        printf("[%d]; ", vet[i]);

}



/// fun��o que ordena


/// media



/// mediana










int main()
{
    int vetor[1000];

    vetor100(vetor);

    return 0;
}
