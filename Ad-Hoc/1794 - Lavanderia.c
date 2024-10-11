#include <stdio.h>

int main(){
    int seremlavadas,lmin,lmax,smin,smax;
    scanf("%d",&seremlavadas);
    scanf("%d %d",&lmin,&lmax);
    scanf("%d %d",&smin,&smax);
    if(seremlavadas>=lmin && seremlavadas<=lmax && seremlavadas>=smin && seremlavadas<=smax){
        printf("possivel\n");
    }else{
        printf("impossivel\n");
    }
}