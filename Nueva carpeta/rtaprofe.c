#include <stdio.h>

int main() {

    int legajo, totalLegajos = 0;
    float mayorPromedio = 0;
    int anioMayorPromedio, gradoMayorPromedio;
    char grado;

    // For para los 7 a�os
    for (int i = 1; i <= 7; i++) {
        printf("A%co %d\n",164, i);
        printf("---------\n");

        int contA = 0, contB = 0, nota, acumA = 0,acumB = 0;
        float promedioA = 0, promedioB = 0;

        // Leer legajo
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

	// Ingreso los alumnos hasta recibir el legajo '\0'
        while (legajo != 0) {
            // Leer datos del alumno
            printf("Ingrese grado (A/B): ");
            scanf(" %c", &grado);
            printf("Ingrese nota (1-10): ");
            scanf(" %d", &nota);

            // Acumulo nota seg�n el grado del alumno
            if (grado == 'A') {
                contA++;
                acumA += nota;
            } else if (grado == 'B') {
                contB++;
                acumB += nota;
            }
            totalLegajos++;

            // Leer legajo del siguiente alumno
            printf("Ingrese legajo: ");
            scanf("%d", &legajo);
        }

        totalLegajos = totalLegajos + contA + contB  ;

        // Calcular los promedios para el a�o actual
        if (contA > 0) {
            promedioA = (float) acumA / contA;
            printf("A = %.2f\n",  (float) acumA / contA);
        }
        if (contB > 0) {
            promedioB = (float) acumB / contB;
            printf("B = %.2f\n", promedioB);
        }

        // Verificar si algun promedio actual es mayor al mayorPromedio
        if (promedioA > mayorPromedio) {
            mayorPromedio = promedioA;
            anioMayorPromedio = i;
            gradoMayorPromedio = 'A';
        }
        if (promedioB > mayorPromedio) {
            mayorPromedio = promedioB;
            anioMayorPromedio = i;
            gradoMayorPromedio = 'B';
        }

        printf("\n");
    }

    // Imprimir resultados finales
    printf("Total de legajos procesados: %d\n", totalLegajos);
    printf("Mayor promedio: %.2f (A%co %d, Grado %c)\n", mayorPromedio,164, anioMayorPromedio, gradoMayorPromedio);

    return 0;


}


/*
int legajo, totalLegajos = 0;
    float mayorPromedio = 0;
    int anioMayorPromedio, gradoMayorPromedio;
    char grado;

    // For para los 7 a�os
    for (int i = 1; i <= 7; i++) {
        printf("A%co %d\n",164, i);
        printf("---------\n");

        int contA = 0, contB = 0, nota;
        float acumA = 0, acumB = 0, promedioA = 0, promedioB = 0;

        // Leer legajo
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

	// Ingreso los alumnos hasta recibir el legajo '\0'
        while (legajo != '\0') {
            // Leer datos del alumno
            printf("Ingrese grado (A/B): ");
            scanf(" %c", &grado);
            printf("Ingrese nota (1-10): ");
            scanf("%f", &nota);

            // Acumulo nota seg�n el grado del alumno
            if (grado == 'A') {
                contA++;
                acumA += nota;
            } else if (grado == 'B') {
                contB++;
                acumB += nota;
            }
            totalLegajos++;

            // Leer legajo del siguiente alumno
            printf("Ingrese legajo: ");
            scanf("%d", &legajo);
        }

        totalLegajos = totalLegajos + contA + contB  ;

        // Calcular los promedios para el a�o actual
        if (contA > 0) {
            promedioA = (float) acumA / contA;
            printf("A = %.2f\n",  (float) acumA / contA);
        }
        if (contB > 0) {
            promedioB = (float) acumB / contB;
            printf("B = %.2f\n", promedioB);
        }

        // Verificar si algun promedio actual es mayor al mayorPromedio
        if (promedioA > mayorPromedio) {
            mayorPromedio = promedioA;
            anioMayorPromedio = anio;
            gradoMayorPromedio = 'A';
        }
        if (promedioB > mayorPromedio) {
            mayorPromedio = promedioB;
            anioMayorPromedio = anio;
            gradoMayorPromedio = 'B';
        }

        printf("\n");
    }

    // Imprimir resultados finales
    printf("Total de legajos procesados: %d\n", totalLegajos);
    printf("Mayor promedio: %.2f (A%co %d, Grado %c)\n", mayorPromedio,164, anioMayorPromedio, gradoMayorPromedio);

    return 0;

    */
