#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerArquivos(char f[])
{
    FILE *file = fopen(f, "r");
    FILE *nota1 = fopen("Nota1.txt", "w+");
    FILE *nota2 = fopen("Nota2.txt", "w+");
    FILE *nota3 = fopen("Nota3.txt", "w+");
    FILE *nota4 = fopen("Nota4.txt", "w+");
    FILE *nota5 = fopen("Nota5.txt", "w+");

    char avaliacao;
    int *tamanhoStr;
     
    if (file)
    {
        printf("\n Passou por aqui\n");
        while (!feof(file))
        {
            avaliacao = fgetc(file);
            tamanhoStr = strlen(avaliacao) - 1;

                if(avaliacao[tamanhoStr] == 1){
                    int num1 = 1;
                    fputc(num1, nota1);
                }else if(avaliacao[tamanhoStr] == 2) {
                    int num2 = 2;
                    fputc(num2, nota2);
                }else if(avaliacao[tamanhoStr] == 3) {
                    int num3 = 3;
                    fputc(num3, nota3);
                }else if(avaliacao[tamanhoStr] == 4) {
                    int num4 = 4;
                    fputc(num4, nota4);
                }else if(avaliacao[tamanhoStr] == 5) {
                    int num5 = 5;
                    fputc(num5, nota5);
                }

        }

        fclose(file);
    }
    else
    {
        printf("Erro ao abrir arquivo");
    }
}


int main() {
    char texto[] = ("tripadvisor_hotel.csv");
    lerArquivos(texto);

    return 0;
}