#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    char nome [100] ;
    int tamanho = 0;
    char temp;
    int i, j, k;
    srand(time(NULL));

    printf("Insira seu nome para testar o embaralhamento de Fisher-Yates:\nR:");
    gets(nome);
    tamanho = strlen(nome);
        for (i = tamanho - 1; i > 0; i--)
        {
            j = rand() % (i + 1);
            temp = nome[i];
            nome[i] = nome[j];
            nome[j] = temp;
        }
            printf("Vetor embaralhado: ");
                for (k = 0; k < tamanho; k++)
                {
                    printf("%c", nome[k]);
                }
                printf("\n");

    system("pause");
    return 0;
}
