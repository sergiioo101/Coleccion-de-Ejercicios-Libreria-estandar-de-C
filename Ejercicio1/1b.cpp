#include <cstdlib>
#include <cstdio>
#include <ctime>

int main() {
    // Semilla inicial basada en el tiempo actual
    srand(time(0));

    // Generar y mostrar el primer número aleatorio
    int random_number = rand();
    printf("Número aleatorio (semilla original): %d\n", random_number);

    // Cambiar la semilla utilizando un valor específico
    unsigned int nueva_semilla = 123;  // Puedes cambiar este valor
    srand(nueva_semilla);

    // Generar y mostrar un nuevo número aleatorio con la nueva semilla
    random_number = rand();
    printf("Número aleatorio (nueva semilla): %d\n", random_number);

    return 0;
}
