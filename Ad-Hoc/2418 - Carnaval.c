#include <stdio.h>

int main(){
    double n[5];
    double maior,menor,soma;
    scanf("%lf %lf %lf %lf %lf",&n[0],&n[1],&n[2],&n[3],&n[4]);
    for(int i=0;i<5;i++){
        if(i==0){
            maior=n[i];
            menor=n[i];
        }
        if(n[i]>maior){
            maior=n[i];
        }
        if(n[i]<menor){
            menor=n[i];
        }
    }
    soma=(n[0]+n[1]+n[2]+n[3]+n[4])-(maior+menor);
    printf("%.1lf\n",soma);
}