#include "stdio.h"

//tipo nombre(tipo argumento1, tipo argumento2, ...)
void limite(int liminf, int limsup);
//void(limite)








int main(int argc, char *argv[]) {
    int liminf, limsup;

//    printf("%d %d\n\n\n", 2%2, 3%2);

    printf("Ingrese limite inferior: ");
    scanf("%d", &liminf);

    printf("Ingrese limite superior: ");
    scanf("%d", &limsup);

    limite(liminf,limsup);
}









void limite(int liminf, int limsup) {
    
    while(liminf<limsup){
        if(liminf%2==0)
            printf("%d, ",liminf);

        liminf++;

    }
}
