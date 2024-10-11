#include <stdio.h>

int main(){
    int volini,qtd;
    scanf("%d %d",&volini,&qtd);
    int soma=volini;
    int numeros[qtd];
    for(int i=0;i<qtd;i++){
        scanf("%d",&numeros[i]);
        soma+=numeros[i];
        if(soma>100){
            soma=100;
        }else if(soma<0){
            soma=0;
        }
    }
    printf("%d\n",soma);
}