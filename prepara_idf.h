#ifndef PREPARA_IDF_H
#define PREPARA_IDF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encontrarIDF(char readVoca[]){
    FILE *vocabuRead = fopen(readVoca, "r");
    char line[50000];
    int i=0;
    int j=0;
    int l= 0;
    char palavra[]={' '};
    int indiceAnterior = 0;
    int counta =0;
    char *ch;
    char contaVezesPalavra[] = {" "};

    while(fgets(line,sizeof(line)*3,vocabuRead) !=NULL){

        if(line[i] != '\n' || line[i] == '\n'  ){
            //printf("%s", line);
            indiceAnterior = i;
    
            for(j; j < indiceAnterior-1; j++){
                palavra[j] = line[j];
            }
            j='\0';
            printf("%s", palavra);
            
        }
        i++;
    }

    rewind(vocabuRead);

    while(!feof(vocabuRead)){
        ch = fgetc(vocabuRead);
        if(ch == '\n'){
            counta++;

        }

        int countAnterior = 0 ;
        countAnterior++;
        if(ch == '\n'){
            for(int pala = 0; ; pala++ ){

            }
        }

    }

    char matriz[][]= {0,0};

    printf("QTD de Palavras: %d \n", counta-1);

        fclose(vocabuRead);
}

#endif