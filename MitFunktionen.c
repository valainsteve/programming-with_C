#include <stdio.h>

void gibErstenTextAus(void){
    printf("Ich bin ein C-Programm.\n");
    return;
}

void gibZweitenTextAus(void){
    printf("und tu sonst nix.");
    return;
}

int main(){
    gibErstenTextAus();
    gibZweitenTextAus();
    return 0;
}
