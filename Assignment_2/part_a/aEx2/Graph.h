// Graph ADT interface ... COMP9024 17s2
//This program is copy from the class lecture

#include <stdbool.h>



typedef struct GraphRep *Graph;

typedef struct GraphRep {
    int  **edges;   // adjacency matrix
    int    nV;      // #vertices
    int    nE;      // #edges
} GraphRep;


// vertices are ints
typedef int Vertex;

// edges are pairs of vertices (end-points)
typedef struct Edge {
    Vertex v;
    Vertex w;
} Edge;

Graph newGraph(int);
void  insertEdge(Graph, Edge);
void  removeEdge(Graph, Edge);
bool  adjacent(Graph, Vertex, Vertex);
void  showGraph(Graph);
void  freeGraph(Graph);
