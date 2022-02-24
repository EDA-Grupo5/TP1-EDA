#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "separanotas.h"

int main()
{
    char arqTrip[] = {"tripadvisor_hotel.csv"}, nota1[] = {"Nota1.txt"}, nota2[] = {"Nota2.txt"},  nota3[] = {"Nota3.txt"},  nota4[] = {"Nota4.txt"},  nota5[] = {"Nota5.txt"};

    separaNota(arqTrip, nota1, nota2, nota3, nota4, nota5);

    	FILE *notar1 = fopen("Nota1.txt", "r");
    FILE *voc1 = fopen("Vocabulario1.txt", "w+");
    char line[22000];
    
    if(notar1 == NULL){
        printf("Erro ao abrir o arquivo");
        exit(0);
    }

    while(fgets(line,22000,notar1) !=NULL){
        for(int i = 0; line[i]!='\0' && line[i]!='\n'; i++){
            if(line[i] == '.' || line[i] == ',' || line[i] == '\\' || line[i] == '/' && line[i-1] != ',' && line[i-1] != ' ' && line[i-1] != '.'){
                fputs("\n", voc1);
            }

            if(line[i]!= ' ' && line[i]!= ',' && line[i] != '.' && line[i]!= '!' && line[i] != '?' && line[i] != '\\' && line[i] != '/'){     
                    fputc(line[i], voc1);
            }

            if(line[i]== ' ' && line[i] != '.' && line[i] != ',' && line[i-1] != ',' && line[i-1] != ' ' && line[i-1] != '.'){
                fputs("\n", voc1);
            }
        }
    }

    return 0;
}
