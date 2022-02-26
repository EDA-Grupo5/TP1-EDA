#ifndef PREPARA_IDF_H
#define PREPARA_IDF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void encontrarIDF(char readVoca[]){

    FILE *vocabuRead = fopen(readVoca, "r");
    char ch;
    int conta = 0;
    int contaArq=0;
    int i = 0;
    char **contaCaracter;
    
    //conta a quantidade de caracteres no arquivo
    while(!(feof(vocabuRead))){
        ch = fgetc(vocabuRead);
        if(ch){
            contaArq++;
        }
    }

    //reinicia a leitura do arquivo
    rewind(vocabuRead);
    
    int passUmaVez = 0;

    //condicional para fazer a alocação de memoria para passagem de vetor 
     while(!feof(vocabuRead)){
        ch = fgetc(vocabuRead);

        if(passUmaVez == 0){
            contaCaracter = (char**) malloc(contaArq * sizeof(char*));
        }
            
        if(ch == '\n'){
            conta++;
            contaCaracter[i] = (char*) malloc(contaArq * sizeof(char));
            contaCaracter[conta][i] = ch; 
            
            i=0;
        }
                contaCaracter[i] = (char*) malloc(contaArq * sizeof(char));
                contaCaracter[conta][i] = ch;
        i++;
    }
    printf("QTD de Palavras: %d \n", conta-1);

    free(contaCaracter);//Desaloca memoria alocada
    fclose(vocabuRead);//Fecha domcumento anteriormente aberto

}

#endif