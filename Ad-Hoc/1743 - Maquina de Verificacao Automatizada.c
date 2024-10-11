#include <stdio.h>

int main(){
    int matriz[2][5];
    scanf("%d %d %d %d %d",&matriz[0][0],&matriz[0][1],&matriz[0][2],&matriz[0][3],&matriz[0][4]);
    scanf("%d %d %d %d %d",&matriz[1][0],&matriz[1][1],&matriz[1][2],&matriz[1][3],&matriz[1][4]);

    if(matriz[0][0]==1 && matriz[1][0]==0 || matriz[0][0]==0 && matriz[1][0]==1 ){
        if(matriz[0][1]==1 && matriz[1][1]==0 || matriz[0][1]==0 && matriz[1][1]==1 ){
            if(matriz[0][2]==1 && matriz[1][2]==0 || matriz[0][2]==0 && matriz[1][2]==1 ){
                if(matriz[0][3]==1 && matriz[1][3]==0 || matriz[0][3]==0 && matriz[1][3]==1 ){
                    if(matriz[0][4]==1 && matriz[1][4]==0 || matriz[0][4]==0 && matriz[1][4]==1 ){
                        printf("Y\n");
                    }else{
                        printf("N\n");
                    }
                }else{
                    printf("N\n");
                }
            }else{
                printf("N\n");
            }
        }else{
            printf("N\n");
        }
    }else{
        printf("N\n");
    }

}