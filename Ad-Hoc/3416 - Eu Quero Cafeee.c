#include <stdio.h>
int main(){
    int N,L,D;
    scanf("%d %d %d",&N,&L,&D);
    int a=N*D / (L*1000);
    if(N*D%(L*1000)!=0){
        a++;
    }
    printf("%d\n",a*L);
}

