/*
** Fichero: SaludoFormal.c
** Autor: Nombre completo
** Fecha: 21-02-24
**
** Descripción: Muestra al usuario un saludo utilizando el nombre que es leido de teclado previamente
**
*/

#include <stdio.h>
int main(){
    char nombre[30];
    printf("Por favor, introduzca su nombre: ");
    scanf(" %[^\n]s",nombre);
    printf("\n\nSaludos D. %s", nombre);
    printf("\nBienvenido al fantástico mundo de la programación");
    printf("\n\nPulse una tecla para finalizar");
    getchar();
    return 0;
}