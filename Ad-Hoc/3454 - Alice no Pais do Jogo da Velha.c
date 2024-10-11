#include <stdio.h>

int main(){
    char entrada[4];
    scanf("%s",entrada);

    if(entrada[0]=='X' && entrada[1]=='X' && entrada[2]=='O' || entrada[0]=='O' && entrada[1]=='X' && entrada[2]=='X'){
        printf("Alice\n");
    }else if(entrada[0]=='X' && entrada[1]=='O' && entrada[2]=='X'){
        printf("*\n");
    }else{
        printf("?\n");
    }

}
