#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> vec (3, vector<int>(4,0));
    cout << vec.size() << "\n";
}