//inicio da header
#ifndef SEPARA_NOTAS_H
#define SEPARA_NOTAS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //declarações para a função que separa as notas 
   void separaNota(char arqTrip[], char notaC[], int arqNota){

    //inicializa os arquivos exteriores
    FILE *tripAd = fopen(arqTrip,"r");
    FILE *nota = fopen(notaC, "w+");
    
    //verifica se o arquivo de origem existe
    if(tripAd == NULL){
        printf("Erro ao abrir o Arquivo");
        exit(0);
    }

    char review[80000];
    int rating;
    char line[22000];
    char *sp;
    char delimitado[] = "\t\""; //delimitador strtok (no final do comentario, antes do número, no arquivo de origem, sempre é usado um tab antes do número correspondente da avaliação)

    while(fgets(line,22000,tripAd) !=NULL){//passa pelo arquivo até que chegue no final do arquivo
        //printf("\n%s", line);
        sp = strtok(line,delimitado);//passa para o sp o que encontrou até se deparar com o delimitador 
        strcpy(review, sp);//passa para o vetor review o que está em sp

        sp = strtok(NULL,",");

        rating = atoi(sp);//nota encontrada, transforma o que está em sp em int
  
        //printf("\n %s \n %d", review, rating);

        //condicionais para armazenar a devida avaliação em sua correspondente nota
        if(rating == 1 && arqNota == 1){
            fprintf(nota, "%s\n", review);
            }else if(rating == 2 && arqNota == 2) {
                fprintf(nota, "%s\n", review);
                }else if(rating == 3 && arqNota == 3) {
                    fprintf(nota, "%s\n", review);
                    }else if(rating == 4 && arqNota == 4) {
                        fprintf(nota, "%s\n", review);
                        }else if(rating == 5 && arqNota == 5) {
                            fprintf(nota, "%s\n", review);
                }
    }

    //fecha arquivos exteriores anteriormente abertos
    fclose(nota);
    fclose(tripAd);


}

#endif //SEPARA_NOTAS_H