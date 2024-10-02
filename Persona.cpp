#include "Persona.hpp"

// Método privado para generar un DNI aleatorio con letra
void Persona::generarDNI() {
    static const char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int numDni = rand() % 100000000;  // Número de 8 dígitos
    char letra = letras[rand() % 26]; // Letra aleatoria
    
    // Formateamos el DNI con la letra final
    snprintf(dni, sizeof(dni), "%08d%c", numDni, letra);
}

// Constructor
Persona::Persona(int edad) {
    this->edad = edad;
    this->generarDNI();
    this->genero = rand() % 2;  // Genera 0 o 1 de manera aleatoria (0 = Hombre, 1 = Mujer)
}

// Destructor
Persona::~Persona() {
    // No hay recursos dinámicos que liberar
}

// Métodos solicitados
int Persona::getEdad() const {
    return edad;
}

bool Persona::esMujer() const {
    return genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() const {
    std::cout << "DNI: " << dni << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Género: " << (genero ? "Mujer" : "Hombre") << std::endl;
    std::cout << "----------------------" << std::endl;
}
