#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *tripAd = fopen("tripadvisor_hotel.csv","r");
    FILE *nota1 = fopen("Nota1.txt", "w+");
    FILE *nota2 = fopen("Nota2.txt", "w+");
    FILE *nota3 = fopen("Nota3.txt", "w+");
    FILE *nota4 = fopen("Nota4.txt", "w+");
    FILE *nota5 = fopen("Nota5.txt", "w+");

    FILE *notar1 = fopen("Nota1.txt", "r");
    FILE *voc1 = fopen("Vocabulario1.txt", "w+");
    
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

    char *vb;

    if(notar1 == NULL){
        printf("Erro ao abrir o arquivo");
        exit(0);
    }

    while(fgets(line,22000,notar1) !=NULL){
        for(int i = 0; line[i]!='\0' && line[i]!='\n'; i++){
        if(strlen(line[i]) < 4){
        if(line[i] == '.' || line[i] == ',' || line[i] == '\\' || line[i] == '/' && line[i-1] != ',' && line[i-1] != ' ' && line[i-1] != '.')
          fputs("\n", voc1);
          if(line[i]!= ' ' && line[i]!= ',' && line[i] != '.' && line[i]!= '!' && line[i] != '?' && line[i] != '\\' && line[i] != '/')
        {     
        fputc(line[i], voc1);

        }
        if(line[i]== ' ' && line[i] != '.' && line[i] != ',' && line[i-1] != ',' && line[i-1] != ' ' && line[i-1] != '.')
          fputs("\n", voc1);
        }
    
    }
    }

    return 0;
}
