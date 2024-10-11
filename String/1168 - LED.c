#include <stdio.h>

int main(){
    int rep;
    scanf("%d",&rep);
    for(int i=0;i<rep;i++){
        int soma=0;
        char numeros[1000];
        scanf("%s",numeros);
        for(int x=0;numeros[x]!=0;x++){
            if(numeros[x]=='1') soma+=2;
            else if(numeros[x]=='2') soma+=5;
            else if(numeros[x]=='3') soma+=5;
            else if(numeros[x]=='4') soma+=4;
            else if(numeros[x]=='5') soma+=5;
            else if(numeros[x]=='6') soma+=6;
            else if(numeros[x]=='7') soma+=3;
            else if(numeros[x]=='8') soma+=7;
            else if(numeros[x]=='9') soma+=6;
            else if(numeros[x]=='0') soma+=6;
        }
        printf("%d leds\n",soma);
    }
}
