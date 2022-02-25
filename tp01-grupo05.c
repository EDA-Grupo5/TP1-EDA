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

    FILE *vocabuRead = fopen(vocabula1, "r+");
    char line[22000];
    int i=0;
    int j=0;
    char palavra[]={' '};
    int indiceAnterior = 0;

    while(fgets(line,sizeof(line)*2,vocabuRead) !=NULL){
        //printf("\n%s", line);
        // sp = strtok(line,delimitado);
        // strcpy(palavra, sp);

        if(line[i] != '\n'){
            //printf("%s", line);
            indiceAnterior = i;
    
            for(j; j < indiceAnterior-1; j++){
                palavra[j] = line[j];
            }
            j='\n';
            printf("%s", palavra);
            
            
        }
        i++;
    }

    // while(fgets(line,22000,vocabuRead)!=NULL){
        
    //     if(line[i] == '\n' || line[i] == '\0'){
    //         indiceAnterior = i;
    
    //         for(j; j < i; j++){
    //             palavra[j] = line[j];
    //         }

    //         printf("%s", palavra);

    //         j = indiceAnterior;
    //     }

    //     i++;
    // }

    return 0;

}
