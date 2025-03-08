#include "../include/octahedron.h"

Mesh* Octahedron::createInCenter(Vector* reflectivity, double shininness) {
    Mesh* mesh = new Mesh(shininness, reflectivity);

    mesh->addVertex(new Vertex(new Vector(0, 0, 0)));       // 0
    mesh->addVertex(new Vertex(new Vector(0, 1, 0)));       // 1
    mesh->addVertex(new Vertex(new Vector(-0.5, 0.5, 0)));  // 2
    mesh->addVertex(new Vertex(new Vector(0.5, 0.5, 0)));   // 3
    mesh->addVertex(new Vertex(new Vector(0, 0.5, 0.5)));   // 4
    mesh->addVertex(new Vertex(new Vector(0, 0.5, -0.5)));  // 5

    mesh->addEdge(new Edge(0, 2));  // 0
    mesh->addEdge(new Edge(0, 3));  // 1
    mesh->addEdge(new Edge(0, 4));  // 2
    mesh->addEdge(new Edge(0, 5));  // 3
    mesh->addEdge(new Edge(1, 2));  // 4
    mesh->addEdge(new Edge(1, 3));  // 5
    mesh->addEdge(new Edge(1, 4));  // 6
    mesh->addEdge(new Edge(1, 5));  // 7
    mesh->addEdge(new Edge(2, 4));  // 8
    mesh->addEdge(new Edge(4, 3));  // 9
    mesh->addEdge(new Edge(3, 5));  // 10
    mesh->addEdge(new Edge(5, 2));  // 11

    // Definindo as 8 faces triangulares (ordem anti-horária)
    mesh->addFace(new Face(11, 3, 0));   
    mesh->addFace(new Face(7, 11, 4));  
    mesh->addFace(new Face(10, 7, 5));  
    mesh->addFace(new Face(10, 1, 3));  
    mesh->addFace(new Face(5, 6, 9));   
    mesh->addFace(new Face(9, 2, 1));   
    mesh->addFace(new Face(8, 0, 2));  
    mesh->addFace(new Face(6, 4, 8));  

    return mesh;
}

MeshWithTexture* Octahedron::createWithTexture(Image* texture, double shineness) {
    MeshWithTexture* mesh = new MeshWithTexture(texture, shineness);

    mesh->addVertex(new Vertex(new Vector(0, 0, 0)));       // 0
    mesh->addVertex(new Vertex(new Vector(0, 1, 0)));       // 1
    mesh->addVertex(new Vertex(new Vector(-0.5, 0.5, 0)));  // 2
    mesh->addVertex(new Vertex(new Vector(0.5, 0.5, 0)));   // 3
    mesh->addVertex(new Vertex(new Vector(0, 0.5, 0.5)));   // 4
    mesh->addVertex(new Vertex(new Vector(0, 0.5, -0.5)));  // 5

    mesh->addEdge(new Edge(0, 2));  // 0
    mesh->addEdge(new Edge(0, 3));  // 1
    mesh->addEdge(new Edge(0, 4));  // 2
    mesh->addEdge(new Edge(0, 5));  // 3
    mesh->addEdge(new Edge(1, 2));  // 4
    mesh->addEdge(new Edge(1, 3));  // 5
    mesh->addEdge(new Edge(1, 4));  // 6
    mesh->addEdge(new Edge(1, 5));  // 7
    mesh->addEdge(new Edge(2, 4));  // 8
    mesh->addEdge(new Edge(4, 3));  // 9
    mesh->addEdge(new Edge(3, 5));  // 10
    mesh->addEdge(new Edge(5, 2));  // 11

    // Definindo as 8 faces triangulares (ordem anti-horária)
    mesh->addFace(new Face(11, 3, 0));   
    mesh->addFace(new Face(7, 11, 4));  
    mesh->addFace(new Face(10, 7, 5));  
    mesh->addFace(new Face(10, 1, 3));  
    mesh->addFace(new Face(5, 6, 9));   
    mesh->addFace(new Face(9, 2, 1));   
    mesh->addFace(new Face(8, 0, 2));  
    mesh->addFace(new Face(6, 4, 8));  

    return mesh;
}