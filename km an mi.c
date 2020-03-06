#include <stdio.h>

int main(){
    int km;
    float mi;

    printf("enter a number");
    scanf("%d",&km);

    mi=km*1.60934;


    printf("The result is %f",mi);
    return 0;
}
