#include <stdio.h>
 
int main() {
 
    float x,y,z,media;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);

    media=((x*2)+(y*3)+(z*5))/10;
    
    printf("MEDIA = %.1f\n",media);

    return 0;
}