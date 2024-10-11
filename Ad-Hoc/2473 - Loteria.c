#include <stdio.h>
/*Na loteria preferida dele, o jogador aposta seis números entre 1 e 99. No sorteio, também são escolhidos seis números ganhadores entre 1 e 99. Quem acerta 3, 4, 5 ou 6 números ganha como prêmio, respectivamente, um “terno”, uma “quadra”, uma “quina” ou uma “sena”.

Nesta tarefa, você deve escrever um programa que diga qual foi o prêmio que Flavinho ganhou, dados os seis números que ele apostou e os seis números que foram sorteados.*/
int main(){
    int apostado[6],sorteado[6],count=0;
    scanf("%d %d %d %d %d %d",&apostado[0],&apostado[1],&apostado[2],&apostado[3],&apostado[4],&apostado[5]);
    scanf("%d %d %d %d %d %d",&sorteado[0],&sorteado[1],&sorteado[2],&sorteado[3],&sorteado[4],&sorteado[5]);

    for(int i=0;i<6;i++){
        for(int x=0;x<6;x++){
            if(apostado[i]==sorteado[x]){
                count++;
            }
        }
    }

    switch (count)
    {
    case 3 :
        printf("terno\n");
        break;

    case 4 :
        printf("quadra\n");
        break;

    case 5 :
        printf("quina\n");
        break;

    case 6:
        printf("sena\n");
        break;

    default:
        printf("azar\n");
        break;
    }
}