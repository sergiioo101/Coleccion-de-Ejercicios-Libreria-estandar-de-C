#include <string.h>
#include <stdio.h>

int main() {
    // Cadena de caracteres
    char str[] = "Hola mundo";

    // Calcular la longitud de la cadena utilizando strlen()
    int length = strlen(str);

    // Mostrar la longitud de la cadena
    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}
