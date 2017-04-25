#include "Retangulo.h"

Retangulo::Retangulo(int x, int y, int largura, int altura){
        vertices[0].setXY(x,y);
        vertices[1].setXY(x,y-altura);
        vertices[2].setXY(x+largura,y-altura);
        vertices[3].setXY(x+largura,y);
}
