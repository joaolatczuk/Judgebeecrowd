#include <stdio.h>


int main() {
    int huguinho,zezinho,luisinho;
    scanf("%d %d %d",&huguinho,&zezinho,&luisinho);
    if(huguinho>zezinho && huguinho>luisinho){
        if(zezinho>luisinho){
            printf("zezinho\n");
        }else{
            printf("luisinho\n");
        }
    }else{
        if(zezinho>huguinho && zezinho>luisinho){
            if(huguinho>luisinho){
                printf("huguinho\n");
            }else{
                printf("luisinho\n");
            }
        }else{
            if(huguinho>zezinho){
                printf("huguinho\n");
            }else{
                printf("zezinho\n");
            }
        }
    }
}