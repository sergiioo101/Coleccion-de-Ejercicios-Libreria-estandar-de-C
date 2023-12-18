#include <cstring>
#include <cstdio>

int main() {
    // Cadenas de caracteres
    char str1[] = "Hola";
    char str2[] = "Mundo";

    // Comparar las cadenas utilizando strcmp()
    int comparison = strcmp(str1, str2);

    // Mostrar el resultado de la comparación
    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
