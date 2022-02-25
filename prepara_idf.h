#ifndef PREPARA_IDF_H
#define PREPARA_IDF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void encontrarIDF(char readVoca[]){

    FILE *vocabuRead = fopen(readVoca, "r");
    char *ch;
    int conta = 0;
    int i = 0;
    int contador = 0;
    char contaCaracter[][30] = {' '};

     while(!feof(vocabuRead)){
        ch = fgetc(vocabuRead);
        if(ch == '\n'){
            conta++;
        }
    }
        printf("QTD de Palavras: %d \n", conta-1);

    rewind(vocabuRead);

    ch = '\0';

    while (!feof(vocabuRead)){
        ch = fgetc(vocabuRead);
        if(ch == '\n'){
            i = 0;
            contador++;
        }

        contaCaracter[contador][i] = ch;

        i++;

    }
    rewind(vocabuRead);

    for(int k = 0; k < contador; k++){
        for(int g = 0; g < 30; g++){
            printf("%c", contaCaracter[k][g]);
        }
    }


    fclose(vocabuRead);


}

#endif