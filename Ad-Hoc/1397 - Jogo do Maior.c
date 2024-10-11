#include <stdio.h>

int main(){
    for(;;){
        int esquerda=0,direita=0;
        int rep;
        scanf("%d",&rep);
        if(rep!=0){
            for(int i=1;i<=rep;i++){
                int a,b;
                scanf("%d %d",&a,&b);
                if(a>b){
                    esquerda++;
                }else if(b>a){
                    direita++;
                }
            }
        }else{
            break;
        }
        printf("%d %d\n",esquerda,direita);
    }
}