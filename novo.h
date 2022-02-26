    FILE *vocabuRead = fopen(readVoca, "r");
    char line[50000];
    int i=0;
    int j=0;
    char palavra[]={' '};
    int indiceAnterior = 0;
    int counta =0;
    char *ch;
    while(!feof(vocabuRead)){
        ch = fgetc(vocabuRead);
        if(ch == '\n'){
            counta++;
        }
    }
        printf("QTD de Palavras: %d \n", counta-1);

    rewind(vocabuRead);

    while(fgets(line,sizeof(line)*3,vocabuRead) !=NULL){

        if(line[i] != '\n'){
            //printf("%s", line);
            indiceAnterior = i;
    
            for(j; j < indiceAnterior-1; j++){
                palavra[j] = line[j];
            }
            j='\0';//alocação de memoria tava dado errado
            //printf("%s", palavra);
            
            
        }
        i++;
    }







        
    char naorepeti[][]={' '};

    int cont = 2;
    int rep = 2;
    int a = 0;
    int k = 0;

    while(!feof(vocabuRead)){
        ch = fgetc(vocabuRead);
        if(ch == '\n'){
            
        }
    }
        printf("QTD de Palavras: %d \n", counta-1);

    rewind(vocabuRead);

    for(cont; cont < counta; cont++){
        
        if(palavra[cont] !='\n'){
        k = 0;
        for(k; k < rep+1; k++){
            if(palavra[cont]==naorepeti[k]){
                a++;
            }

        }

        if(a == 0){
            naorepeti[rep]=palavra[cont];  
            rep++;
        }

        a = 0;

        printf("%s", naorepeti[cont]);
        }
    }



        fclose(vocabuRead);