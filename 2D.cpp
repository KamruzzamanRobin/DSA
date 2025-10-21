#include <iostream>
using namespace std;


int diagonalSum(int array[]d[3], int n) {
    int sum = 0; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                sum += array[i][j];
            } else if(j == n -i -1) {
                sum += array[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n = 3;

    cout << diagonalSum(array, n) <<"\n";

    return 0;
}