#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d",&num);
    int pos=0,neg=0;
    for(int i=0;i<num;i++){
        int voto;
        scanf("%d",&voto);
        if(voto==0){
            pos++;
        }if(voto==1){
            neg++;
        }
    }
    if(pos>neg){
        printf("Y\n");
    }else{
        printf("N\n");
    }
}