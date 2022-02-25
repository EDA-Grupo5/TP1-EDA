#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "separa_notas.h"
#include "separa_vocabulario.h"

int main()
{
    char arqTrip[] = {"tripadvisor_hotel.csv"};
    char nota1[]={"Nota1.txt"},nota2[]={"Nota2.txt"},nota3[]={"Nota3.txt"},nota4[]={"Nota4.txt"},nota5[]={"Nota5.txt"};
    separaNota(arqTrip, nota1, 1);
    separaNota(arqTrip, nota2, 2);
    separaNota(arqTrip, nota3, 3);
    separaNota(arqTrip, nota4, 4);
    separaNota(arqTrip, nota5, 5);

    char vocabula1[]={"Vocabulario1.txt"},vocabula2[]={"Vocabulario2.txt"},vocabula3[]={"Vocabulario3.txt"},vocabula4[]={"Vocabulario4.txt"},vocabula5[]={"Vocabulario5.txt"};
    separa_vocabulario(nota1,vocabula1);
    separa_vocabulario(nota2,vocabula2);
    separa_vocabulario(nota3,vocabula3);
    separa_vocabulario(nota4,vocabula4);
    separa_vocabulario(nota5,vocabula5);

    FILE *vocabuRead = fopen(vocabula1, "r");
    char line[22000];
    int i=0;
    int j=0;
    char palavra[] = {" "};
    int indiceAnterior=0,lm=0;

    while(fgets(line,22000,vocabuRead)!=NULL){
        
        if(line[i] != '\n'){
            int gh = i - indiceAnterior;
            indiceAnterior = i;
            for(j; j < i; j++){
                if(lm <= gh){
                    palavra[lm] = line[j];
                    lm++;
                }
            }

            for(int g = 0; g < i; g++){
                printf("%c", palavra[g]);
            }
            lm=0;
            j = indiceAnterior;
        }

        i++;
    }

    return 0;

}
