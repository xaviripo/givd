#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figura.h"

class Triangle : public Figura {
    glm::vec4 vertexs[3];
public:
    Triangle(glm::vec4, glm::vec4, glm::vec4);
    glm::vec4 obteNormal();
    float obteAngle(int id_vertex);
    void traslada(glm::vec3 desplazament);
    void escala(glm::vec3 factor_escalat);
    void rota(float radians, glm::vec3 punt_rotacio, glm::vec3 eix_rotacio);

};

#endif // TRIANGLE_H
