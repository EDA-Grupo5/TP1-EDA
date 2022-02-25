#ifndef SEPARA_NOTAS_H
#define SEPARA_NOTAS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   void separaNota(char arqTrip[], char notaC[], int arqNota){
    FILE *tripAd = fopen(arqTrip,"r");
    FILE *nota = fopen(notaC, "w+");
    

    if(tripAd == NULL){
        printf("Erro ao abrir o Arquivo");
        exit(0);
    }

    char review[80000];
    int rating;
    char line[22000];

    char *sp;
    char delimitado[] = "\t\"";
    while(fgets(line,22000,tripAd) !=NULL){
        //printf("\n%s", line);
        sp = strtok(line,delimitado);
        strcpy(review, sp);

        sp = strtok(NULL,",");

        rating = atoi(sp);
  
        //printf("\n %s \n %d", review, rating);

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

    fclose(nota);
    fclose(tripAd);


}

#endif //SEPARA_NOTAS_H