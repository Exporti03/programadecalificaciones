#include <iostream>

int main() {
    double calificacion;
    double contador = 0;  // Inicializamos contador

    std::cout << "\t####--Calculadora calificaciones--####\n\t";

    do {
        std::cout << "Introduzca calificacion (0 para terminar): ";
        std::cin >> calificacion;

        if (calificacion >= 5 && calificacion <= 10) {
            contador++;
        } 
        else if (calificacion != 0) {
            std::cout << "Calificacion no valida\n";
        }
        
    } while (calificacion != 0);  // Nótese que se eliminó el if y se corrigió "whille"

    std::cout << "Calificaciones introducidas: " << contador << "\n";
    std::cout << "Fin del programa\n";

    return 0;
}