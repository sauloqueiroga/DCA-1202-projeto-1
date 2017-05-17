#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono{
    private:
    Point vertices[100];                            //onde serão armazenados o pontos
    int nVertices;                                  //quantidade de vertices

public:
    Poligono(void);                                 //construtor

    ~Poligono();                                    //destrutor

    int setVertices(Point v1[]);                    //insere os valores dos vertices

    int getN(void);                                 //obtem o numero de vertices

    float area(Point v1[]);

    void transladaPoligono(float a, float b);       //translada o poligono

    void rotaciona(Point p1, float nGrau);

    void imprime(void);                             //imprime o poligono
};

#endif // POLIGONO_H
