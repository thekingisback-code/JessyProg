#include "stdio.h"

void numbers(int upperlimit);

int main (int argc, char *argv[]){
    int n;
    scanf("%d",&n);

    numbers(n);
}

void numbers(int upperlimit){
    int i=1;
    printf("Natural numbers from 1 to %d: ",upperlimit);
    while(i<upperlimit+1){
        printf("%d, ",i);
        i++;
    }
}
