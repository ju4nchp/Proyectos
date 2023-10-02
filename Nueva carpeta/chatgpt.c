#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcionComputadora;
    char opcionUsuario;

    srand(time(NULL)); // Inicializar generador de números aleatorios

    // Obtener elección aleatoria de la computadora (0 - piedra, 1 - papel, 2 - tijera)
    opcionComputadora = rand() % 3;

    // Pedir la elección al usuario
    printf("Elige una opción:\n");
    printf("I - Piedra\n");
    printf("A - Papel\n");
    printf("T - Tijera\n");
    printf("Tu elección: ");
    scanf(" %c", &opcionUsuario);

    // Mostrar la elección del usuario y de la computadora
    printf("Elección del usuario: %c\n", opcionUsuario);
    if (opcionComputadora == 0)
        printf("Elección de la computadora: I (Piedra)\n");
    else if (opcionComputadora == 1)
        printf("Elección de la computadora: A (Papel)\n");
    else
        printf("Elección de la computadora: T (Tijera)\n");

    // Determinar el resultado
    if ((opcionUsuario == 'I' && opcionComputadora == 2);
        (opcionUsuario == 'A' && opcionComputadora == 0);
        (opcionUsuario == 'T' && opcionComputadora == 1);) {
        printf("¡Ganaste!\n");
    } else if ((opcionUsuario == 'I' && opcionComputadora == 1)
               (opcionUsuario == 'A' && opcionComputadora == 2)
               (opcionUsuario == 'T' && opcionComputadora == 0)) {
        printf("¡La computadora gana!\n");
    } else {
        printf("Es un empate.\n");
    }

    return 0;
}
