#ifndef FIGURA_H
#define FIGURA_H

#include "glm/glm.hpp"

class Figura
{
public:
    virtual glm::vec4 obteNormal() = 0;
};

#endif // FIGURA_H
