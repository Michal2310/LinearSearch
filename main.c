#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10],szukana,i;

    printf("wprowadz tablice \n"); // wprowadzenie elementów tablicy przez uzytkownika
    for(i=0;i<10;++i)
        scanf("%d",&tab[i]);

    printf("podaj szukany element");
    scanf("%d",&szukana); // wprowadzenie przez uzytkownika szukanej wartosci w tablicy

    for(i=0;i<10;++i){ // przejscie przez cala dlugosc tablicy
        if(tab[i]==szukana){ // sprawdzenie czy wartosci pod indexem "j" w tablicy jest rowna szukanej wartosci, jezeli tak jest to petla jest zakanczana
            break;
        }
    }
    if(i<10){
        printf("szukana wartosc znaleziona na indexie %d",i); // sprawdzenie czy nie wyszlismy poza dlugosc tablicy i wydrukowanie indexu pod szukanej wartoscia
         printf("\nadres szukanej wartosci:  %d",&tab[i]); // drukowanie adresu szukanej wartosci
    }
    else{
        printf("szukana wartosc nie znaleziona"); // wydrukowanie wiadomosci, gdy nie znalezlismy wartosci w tablicy
    }
    return 0;
}

