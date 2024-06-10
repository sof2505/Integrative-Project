#include <iostream>
#include <vector>
#include <fstream>
#include "titles.hpp"

using namespace std;
int main(){
    Titles m1("Harry Potter and the Philosopher's Stone", "Mystery" ,5);
    cout << m1.show() << endl;
}


/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

struct DatosCSV {
    std::string campo1;
    std::string campo2;
    std::string campo3;
    std::string campo4;
    // Añade más campos según el número de columnas en tu CSV
};

std::vector<DatosCSV> leerCSV(const std::string& movies) {
    std::vector<DatosCSV> datos;
    std::ifstream archivo(movies);
    std::string linea;

    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo " << movies << std::endl;
        return datos;
    }

    // Si el archivo tiene una cabecera, puedes omitirla leyendo una línea extra
    // std::getline(archivo, linea);

    while (std::getline(archivo, linea)) {
        std::istringstream ss(linea);
        DatosCSV fila;
        std::getline(ss, fila.campo1, ',');
        std::getline(ss, fila.campo2, ',');
        std::getline(ss, fila.campo3, ',');
        std::getline(ss, fila.campo4, ',');
        // Lee más campos según sea necesario

        datos.push_back(fila);
    }

    archivo.close();
    return datos;
}

int main() {
    std::string movies = "movies.csv";
    std::vector<DatosCSV> datos = leerCSV(movies);

    for (const auto& fila : datos) {
        std::cout << "Campo1: " << fila.campo1 << ", Campo2: " << fila.campo2 << ", Campo3: " << fila.campo3 << std::endl;
        // Imprime más campos según sea necesario
    }

    return 0;
}

*/