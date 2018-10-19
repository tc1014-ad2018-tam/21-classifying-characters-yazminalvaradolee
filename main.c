/*
 *Programa para escribir una oracion y poder indentificar si es una
 * vocal, consonante, espacio, digito o caracter especial
 *
 * Autora: Yasmin Alvarado Lee
 * correo: yazminalvlee@gmail.com
 * fecha: 18 de oct del 2018
 */

#include <stdio.h>

int main() {
    //VARIABLES
    char string[200];
    int a=0;

    printf("Escribe una oracion: \n");
    fgets(string, sizeof(string), stdin);

    //OPERACION PARA IDENTIFICAR LAS VARIABLES
    while(string [a]!='\n'){
        if((string[a]>64 && string[a]<91) || (string[a]>96 && string[a]<123)){
            if(string[a]==65||string[a]==69||string[a]==73||string[a]==79||string[a]==85||string[a]==97||string[a]==101
            ||string[a]==105||string[a]==111||string[a]==117){
                printf("%c es una vocal\n", string[a]);
            } else{
            printf("%c es una consonante\n", string[a]);
            }
        }
        else if(string[a]==32){
            printf("' es un espacio\n", string[a]);
        }
        else if((string[a]>47&&string[a]<58)){
            printf("%c es un digito\n", string[a]);
        }
        else{
            printf("%c es un carácter especial\n", string[a]);
        }
        a++;
    }
    return 0;
}
