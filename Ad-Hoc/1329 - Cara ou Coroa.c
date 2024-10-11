#include <stdio.h>

int main() {
    int rep=1;
    for(;rep!=0;) {
        scanf("%d", &rep);
        if(rep==0){
            break;
        }else {
            int john = 0, mary = 0;
            for (int i = 0; i < rep; i++) {
                int num;
                scanf("%d", &num);
                if (num == 0) {
                    mary++;
                }
                if (num == 1) {
                    john++;
                }
            }
            printf("Mary won %d times and John won %d times\n", mary, john);
        }
    }
    return 0;
}