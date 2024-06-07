#include <stdio.h>

// Función principal
int main() {
    // Variables
    int entero = 10;
    float flotante = 5.5;
    char caracter = 'A';
    char cadena[] = "Hola, mundo!";

    // Imprimir en consola
    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);
    printf("Caracter: %c\n", caracter);
    printf("Cadena: %s\n", cadena);

    // Condicionales
    if (entero > 5) {
        printf("El entero es mayor que 5.\n");
    } else {
        printf("El entero es menor o igual a 5.\n");
    }

    // Bucles
    printf("Bucle for:\n");
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    printf("Bucle while:\n");
    int j = 0;
    while (j < 5) {
        printf("j = %d\n", j);
        j++;
    }

    // Funciones
    int resultado = suma(3, 4);
    printf("Suma: 3 + 4 = %d\n", resultado);

    // Estructuras
    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona persona1;
    persona1.edad = 25;
    strcpy(persona1.nombre, "Juan");

    printf("Persona: %s, Edad: %d\n", persona1.nombre, persona1.edad);

    return 0;
}

// Función para sumar dos números
int suma(int a, int b) {
    return a + b;
}
