#include <iostream>
using namespace std;

int main()
{
    int A[3], B[3], respuesta, resultado[3];
    int ortogonal[2];
    char primero[] = "i", segundo[] = "j", tercero[] = "k";

    cout << "En r2 o r3" << endl;
    cin >> respuesta;

    system("CLS");
    cout << "Escriba los numeros en A: ";

    if (respuesta == 2){

        A[2] = 0, B[2] = 0;
        for(int i = 0; i < 2; i++){
            cin >> A[i];
        }

        cout << "Escriba los numeros en B: ";
        for(int i = 0; i < 2; i++){
            cin >> B[i];
        }
    }

    if (respuesta == 3){

        for(int i = 0; i < 3; i++){
            cin >> A[i];
        }

        cout << "Escriba los numeros en B: ";
        for(int i = 0; i < 3; i++){
            cin >> B[i];
        }
    }

    cout << "A: " << A[0] << primero << ", " << A[1] << segundo << ", " << A[2] << tercero << endl;
    cout << "B: " << B[0] << primero << ", " << B[1] << segundo << ", " << B[2] << tercero << endl;

    resultado[0] = (A[1] * B[2]) - (B[1] * A[2]);
    resultado[1] = ((A[0] * B[2]) - (B[0] * A[2])) * - 1;
    resultado[2] = (A[0] * B[1]) - (B[0] * A[1]);

    cout << "\nEl resultado es: " << endl;
    cout << resultado[0] << primero << ", " << resultado[1] << segundo << ", " <<  resultado[2] << tercero << endl << endl;

    ortogonal[0] = A[0] * resultado[0] + A[1] * resultado[1] + A[2] * resultado[2];
    ortogonal[1] = (B[0] * resultado[0]) + (B[1] * resultado[1]) + (B[2] * resultado[2]);

    cout << "(" << A[0] << " * " << resultado[0] << ")" << " + " << "(" << A[1] << " * "  << resultado[1] << ")" <<  " + "  << "(" << A[2] << " * "  << resultado[2] << ")" << " = " << ortogonal[0] << endl;
    cout << "(" << B[0] << " * " << resultado[0] << ")" << " + " << "(" << B[1] << " * "  << resultado[1] << ")" <<  " + "  << "(" << B[2] << " * "  << resultado[2] << ")" << " = " << ortogonal[1] << endl;

    if(ortogonal[0] == 0 && ortogonal[1] == 0){

        cout << "\nAmbos son ortogonales" << endl;
    }

    else if(ortogonal[0] == 0){

        cout << "\nSolo el primero es ortogonal" << endl;
    }

    else if(ortogonal[1] == 0){

        cout << "\nSolo el segundo es ortogonal" << endl;
    }

    else{
        cout << "\nNinguno es ortogonal" << endl;
    }
}