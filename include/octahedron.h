#pragma once

#include "./CG.h"
#include "./mesh.h"
#include "./meshWithTexture.h"

class Octahedron {
    public:
        static Mesh* createInCenter(Vector* reflectivity, double shininness);
        static MeshWithTexture* createWithTexture(Image* texture, double shininness);
};