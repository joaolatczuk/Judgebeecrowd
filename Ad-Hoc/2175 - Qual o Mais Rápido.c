#include <stdio.h>

int main(){
    float o,b,i;
    scanf("%f",&o);
    scanf("%f",&b);
    scanf("%f",&i);

    if(o<b && o<i){
        printf("Otavio\n");
    }else if(b<i && b<o){
        printf("Bruno\n");
    }else if(i<b && i<o){
        printf("Ian\n");
    }else{
        printf("Empate\n");
    }
}