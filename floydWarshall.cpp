#include <iostream>
using namespace std;
#define v 5
#define INF 999

void floydWarshall(int graph[v][v], int start, int destination) {
    int dist[v][v];
    int next[v][v];

    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            if(i ==j) {
                dist[i][j] = 0;
                next[i][j] = -1;
            } else if(graph[i][j] == 0) {
                dist[i][j] = INF;
                next[i][j] = -1;
            } else {
                dist[i][j] = graph[i][j];
                next[i][j] = j;
            }
        }
    }

    for(int k = 0; k < v; k++) {
        for(int i = 0; i < v; i++) {
            for(int j = 0; j < v; j++) {
                if(dist[i][k] != INF && dist[k][j] != INF) {
                    if(dist[i][j] > dist[i][k] + dist[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }
    }

    cout << "All-Pairs Shortest Distance Matrix:\n";
    cout << "        A       B       C       D       E\n";
    cout << "\n";
    char labels[] = {'A', 'B', 'C', 'D', 'E'};
    for(int i = 0; i < v; i++) {
        cout << labels[i] << "\t";
        for(int j = 0; j < v; j++) {
            if(dist[i][j] == INF) {
                cout << 0 << "\t";
            } else {
                cout << dist[i][j] << "\t";
            }
        }
        cout << "\n";
    }

    //Print path form A to D;
    int u = start;
    if(dist[u][destination] == INF) {
        cout << "No path exists\n";
    } else {
        // Reconstruct path
        cout << (char)('A' + u);
        while(u != destination) {
            u = next[u][destination];
            cout << " -> " << (char)('A' + u);
        }
        cout << "\nDistance: " << dist[start][destination] << "\n";
    }
}

int main() {
    int graph[v][v] = {
        {0,4,0,0,0}, 
        {0,0,3,3,0},
        {2,0,0,0,2},
        {0,0,0,0,0},
        {0,5,0,2,0}
    };
    int start = 1;
    int destination = 4;

    floydWarshall(graph, start, destination);

    return 0;
}