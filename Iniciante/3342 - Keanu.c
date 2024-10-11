#include <stdio.h>


int main() {
    int numero;

    scanf("%d",&numero);
    int qtd=numero*numero;
    int branca,preto;
    if(numero%2==0){
        branca=qtd/2;
        preto=qtd/2;
    }else{
        branca=(qtd/2)+1;
        preto=qtd/2;
    }
    printf("%d casas brancas e %d casas pretas\n",branca,preto);
}