#include "../include/prism.h"

Mesh* Prism::createInCenter(Vector* reflectivity, double shininness) {
    Mesh* mesh = new Mesh(shininness, reflectivity);

    mesh->addVertex(new Vertex(new Vector(0, 0, 0)));   // 0
    mesh->addVertex(new Vertex(new Vector(-1, 0, -1))); // 1  
    mesh->addVertex(new Vertex(new Vector(0, 0, -1)));  // 2
    mesh->addVertex(new Vertex(new Vector(0, 1, 0)));   // 3
    mesh->addVertex(new Vertex(new Vector(-1, 1, -1))); // 4
    mesh->addVertex(new Vertex(new Vector(0, 1, -1)));  // 5

    mesh->addEdge(new Edge(0, 1));  // 0: (0, 1)
    mesh->addEdge(new Edge(1, 2));  // 1: (1, 2)
    mesh->addEdge(new Edge(2, 0));  // 2: (2, 0)
    mesh->addEdge(new Edge(3, 4));  // 3: (3, 4)
    mesh->addEdge(new Edge(4, 5));  // 4: (4, 5)
    mesh->addEdge(new Edge(5, 3));  // 5: (5, 3)
    mesh->addEdge(new Edge(0, 3));  // 6: (0, 3)
    mesh->addEdge(new Edge(1, 4));  // 7: (1, 4)
    mesh->addEdge(new Edge(2, 5));  // 8: (2, 5)
    mesh->addEdge(new Edge(1, 3));  // 9: (1, 3)
    mesh->addEdge(new Edge(2, 4));  // 10: (2, 4)
    mesh->addEdge(new Edge(0, 5));  // 11: (0, 5)

    mesh->addFace(new Face(2, 1, 0));
    mesh->addFace(new Face(3, 4, 5));
    mesh->addFace(new Face(0, 9, 3));
    mesh->addFace(new Face(3, 9, 7));
    mesh->addFace(new Face(7, 1, 10));
    mesh->addFace(new Face(4, 10, 8)); 
    mesh->addFace(new Face(11, 8, 2));
    mesh->addFace(new Face(5, 11, 6));  

    return mesh;
}

MeshWithTexture* Prism::createWithTexture(Image* texture, double shineness) {
    MeshWithTexture* mesh = new MeshWithTexture(texture, shineness);

    mesh->addVertex(new Vertex(new Vector(0, 0, 0)));   // 0
    mesh->addVertex(new Vertex(new Vector(-1, 0, -1))); // 1  
    mesh->addVertex(new Vertex(new Vector(0, 0, -1)));  // 2
    mesh->addVertex(new Vertex(new Vector(0, 1, 0)));   // 3
    mesh->addVertex(new Vertex(new Vector(-1, 1, -1))); // 4
    mesh->addVertex(new Vertex(new Vector(0, 1, -1)));  // 5

    mesh->addEdge(new Edge(0, 1));  // 0: (0, 1)
    mesh->addEdge(new Edge(1, 2));  // 1: (1, 2)
    mesh->addEdge(new Edge(2, 0));  // 2: (2, 0)
    mesh->addEdge(new Edge(3, 4));  // 3: (3, 4)
    mesh->addEdge(new Edge(4, 5));  // 4: (4, 5)
    mesh->addEdge(new Edge(5, 3));  // 5: (5, 3)
    mesh->addEdge(new Edge(0, 3));  // 6: (0, 3)
    mesh->addEdge(new Edge(1, 4));  // 7: (1, 4)
    mesh->addEdge(new Edge(2, 5));  // 8: (2, 5)
    mesh->addEdge(new Edge(1, 3));  // 9: (1, 3)
    mesh->addEdge(new Edge(2, 4));  // 10: (2, 4)
    mesh->addEdge(new Edge(0, 5));  // 11: (0, 5)

    mesh->addFace(new Face(2, 1, 0));
    mesh->addFace(new Face(3, 4, 5));
    mesh->addFace(new Face(0, 9, 3));
    mesh->addFace(new Face(3, 9, 7));
    mesh->addFace(new Face(7, 1, 10));
    mesh->addFace(new Face(4, 10, 8)); 
    mesh->addFace(new Face(11, 8, 2));
    mesh->addFace(new Face(5, 11, 6));  

    return mesh;
}

