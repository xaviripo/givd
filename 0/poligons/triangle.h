#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figura.h"

class Triangle : public Figura
{
    glm::vec4 vertexs[3];
public:
    Triangle(glm::vec4, glm::vec4, glm::vec4);
    glm::vec4 obteNormal();
    float obteAngle(int id_vertex);
};

#endif // TRIANGLE_H
