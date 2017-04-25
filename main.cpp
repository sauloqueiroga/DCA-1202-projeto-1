#include <iostream>
#include "Point.h"
#include "Poligono.h"
#include "Retangulo.h"
using namespace std;

int main(){
    Point p1, p2, p3;
    Poligono v1, v2, v3;
    Retangulo r1;

    r1.Retangulo( 0, 0, 4, 3);                                  //obs: codigo incompleto

    p1.setX(4); p1.setY(3);                                     // testes da classe ponto

    p1.imprime();

    p2.setXY(4, 3);

    p2.imprime();

    p3 = p1.add(p2);

    p3.imprime();

    p3 = p1.sub(p2);

    p3.imprime();

    cout << "Norma = " << p3.norma() << endl;

    p3.translada(-3, 4);

    p3.imprime();

    return 0;
}
