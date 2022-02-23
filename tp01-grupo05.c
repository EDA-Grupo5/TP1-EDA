#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *tripAd = fopen("tripadvisor_hotel.csv","r");
    
    if(tripAd == NULL){
        printf("Erro ao abrir o Arquivo");
        exit(0);
    }

    char review[8000];
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
  
        printf("\n %s \n %d", review, rating);

    }


    fclose(tripAd);

    return 0;
}