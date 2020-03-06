#include <stdio.h>

int main(){
    float x1, x2, x3, x4;
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
    float mean;
    float var;

    mean=1.0/4.0*(x1+x2+x3+x4);
    var=1.0/3.0*((x1-mean)*(x1-mean))+((x2-mean)*(x2-mean))+((x3-mean)*(x3-mean))+((x4-mean)*(x4-mean));
    printf("The result is %f",var);
    return 0;
}
