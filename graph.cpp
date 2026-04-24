#include <bits/stdc++.h>
using namespace std;

int main(){
    //here we start the graph 
    //adjacency matrix
    const int v = 5;
    char verts = {'a', 'b', 'c', 'd', 'e'};
    int vertices[v][v] = {
        {0, 1, 1, 0, 1}, 
        {1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {1, 0, 1, 0, 0}  
    }; 

    //initalize the unvisited array
    queue<bool> visited(v, false) 


    return 0;
}