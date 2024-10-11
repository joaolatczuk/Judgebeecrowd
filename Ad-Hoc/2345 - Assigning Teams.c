#include <stdio.h>

int main(){
    int n[4];
    int soma;
    scanf("%d %d %d %d",&n[0],&n[1],&n[2],&n[3]);
    soma=(n[0]+n[3])-(n[1]+n[2]);
    if(soma<0){
        soma*=-1;
    }
    printf("%d\n",soma);
}