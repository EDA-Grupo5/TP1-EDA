#include "separanotas.h"

void separaNota(char arqTrip[], char nota1[], char nota2[], char nota3[], char nota4[], char nota5[]){
    FILE *tripAd = fopen("tripadvisor_hotel.csv","r");
    FILE *nota1 = fopen("Nota1.txt", "w+");
    FILE *nota2 = fopen("Nota2.txt", "w+");
    FILE *nota3 = fopen("Nota3.txt", "w+");
    FILE *nota4 = fopen("Nota4.txt", "w+");
    FILE *nota5 = fopen("Nota5.txt", "w+");

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

        if(rating == 1){
            fprintf(nota1, "%s\n", review);
            }else if(rating == 2) {
                fprintf(nota2, "%s\n", review);
                }else if(rating == 3) {
                    fprintf(nota3, "%s\n", review);
                    }else if(rating == 4) {
                        fprintf(nota4, "%s\n", review);
                        }else if(rating == 5) {
                            fprintf(nota5, "%s\n", review);
                }
    }


    fclose(nota1);
    fclose(nota2);
    fclose(nota3);
    fclose(nota4);
    fclose(nota5);
    fclose(tripAd);


}