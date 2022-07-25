#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Producto
{
    string departamento;
    string nombre;
    float precio;
};

void menu();
void insertar(Producto p[], int i);

int main()
{
    Producto p[20];
    char opcion;
    int i = 0;

    do {
        cout << "\n\nProducto " << i + 1 << " de 20" << endl;

        menu();
        cin >> opcion;

        switch(opcion)
        {
            case '1':
                p[i].departamento = "La biblia";
                insertar(p, i);
                i++;
                break;

            case '2':
                p[i].departamento = "Señor Precidente";
                insertar(p, i);
                i++;
                break;

            case '3':
                p[i].departamento = "El Libro Troll";
                insertar(p, i);
                i++;
                break;

            case '4':
                p[i].departamento = "santillana";
                insertar(p, i);
                i++;
                break;

            case '5':
                p[i].departamento = "norma ";
                insertar(p, i);
                i++;
                break;

            case '6':
                cout << "\n\nFIN DEL PROGRAMA" << endl;
                break;

            default:
                cout << "\n\nOPCION NO VALIDA" << endl;
                break;
        }

        if (i >= 20) break;

    } while (opcion != '6');

    return 0;
}

void menu()
{
    cout << "\n    DEPARTAMENTO "
         << "\n======================="
         << "\n1.- La Biblia"
         << "\n2.- Señor Presidente"
         << "\n3.- El libro troll"
         << "\n4.- Santillana"
         << "\n5.- norma"
         << "\n6.- Salir"
         << "\n======================="
         << "\nOPCION (1 - 6): ";
}

void insertar(Producto p[], int i)
{
    cin.ignore(80, '\n');
    cout << "\nNombre: "; getline(cin, p[i].nombre);
    cout << "Precio: "; cin >> p[i].precio;

    cout<<"total a pagar 500 "  ;
}
