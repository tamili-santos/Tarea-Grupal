#include <iostream>
#include"Programa_8.cpp"
#include"Programa_9.cpp"
#include"Programa_10.cpp"
#include"Programa_11.cpp"
#include"Programa_12.cpp"
#include"Programa_13.cpp"
#include"Programa_14.cpp"

using namespace std;

// Declaraciones de funciones para cada programa

void Programa_8();
void Programa_9();
void Programa_10();
void Programa_11();
void Programa_12();
void Programa_13();
void Programa_14();


int main() {
    int opcion;

    do {
        // Mostrar el menu principal
        cout << "\n------ Menu Principal ------" << endl;
        cout << "1. Programa_1: Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Programa_2: Determinar si un numero es par o impar" << endl;
        cout << "3. Programa_3: Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Programa_4: Determinar si una palabra o un numero es palindromo." << endl;
        cout << "5. Programa_5: Conversion de numeros arabigos a romanos (minimo 1,000)" << endl;
        cout << "6. Programa_6: Conversion de numeros enteros a letras" << endl;
        cout << "7. Programa_7: Conversion de numeros enteros con decimal a letras" << endl;
        cout << "8. Programa_8: Una tabla de multiplicar" << endl;
        cout << "9. Programa_9: Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Programa_10: Crear de forma grafica la multiplicacion manual" << endl;
        cout << "11. Programa_11: Conversion de numeros decimales a binario" << endl;
        cout << "12. Programa_12: Conversion de numeros decimales a hexadecimales" << endl;
        cout << "13. Programa_13: Crear Figuras Geometricas Basicas." << endl;
        cout << "14. Programa_14: Mover un punto en toda la pantalla" << endl;
        cout << "15. Programa_15: Simulacion de un Cajero (Autamata)" << endl;
        cout << "16. Programa_16: Calcular la hipotenusa" << endl;
        cout << "17. Programa_17: Libre (pueden realizar el programa que ustedes quieran)" << endl;
        cout << "18. Programa_18: Libre (pueden realizar el programa que ustedes quieran)" << endl;
        cout << "19. Programa_19: Libre (pueden realizar el programa que ustedes quieran)" << endl;
        cout << "20. Programa_20: Libre (pueden realizar el programa que ustedes quieran)" << endl;
        cout << "21. Programa_21: Menu Principal" << endl;
        cout << "0. Salir" << endl;
        cout << "\nElija una opcion: ";
        cin >> opcion;
        cout << "\n";

        // Ejecutar el programa correspondiente segun la opcion elegida
        switch (opcion) {        
            case 8:
                Programa_8();
                break;
            case 9:
                Programa_9();
                break;
            case 10:
                Programa_10();
                break;
            case 11:
                Programa_11();
                break;
            case 12:
                Programa_12();
                break;
            case 13:
                Programa_13();
                break;
            case 14:
                Programa_14();
                break;
      case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, elija una opcion valida." << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}
