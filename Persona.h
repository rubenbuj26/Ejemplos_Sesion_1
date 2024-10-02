#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <cstdlib>  // Para usar rand()
#include <ctime>    // Para usar time()

class Persona {
private:
    bool genero;      // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];     // DNI con letra

    // Método privado para generar un DNI aleatorio con letra
    void generarDNI();

public:
    // Constructor que recibe la edad y genera el DNI y el género automáticamente
    Persona(int edad);
    
    // Destructor
    ~Persona();

    // Métodos solicitados
    int getEdad() const;
    bool esMujer() const;
    void setEdad(int edad);
    void mostrar() const;
};

#endif // PERSONA_HPP
