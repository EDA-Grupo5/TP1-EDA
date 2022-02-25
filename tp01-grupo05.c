#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "separa_notas.h"

int main()
{
    char arqTrip[] = {"tripadvisor_hotel.csv"};
    separaNota(arqTrip, "Nota1.txt", 1);
    separaNota(arqTrip, "Nota2.txt", 2);
    separaNota(arqTrip, "Nota3.txt", 3);
    separaNota(arqTrip, "Nota4.txt", 4);
    separaNota(arqTrip, "Nota5.txt", 5);

    return 0;

}
