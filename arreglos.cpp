// arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    //1.- Programa que pida 10 números y los muestre en orden inverso al que fueron agregados.
    int numeros[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese los numeros: ";
        cin >> numeros[i];
    }
    cout << "Los numeros ingresados en orden inverso son:" << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << numeros[i] << endl;
    }
    
    //2. - Programa que pida 10 números, calcule su media y luego muestre los que están por encima de la media.
    double nume[10], suma = 0, media;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese los numeros: ";
        cin >> nume[i];
        suma += nume[i];
    }
    media = suma / 10;
    cout << "La media de los numeros ingresados es: " << media << endl;
    cout << "Los numeros mayores que la media son: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (nume[i] > media)
        {
            cout << nume[i] << endl;
        }
    }

    //3. - Programa que pida 10 números, para que calcule cuál es el mayor de ellos.
    int num, max = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Ingrese un número: ";
        std::cin >> num;
        if (num > max)
        {
            max = num;
        }
    }
    std::cout << "El número más grande es: " << max << std::endl;
}
