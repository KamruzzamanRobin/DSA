# include<iostream>
# include<vector>
using namespace std;

int main() {
    vector<vector<int>> array = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}};
    int m = array.size(), n = array[0].size();
    int target = 21;
    bool targetVal = false; 

    int row = 0, col = n -1;

    while(row < m && col >= 0) {
        if(target == array[row][col]) {
            targetVal = true;
            break;
        } else if(target < array[row][col]) {
            col--;
        } else {
            row++;
        }
    }
    
    cout << (targetVal ? "Exist" : "Not Exist") << "\n";
}