#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int p;
        scanf("%d",&p);
        printf("resposta %d: %d\n",i,p);
    }
}