#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ZerarMatriz(int P1[6][8],int P2[6][8])
{
    int i,j;

    for(i=0; i<6; i++)
    {
        for(j=0; j<8; j++)
        {
            P1[i][j]=0;
            P2[i][j]=0;

        }
    }
}

void GerarBarco(int matriz[6][8])
{
    int navio=1,sub=3,i,j;

    while((navio!=0)||(sub!=0))
    {
        i=rand()%6;
        j=rand()%5;

        if((navio>0))/*Gerar o encouraçado*/
        {
            navio=navio-1;
            matriz[i][j]=4;
            matriz[i][j+1]=4;
            matriz[i][j+2]=4;
            matriz[i][j+3]=4;
        }

        i=rand()%6;
        j=rand()%7;

        if((sub>0)&&((matriz[i][j]<=0)&&(matriz[i][j+1]<=0))) /* Verifica se a posição esta livre e a próxima- E Gera Submarino*/
        {
            sub=sub-1;
            matriz[i][j]=2;
            matriz[i][j+1]=2;
        }
    }
}

int Tiro(int matriz[6][8])
{
    int i,j;

    printf("\nDigite a linha que deseja atirar: ");
    scanf("%d", &i);
    printf("\nDigite a coluna que deseja atirar: ");
    scanf("%d", &j);

    if (matriz[i][j] !=0)
    {
        if (matriz[i][j] =4)
        {
            return 4;
        }
        else
        {
            return 2;
        }
    }
    else
    {

        return 0;

    }
}


void Tela(int P1Tela[6][8],int P2Tela[6][8])
{
    int i,j;

    printf(" ____        _        _ _             _   _                  _\n| __ )  __ _| |_ __ _| | |__   __ _  | \\ | | __ ___   ____ _| |\n| \\_ \\ / _` | __/ _` | | '_ \\ / _` | |  \\| |/ _` \\ \\ / / _` | |\n| |_) | (_| | |_ (_| | | | | | (_| | | |\\  | (_| |\\ V / (_| | |\n|____/ \\__,_|\\__\\__,_|_|_| |_|\\__,_| |_| \\_|\\__,_| \\_/ \\__,_|_|\n");
    printf("\n        JOGADOR 1         JOGADOR 2\n     ");

    for(j=0; j<8; j++)/*@@@@SÓ PARTE GRÁFICA!@@@@*/
    {
        printf("%d ",j+1);
    }

    printf("  ");

    for(j=0; j<8; j++)/*@@@@SÓ PARTE GRÁFICA!@@@@*/
    {
        printf("%d ",j+1);
    }

    printf("\n");
    printf("   O-----------------O-----------------O\n");/*@@@@SÓ PARTE GRÁFICA!@@@@*/

    for(i=0; i<6; i++)/*@@@@SÓ PARTE GRÁFICA!@@@@*/
    {
        printf("   |\t\t     |\t\t       |\n");
        printf("  %d| ",i+1);

        for(j=0; j<8; j++)
        {
            printf("%d ",P1Tela[i][j]);
        }

        printf("| ",i+1);

        for(j=0; j<8; j++)/*@@@@SÓ PARTE GRÁFICA!@@@@*/
        {
            printf("%d ",P2Tela[i][j]);
        }

        printf("|%d",i+1);

        if(i==0)
        {
            printf("       INDICE");
        }
        if(i==1)
        {
            printf("   0=Nao Descorberto");
        }
        if(i==2)
        {
            printf("   2=Submarino");
        }
        if(i==3)
        {
            printf("   4=Encouracado");
        }
        if(i==4)
        {
            printf("   X=Agua");
        }

        printf("\n");
    }
    printf("   |\t\t     |\t\t       |\n");
    printf("   O-----------------O-----------------O");
    printf("\n     ");

    for(j=0; j<8; j++)/*@@@@SÓ PARTE GRÁFICA!@@@@*/
    {
        printf("%d ",j+1);
    }

    printf("  ");

    for(j=0; j<8; j++)/*@@@@SÓ PARTE GRÁFICA!@@@@*/
    {
        printf("%d ",j+1);
    }
    printf("\n");

}

int main()
{
    int P1[6][8],P2[6][8],P1Tela[6][8],P2Tela[6][8];
    int i,j;
    srand(time(NULL));

    ZerarMatriz(P1,P2);
    ZerarMatriz(P1Tela,P2Tela);
    GerarBarco(P1);
    GerarBarco(P2);
    Tela(P1Tela,P2Tela);


    for(i=0; i<6; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%d ",P1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<6; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%d ",P2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

