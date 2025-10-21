#include <iostream>
#include <iomanip>
using namespace std;

#define v 4

void warshall(int graph[v][v]) {
    int dist[v][v];

    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    for(int k = 0; k < v; k++) {
        for(int i = 0; i < v; i++) {
            for(int j = 0; j < v; j++) {
                dist[i][j] = dist[i][j] || (dist[i][k] && dist[k][j]);
            }
        }
    }

    cout << "Shortest distances between every pair of vertices:\n";
    cout << "  X Y Z W\n";
    char labels[] = {'x', 'y', 'z', 'w'};
    for(int i = 0; i < v; i++) {
        cout << labels[i] << " ";
        for(int j = 0; j < v; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
}


int main() {
    int graph[v][v] = {
        {0,0,0,1},
        {1,0,1,1},
        {1,0,0,1},
        {0,0,1,0}
    };

    warshall(graph);
    return 0;
}