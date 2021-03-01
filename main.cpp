//Tus librerias
//#include "math.h"

#include "stdio.h"

//Programa que hace una suma medio rara
int main(int argc, char *argv[]){
    
    int n;
    int cnt=0;
    int cnt_p=0;
    int cnt_pp=0;
    
    printf("Enter number: \n\t");
    scanf("%d", &n);
    printf("\n");
    
    for(int i=0; i<n; i++){ //i++ == ++i = i=i+1
        
    if(i==0){
        cnt=cnt_p;
        
    }
    else if(i==1){
        cnt_p=cnt+1;
        cnt=cnt_p+cnt_pp;
    }
    else{
        cnt=cnt_p+cnt_pp;
        cnt_pp=cnt_p;
        cnt_p=cnt;
    }
    printf("%d, ", cnt);
    }

    return 0;
}


