#ifndef VOLUME_H
#define VOLUME_H

#include <math.h>
#include "volume.c"
#define M_PI 3.14159265358979323846

// Funções para cálculo de volumes
float cubo(float aresta);
float paralelepipedo(float largura, float profundidade, float altura);
float esfera(float raio);
float cilindro(float raio, float altura);
float piramide(float largura, float profundidade, float altura);

#endif // VOLUME_H
