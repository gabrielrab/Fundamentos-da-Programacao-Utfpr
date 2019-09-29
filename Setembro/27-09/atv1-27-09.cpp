#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;
    float result=0;

    for(i = 0; i <= 10; i++){
        result = result + i / (i*i);
        i++;
    }

    printf("Result: %.3f", result);

    return false;
}
