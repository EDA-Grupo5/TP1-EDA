// Grupo 05
// Nome(s) / Matricula:
//     Ana Beatriz Wanderley Massuh / 200060783
//     Gabriel Ferreira da Silva  / 200018060
//     Paulo Henrique Rossi de Borba /  190094273
//
//Trabalho de TFIDF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "separa_notas.h"
#include "separa_vocabulario.h"
#include "prepara_idf.h"
#include "tabela_tf_idf.h"
#include "tf_idf.h"

void naoTem(){
    printf("Função ainda não foi implementada. :( ");
}

int main()
{
    int menucont=1;
    int opcaomenu;
    char arqTrip[30] ;//{"tripadvisor_hotel.csv"};
    char nota1[]={"Nota1.txt"},nota2[]={"Nota2.txt"},nota3[]={"Nota3.txt"},nota4[]={"Nota4.txt"},nota5[]={"Nota5.txt"};
    char vocabula1[]={"Vocabulario1.txt"},vocabula2[]={"Vocabulario2.txt"},vocabula3[]={"Vocabulario3.txt"},vocabula4[]={"Vocabulario4.txt"},vocabula5[]={"Vocabulario5.txt"};
    
    do
    {
        printf("\nMenu \nEscolha uma opcao: \n(1) Ler dataset Trip Advisor \n(2) Gerar vocabulario \n(3) Exibir TF-IDFs \n(4) Exibir TF-IDF de uma Nota \n(5) Sair\n\n");
        scanf(" %d", &opcaomenu);

        while(opcaomenu < 1 && opcaomenu > 5);
    
        switch(opcaomenu)
        {
            case 1:
                printf("\n Nome de Arquivos Disponíveis: \treviews.csv\n");
                printf("Digite o nome do arquivo: ");
                scanf("%s", arqTrip); // reviews.csv

                separaNota(arqTrip, nota1, 1);
                separaNota(arqTrip, nota2, 2);
                separaNota(arqTrip, nota3, 3);
                separaNota(arqTrip, nota4, 4);
                separaNota(arqTrip, nota5, 5);

                break;

            case 2:
                separa_vocabulario(nota1,vocabula1);
                separa_vocabulario(nota2,vocabula2);
                separa_vocabulario(nota3,vocabula3);
                separa_vocabulario(nota4,vocabula4);
                separa_vocabulario(nota5,vocabula5);

                break;

            case 3:
                //encontrarIDF(vocabula1);
                //encontrarIDF(vocabula2);
                //encontrarIDF(vocabula3);
                //encontrarIDF(vocabula4);
                //encontrarIDF(vocabula5);
                 naoTem();
                break;

            case 4:
                     naoTem();
                break;
        
            case 5:
                    exit(0);
        
                break;

        }
    } 
    while(menucont);
    
}