//
// Created by kevin on 24/03/2023.
//
#include <iostream>
#include "archivos.h"

using namespace std;

void edadmayoromenor(){
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }
}


void nummayor(){
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El primer numero (" << num1 << ") es mayor que el segundo numero (" << num2 << ")." << endl;
    }
    else if (num2 > num1) {
        cout << "El segundo numero (" << num2 << ") es mayor que el primer numero (" << num1 << ")." << endl;
    }
    else {
        cout << "Los dos numeros son iguales." << endl;
    }

}
void parimpar(){
    int num;

    cout << "Ingrese un numero entero : ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " es par." << endl;
    } else {
        cout << num << " es impar." << endl;
    }

}
void factorial(){
    int num, factorial = 1;

    cout << "Introduzca un numero: ";
    cin >> num;

    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "El factorial de " << num << " es " << factorial << endl;
}
void numerosimparesfor(){
    int numero;

    do {
        cout << "Ingrese un numero mayor a 10 y menor que 30: ";
        cin >> numero;
    } while (numero <= 10 || numero >= 30);

    for (int i = 1; i <= numero; i += 2) {
        cout << i << " ";
    }

    cout << endl;
}
void numerosimpareswhile(){
    int num;

    do {
        cout << "Ingrese un numero mayor a 10 y menor que 30: ";
        cin >> num;
    } while (num <= 10 || num >= 30);

    int i = 1;
    cout << "Numeros impares desde 1 hasta " << num << ":" << endl;


    while (i <= num) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    }
    cout<<endl;
}
void diadelasemana(){

    int day;

    cout<<"Ingrese un numero del 1 al 5 para saber que dia de la semana es:";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Es el dia Lunes";
            break;
        case 2:
            cout<<"Es el dia Martes";
            break;
        case 3:
            cout<<"Es el dia Miercoles";
            break;
        case 4:
            cout<<"Es el dia Jueves";
            break;
        case 5:
            cout <<"Es el dia Vienes";
            break;
        default:
            cout<<"Dia de un fin de semana o dia no existente";
            break;
    }
    cout<<endl;

}

void ejerciciosanteriores(){
    int numejercicio;

    cout<<"Elija el numero del ejercicio que quiera ejecutar:"<<endl;
    cout<<"1. Introducir la edad e identificar si es mayor o menor de edad."<<endl;
    cout<<"2. Introducir dos numeros e identificar cual es el mayor de los dos"<<endl;
    cout<<"3. Introducir un numero entero e identificar si es par o impar"<<endl;
    cout<<"4. Calcular el factorial de un numero"<<endl;
    cout<<"5. identificar los numeros impares que hay entre un numero mayor que 10 y menor que 30"<<endl;
    cout<<"6. identificar los numeros impares que hay entre un numero mayor que 10 y menor que 30"<<endl;
    cout<<"7. Ingresar un numero del 1 al 5 para saber que dia de la semana es";
    cout<<endl;
    cin>>numejercicio;

    switch(numejercicio){
        case 1:
            edadmayoromenor();
            break;
        case 2:
            nummayor();
            break;
        case 3:
            parimpar();
            break;
        case 4:
            factorial();
            break;
        case 5:
            numerosimparesfor();
            break;
        case 6:
            numerosimpareswhile();
            break;
        case 7:
            diadelasemana();
            break;
        default:
            cout<<"Numero de ejercicio no existente";
            break;
    }

}