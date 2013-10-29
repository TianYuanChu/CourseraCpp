//
//  Graph.h
//  asst2_dijkstra
//
//  Created by Ryan Chu on 10/26/2013.
//  Copyright (c) 2013 Ryan Chu. All rights reserved.
//

#ifndef __asst2_dijkstra__Graph__
#define __asst2_dijkstra__Graph__

#include <iostream>
#include <vector>

#include "Node.h"

#endif

class Graph
{
private:
    std::vector<Node> nodes;
    Graph(){};
public:

    Graph(double density){};
    
    ~Graph(){};
    
    //returns the number of vertices in the graph
    int V(Graph G);
    
    //returns the number of edges in the graph
    int E(Graph G);
    
    //tests whether there is an edge from node x to node y.
    bool adjacent(Graph G, Node x, Node y);
    
    //lists all nodes y such that there is an edge from x to y
    std::vector<Node> neighbors(Graph G, Node x);
    
    //adds to G the edge from x to y, if it is not there.
    void addEdge (Graph G, Node x, Node y);
    
    //removes the edge from x to y, if it is there.
    void deleteEdge (Graph G, Node x, Node y);
    
    //returns the value associated with the node x.
    double get_node_value (Graph G, Node x);
    
    //sets the value associated with the node x to a.
    void set_node_value(Graph G, Node x, double a);
    
    //returns the value associated to the edge (x,y).
    double get_edge_value(Graph G, Node x, Node y);
    
    //sets the value associated to the edge (x,y) to v.
    void set_edge_value (Graph G, Node x, Node y, double v);
    
};