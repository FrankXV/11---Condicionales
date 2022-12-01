/* Problema 1: Comporbar a travez de un ñ´programa si un alumno aprobo o no
 * en el examen (Aprueba si su nota es mayor a 6.0)
 *
 *
 *
 *
 * */


#include <stdio.h>

int main() {

    double nota;

    printf("Digite la nota del examen: ");
    scanf("%lf", &nota);

    if ( nota > 6.0)
    {

        printf("El alumno esta aprobado");

    } else
    {

        printf("El alumno esta reprobado %lf es menor que 10.5", nota);

    }

    return 0;
}
