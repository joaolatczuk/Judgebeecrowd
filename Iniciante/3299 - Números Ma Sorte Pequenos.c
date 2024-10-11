#include <stdio.h>

int main(){
    char numero[10000];
    int count=0;
    scanf("%s",numero);
    int* mult=numero-'0';
    for(int i=0;numero[i]!=0;i++){
        if(numero[i]=='1'){
            if(numero[i+1]=='3'){
                count=1;
            }
        }
        printf("%c",numero[i]);
    }
    if(count==1){
        printf(" es de Mala Suerte\n",mult);
    }else{
        printf(" NO es de Mala Suerte\n",mult);
    }
}
