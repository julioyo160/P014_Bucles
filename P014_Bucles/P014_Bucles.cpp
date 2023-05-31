// P014_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream> 

int main()
{
   
    int opcion;
    int opcion2;


    std::cout << "Ingrese una opcion: \n";
    std::cout << "1. Contar del 1000 al 0. \n";
    std::cout << "2. Contar del 1 al 100 lento. \n";
    std::cout << "3. Contar de 10 en 10 hasta el 100. \n";
    std::cin >> opcion;

    switch (opcion) {
    case 1:
        std::cout << "Que ciclo deseas utilizar? \n";
        std::cout << "4. For. \n";
        std::cout << "5. While. \n";
        std::cout << "6. Do-While. \n";
        std::cin >> opcion2;


        switch (opcion2) {
        case 4:

            for (int i = 1000; i >= 0; i--) {
                std::cout << i << "\n";
            }
            std::cout << "Has utilizado el ciclo For \n";

            std::cin >> opcion2;

            break;

        case 5:

            int i = 1000;
            while (i >= 0) {
                std::cout << i << std::endl;
                i--;
            }
            std::cout << "Has utilizado el ciclo While \n";

            std::cin >> opcion2;
            break;
       

        }








    case 2:
        for (int i = 1; i <= 100; i++) {
            std::cout << i << "\n";
            for (int j = 0; j <= 30000000; j++);
        }
        break;

    case 3:
        int contador = 10;
        do {
            std::cout << contador << "\n";
            contador += 10;
        } while (contador <= 100);
        break;


    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
