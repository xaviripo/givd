#include "glm/glm.hpp"
#include "glm/gtx/norm.hpp"

#include "triangle.h"

Triangle::Triangle(glm::vec4 vertex0, glm::vec4 vertex1, glm::vec4 vertex2) {
    vertexs[0] = vertex0;
    vertexs[1] = vertex1;
    vertexs[2] = vertex2;
}

glm::vec4 Triangle::obteNormal() {
    glm::vec4
        vec0 = vertexs[1] - vertexs[0],
        vec1 = vertexs[2] - vertexs[0];

    glm::vec3
        vec0_small = glm::vec3(vec0[0], vec0[1], vec0[2]),
        vec1_small = glm::vec3(vec1[0], vec1[1], vec1[2]);

    glm::vec3 res = glm::cross(vec0_small, vec1_small);

    return glm::normalize(glm::vec4(res[0], res[1], res[2], 1));
}

float Triangle::obteAngle(int id_vertex) {
    glm::vec4
        vec0 = vertexs[(1+id_vertex) % 3] - vertexs[id_vertex % 3],
        vec1 = vertexs[(2+id_vertex) % 3] - vertexs[id_vertex % 3];

    glm::vec3
        vec0_small = glm::vec3(vec0[0], vec0[1], vec0[2]),
        vec1_small = glm::vec3(vec1[0], vec1[1], vec1[2]);

    return glm::acos(
        glm::dot(
            vec0_small, vec1_small
        )
        / glm::l2Norm(vec0_small)
        / glm::l2Norm(vec1_small)
    );
}
