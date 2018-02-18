#include <iostream>

#include "glm/glm.hpp"
#include "glm/ext.hpp"

#include "triangle.h"

using namespace std;

int main() {
    glm::vec4
        vertex0(0, 0, 0, 1),
        vertex1(1, 1, 1, 1),
        vertex2(1, 0, 0.5, 1);

    Triangle* triangle = new Triangle(vertex0, vertex1, vertex2);

    cout << glm::to_string(triangle->obteNormal()) << endl;
    cout << triangle->obteAngle(0) << endl;
    cout << triangle->obteAngle(1) << endl;
    cout << triangle->obteAngle(2) << endl;

}
