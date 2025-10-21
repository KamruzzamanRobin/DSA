# include<iostream>
using namespace std;

int diagonalSum(int array[][3], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += array[i][i];
        if(i != n-i-1) {
            sum += array[i][n-i-1];
        }
    }
    return sum;
}

int main() {
    int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n = 3;

    cout << diagonalSum(array, n) << "\n";
}