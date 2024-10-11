#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int pos;
    if(n>0 && n<=1){
        pos=1;
    }else{
        if(n>=2 && n<=3){
            pos=3;
        }else{
            if(n>3 && n<=5){
                pos=5;
            }else{
                if(n>5 && n<=10){
                    pos=10;
                }else{
                    if(n>10 && n<=25){
                        pos=25;
                    }else{
                        if(n>25 && n<=50){
                            pos=50;
                        }else{
                            pos=100;
                        }
                    }
                }
            }
        }
    }
    printf("Top %d\n",pos);
    return 0;
}
