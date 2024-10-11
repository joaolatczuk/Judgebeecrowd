#include <stdio.h>
int main(){
    int n[9];
    int resultado=0;
    scanf("%d %d %d %d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5],&n[6],&n[7]);
    for(int i=0;i<8;i++){
        if(n[i]==0 || n[i]==1){
            resultado++;
        }else{
            resultado=-10;
        }
    }
    if(resultado>0){
        printf("S\n");
    }else{
        printf("F\n");
    }

}

