#include <iostream>
#include <iomanip> // Para formatear decimales

int main() {
    double calificacion;
    double suma = 0;
    int contador = 0;
    char continuar;

    std::cout << "\t####--Calculadora de Calificaciones--####\n\n";

    do {
        // Solicitar y validar la calificación
        do {
            std::cout << "Introduce calificacion (0-5): ";
            std::cin >> calificacion;
            
            if (calificacion < 0 || calificacion > 10) {
                std::cout << "Error: La calificacion debe estar entre 0 y 10\n";
            }
        } while (calificacion < 0 || calificacion > 10);

        // Acumular la suma y contar calificaciones
        suma += calificacion;
        contador++;

        // Mostrar estado actual
        std::cout << "\nCalificaciones ingresadas: " << contador;
        std::cout << "\nPromedio actual: " << std::fixed << std::setprecision(2) 
                  << (suma / contador) << "\n";

        // Preguntar si desea continuar
        std::cout << "\n¿Desea agregar otra calificacion? (s/n): ";
        std::cin >> continuar;
        std::cout << "\n";

    } while (continuar == 's' || continuar == 'S');

    // Mostrar resultados finales
    if (contador > 0) {
        double promedio = suma / contador;
        std::cout << "\n====== Resultados Finales ======\n";
        std::cout << "Total de calificaciones: " << contador << "\n";
        std::cout << "Promedio final: " << std::fixed << std::setprecision(2) 
                  << promedio << "\n";
        
        // Mostrar estado según el promedio
        std::cout << "Estado: ";
        if (promedio >= 5) {
            std::cout << "Excelente\n";
        } else if (promedio >= 4) {
            std::cout << "Muy Bien\n";
        } else if (promedio >= 3) {
            std::cout << "Regular\n";
        } else if (promedio >= 2) {
            std::cout << "Suficiente\n";
        } else {
            std::cout << "Reprobado\n";
        }
    }

    return 0;
}