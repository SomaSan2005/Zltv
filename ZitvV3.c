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
    unsigned girone;
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
    for(int i = 0; i < sizeof(Squadre)/sizeof(TpSquadra); i++)
        Squadre[i].girone = 0;

    for(int i = 0; i < sizeof(Squadre)/sizeof(TpSquadra); i++)
    {
        unsigned girone = (rand()%4) + 1;
        unsigned count = 0;
        int j = 0;

        while (j < i)
        {   
            if (Squadre[j].girone == girone)
            {
                count++;

                if (count == 5)
                {
                    girone = (rand()%4) + 1;
                    count = 0;
                    j = 0;
                    continue;
                }
            }
            j++;
        }

        Squadre[i].girone = girone;
    }

    for (int j = 1; j < 5; j++)
    {
        printf("\nGirone %u:\n", j);
        for (int i = 0; i < sizeof(Squadre)/sizeof(TpSquadra); i++)
        {   
            if (Squadre[i].girone == j)
                printf("%s\n", Squadre[i].nomeSquadra);
        }
    }
}
