#include <iostream>
#include <set>
#include "Persona.hpp"

using namespace std;

int main() {
    srand(time(0));  // Inicializamos el generador de números aleatorios

    const int numPersonas = 10;
    Persona* personas[numPersonas];

    set<int> edadesUnicas;  // Usamos un set para asegurar que no haya edades repetidas

    // Creamos 10 personas con edades únicas entre 18 y 27
    for (int i = 0; i < numPersonas; ++i) {
        int edad;
        do {
            edad = rand() % 10 + 18;  // Genera una edad entre 18 y 27
        } while (edadesUnicas.find(edad) != edadesUnicas.end());  // Verifica que la edad sea única

        edadesUnicas.insert(edad);  // Añadimos la edad al set
        personas[i] = new Persona(edad);  // Creamos el objeto Persona
    }

    // Mostramos la información de cada persona
    for (int i = 0; i < numPersonas; ++i) {
        personas[i]->mostrar();
        delete personas[i];  // Liberamos la memoria al terminar
    }

    return 0;
}
