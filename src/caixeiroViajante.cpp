#include <bits/stdc++.h>
using namespace std;
#define V 4 

int caixeiroViajante(int graph[][V], int s) {

    vector<int> vertice;
    for (int i = 0; i < V; i++)
        if(i!=s)
            vertice.push_back(i);

    
    int min_Rota = INT_MAX;
    
    do {
        
        int atual_pesoRota = 0;
        
        for (int i = 0; i < vertice.size(); i++) {
            atual_pesoRota += graph[k][vertice[i]];
            k = vertice[i];
        }
        
        atual_pesoRota += graph[k][s];
        min_Rota = min(min_Rota, atual_pesoRota);

    } while (next_permutation(vertice.begin(), vertice.end())); 
    return min_Rota;

}

int main () {
    
    return 0;
}
