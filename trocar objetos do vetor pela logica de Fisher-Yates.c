#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    char nome[] = {'A', 'U', 'G', 'U', 'S', 'T', 'O'};
    int tamanho = sizeof(nome) / sizeof(nome[0]);
    char temp;
    int i, j, k;
    srand(time(NULL));

    for (i = tamanho - 1; i > 0; i--)
    {
        j = rand() % (i + 1);
        temp = nome[i];
        nome[i] = nome[j];
        nome[j] = temp;
    }

    printf("Vetor embaralhado: ");
    for (k = 0; k < 7; k++)
    {
        printf("%c", nome[k]);
    }

    system("pause");
    return 0;
}
