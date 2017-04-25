#ifndef POINT_H
#define POINT_H

class Point{
private:
    float x, y;

public:
    Point(float px=0, float py=0);

    ~Point();

    void setX(float mx);                            //Define o valor da coordenada x do ponto

    void setY(float my);                            //Define o valor da coordenada y do ponto

    void setXY(float mx, float my);                 //Define, em uma mesma função, os valores da coordenadas x e y do ponto

    float getX(void);                               //Recupera o valor da coordenada x do ponto

    float getY(void);                               //Recupera o valor da coordenada y do ponto

    Point add(Point p1);                            /*Adiciona as coordenadas (x,y) do ponto com as coordenadas
                                                      de um ponto P1(x1,y1) fornecido, armazenando o resultado
                                                      (x+x1,y+y1) nas coordenadas de um novo ponto, que deverá
                                                      ser retornado para o cliente da classe*/

    Point sub(Point p1);                            /*Subtrai as coordenadas (x,y) do ponto com as coordenadas
                                                      de um ponto P1(x1,y1) fornecido, armazenando o resultado
                                                      (x−x1,y−y1) nas coordenadas de um novo ponto, que deverá
                                                      ser retornado para o cliente da classe*/

    float norma(void);                              //calcula a distancia do ponto a origem

    void translada(float a, float b);               //translada o ponto ( x, y) para ( x+a, y+b)

    void imprime(void);                             //imprime o ponto
};

#endif // POINT_H
