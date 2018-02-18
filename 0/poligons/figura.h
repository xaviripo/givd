#ifndef FIGURA_H
#define FIGURA_H

#include "glm/glm.hpp"

class Figura {
public:
    virtual glm::vec4 obteNormal() = 0;
    virtual void traslada(glm::vec3 desplazament) = 0;
    virtual void escala(glm::vec3 factor_escalat) = 0;
    virtual void rota(float radians, glm::vec3 punt_rotacio, glm::vec3 eix_rotacio) = 0;
};

#endif // FIGURA_H
