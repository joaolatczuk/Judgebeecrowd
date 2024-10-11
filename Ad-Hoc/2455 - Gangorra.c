#include <stdio.h>

int main() {
    int p1,c1,p2,c2,num;
    scanf("%d %d %d %d",&p1,&c1,&p2,&c2);

    int calc1=p1*c1;
    int calc2=p2*c2;
    if(calc1==calc2){
        num=0;
    }else{
        if(calc1>calc2){
            num=-1;
        }else{
            num=1;
        }
    }
    printf("%d\n",num);
    return 0;
}