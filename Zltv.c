#include <stdio.h>
#include <math.h>
#include <string.h>
#define NT 4
#define NS 10
#define LenNomeSquadra 20
#define O 20
typedef struct
{
    char nomeSquadra[LenNomeSquadra];
    int girone;
} TpSquadra;
int main()
{
    srand(time(NULL));
    TpSquadra Squadre[20];
    strcpy(Squadre[0].nomeSquadra, "Napoli");
    strcpy(Squadre[1].nomeSquadra, "Atalanta");
    strcpy(Squadre[2].nomeSquadra, "Milan");
    strcpy(Squadre[3].nomeSquadra, "Udinese");
    strcpy(Squadre[4].nomeSquadra, "Roma");
    strcpy(Squadre[5].nomeSquadra, "Inter");
    strcpy(Squadre[6].nomeSquadra, "Lazio");
    strcpy(Squadre[7].nomeSquadra, "Juventus");
    strcpy(Squadre[8].nomeSquadra, "Torino");
    strcpy(Squadre[9].nomeSquadra, "Salernitana");
    strcpy(Squadre[10].nomeSquadra, "Fiorentina");
    strcpy(Squadre[11].nomeSquadra, "Bologna");
    strcpy(Squadre[12].nomeSquadra, "Sassuolo");
    strcpy(Squadre[13].nomeSquadra, "Verona");
    strcpy(Squadre[14].nomeSquadra, "Spezia");
    strcpy(Squadre[15].nomeSquadra, "Empoli");
    strcpy(Squadre[16].nomeSquadra, "Lecce");
    strcpy(Squadre[17].nomeSquadra, "Cremonese");
    strcpy(Squadre[18].nomeSquadra, "Sambdoria");
    strcpy(Squadre[19].nomeSquadra, "Monza1");
   for(int i = 0; i<4; i++)
   {
     Squadre[i].girone = (rand()%4) + 1;
     
   }
    for (int i = 0; i < 20; i++)
    {
        char sq[LenNomeSquadra];
        strcpy(sq, Squadre[i].nomeSquadra);
        printf("\n%s", sq);
    }
}
