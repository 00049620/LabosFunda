#include "iostream"
#include "cmath"
#include "stdui.h"
using namespace std;
int main (void)

{

int a;
int b;
int c;
int suma;
int divicion;
int raiz;
float resta x1,x2;

cout <<"Introduzca el valor de a:";
cin >> a;


cout <<"Introduzca el valor de b:";
cin >> b;


cout <<"Introduzca el valor de c:";
cin >> c;

resta = (b*b)-(4*a*c);
if (resta >0) {
    x1 = (-b-sqrt(resta))/(2*a);
     printf("x1 = %.2f\n", x1);

   x2= (-b+sqrt(resta))/(2*a);
     printf("x2= %.2f\n", x2;

}

else 
printf("No tiene solucion.");

}