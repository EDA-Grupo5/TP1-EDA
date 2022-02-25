#ifndef SEPARA_VOCABULARIO_H
#define SEPARA_VOCABULARIO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separa_vocabulario(char arqLido[], char vocaArq[]){
    
    FILE *notar = fopen(arqLido, "r");
    FILE *voc = fopen(vocaArq, "w+");
    char line[22000];

    if(notar == NULL){
        printf("Erro ao abrir o arquivo");
        exit(0);
    }

    while(fgets(line,22000,notar) !=NULL){
        for(int i = 0; line[i]!='\n'; i++){
            if(line[i]!= ' ' && line[i]!= ',' && line[i] != '.' && line[i]!= '!' && line[i] != '?' && line[i] != '\\' && line[i] != '/'){
                fputc(line[i], voc);
            }

            if(line[i]== ' ' || line[i]=='\0'){
                fputs("\n", voc);
            }   

        }
    }

    fclose(voc);
    fclose(notar);
}

#endif //SEPARA_VOCABULARIO_H