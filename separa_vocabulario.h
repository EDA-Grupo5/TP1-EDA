#ifndef SEPARA_VOCABULARIO_H
#define SEPARA_VOCABULARIO_H

void separa_vocabulario(char arqLido[], char vocaArq[]){
    
    FILE *notar1 = fopen(arqLido, "r");
    FILE *voc1 = fopen(vocaArq, "w+");
    char line[22000];

    if(notar1 == NULL){
        printf("Erro ao abrir o arquivo");
        exit(0);
    }

    while(fgets(line,22000,notar1) !=NULL){
        for(int i = 0; line[i]!='\0' && line[i]!='\n'; i++){
            if(line[i] == '.' || line[i] == ',' || line[i] == '\\' || line[i] == '/' && line[i-1] != ',' && line[i-1] != ' ' && line[i-1] != '.'){
                fputs("\n", voc1);
            }

            if(line[i]!= ' ' && line[i]!= ',' && line[i] != '.' && line[i]!= '!' && line[i] != '?' && line[i] != '\\' && line[i] != '/'){
                fputc(line[i], voc1);
            }   

            if(line[i]== ' ' && line[i] != '.' && line[i] != ',' && line[i-1] != ',' && line[i-1] != ' ' && line[i-1] != '.'){
                fputs("\n", voc1);
            }
        }
    }

}

#endif //SEPARA_VOCABULARIO_H