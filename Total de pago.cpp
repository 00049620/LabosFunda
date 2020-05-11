#include "iostream"
#include "stdio.h"
#include <conio.h>

using namespace std;
int main(void)
{
    int Cantidad ;
    char producto[15];
    float precio;

    std::cout << "Que compraras?:";
    cin >> producto;

    std::cout <<"cuantos comprara?:";
    cin >> Cantidad;

    std::cout <<"Precios de productos por unidad:";
    cin >> precio;

    std::cout <<"En total usted pagara $"
    << Cantidad*precio;

    getche();
    
    }