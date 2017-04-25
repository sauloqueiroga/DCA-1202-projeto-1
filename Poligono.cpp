#include "Poligono.h"
#include "Point.h"
#include <iostream>

using namespace std;

Poligono::Poligono(){                                       //Construtor
    for (int i = 0; i < vertices.getN(); i++){
        vertices[i].setXY(0,0);
    }
}

Poligono::~Poligono(){                                      //Destrutor
}

int Poligono::setVertices(Point v1[])
{
    int n;
    char opcao = 'o';
    float xi = 0, yi = 0;


    cout << " Insira as coordenadas no sentido anti-horario." << endl;


    for(n = 0; n < 100; i++){
        cout << "insira o vertice do poligono ( X e Y respectivamente): ";
        cin >> xi;
        cin >> yi;
        if(n > 2){
            cout << "Deseja inserir mais vertices?('s' / 'n') ";
            cin >> opcao;
        }
        while(opcao != 's' && opcao != 'n'){
            cout << "resposta invalida. Tente novamente: ";
            cin >> opcao;
        }
        if(opcao == 'n'){
            break;
        }
    }
    return n;
}

int Poligono::getN()
{
    int nVertice = sizeof(vertices)/sizeof(Poligono);
    return (nVertice);
}

float Poligono::area(Point v1[]){
    float s_x = 0, s_y = 0;

    //Soma o produto de cada elemento de x(ou y) com o seguinte de y(ou x),
    //a partir do primeiro(vertices[0]) ate o penultimo.
    for(int i = 0; i < vertices.getN() - 1; i++){
        s_x = s_x + vertices[i].getX()*vertices[i+1].getY();
    }

    for(int i = 0; i < vertices.getN() - 1; i++){
        s_y = s_y + vertices[i].getY()*vertices[i+1].getX();
    }

    //Soma o produto do ultimo elemento de x(ou y) com o primeio de y(ou x)
    s_x = s_x + vertices[vertices.getN()].getX()*vertices[0].getY();
    s_y = s_y + vertices[vertices.getN()].getY()*vertices[0].getX();

    //Retorna o valor da area do poligono.
    return ((s_x - s_y)/2);
}

void Poligono::transladaPoligono(float a, float b){
    for (int i = 0; i < vertices.getN(); i++){
        vertices[i].translada(a, b);
    }
}

void Poligono::imprime(){
    for (int i = 0; i < vertices.getN(); i++){
        cout << "(" << vertices[i].getX() << ", " << vertices[i].getY() << ")    ";
    }
    cout << endl;
}
