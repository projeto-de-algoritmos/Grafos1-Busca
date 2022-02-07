#include <bits/stdc++.h>
using namespace std;
#define V 5 // define o número de vértices para o grafo

int caixeiroViajante(int graph[][V], int s)
{

    // armazena todos os vértices além do vértice de origem no vetor vertice
    vector<int> vertice;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertice.push_back(i);

    // armazena o peso mínimo no ciclo Hamiltoniano
    int min_Rota = INT_MAX;
    do
    {

        // armazena o peso da rota atual (custo)
        int atual_pesoRota = 0;
        int k = s;

        // calcula o peso da rota atual
        for (int i = 0; i < vertice.size(); i++)
        {
            atual_pesoRota += graph[k][vertice[i]];
            k = vertice[i];
        }
        atual_pesoRota += graph[k][s];
        
        // atualiza o mínimo
        min_Rota = min(min_Rota, atual_pesoRota);
        
        // mostra a distância de todas as rotas possíveis
        cout << atual_pesoRota << endl;

    } while (next_permutation(vertice.begin(), vertice.end()));
    return min_Rota;
}

int main()
{

    // matriz representando o grafo
    int graph[][V] = {{0, 2, 3, 2, 3},
                      {2, 0, 3, 4, 1},
                      {3, 3, 0, 2, 4},
                      {2, 4, 2, 0, 5},
                      {3, 1, 4, 5, 0}};

    int s = 0;

    cout << "A menor rota para percorrer as cidades 1-2-3-4-5-1 eh: " << caixeiroViajante(graph, s) << "km" << endl;
    cout << "Caminhos propostos: " << "1-5-2-3-4-1 ou 1-4-3-2-5-1 ou 1-4-3-5-2-1 ou 1-2-5-3-4-1" << endl;

    return 0;
}
