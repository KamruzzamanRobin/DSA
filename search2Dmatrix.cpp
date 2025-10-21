# include<iostream>
# include<vector>
using namespace std;

bool searchInRow(vector<vector<int>>& array, int target, int row) {
    int n = array[0].size();
    int st = 0, end = n -1;

    while(st <= end) {
        int mid = st + (end - st)/2;
        if(target == array[row][mid]) {
            return true;
        } else if(target > array[row][mid]) {
            st = mid + 1;
        } else {
            end = mid -1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> array = {{1,3,5,7}, {10,11,16,20}, {23,30, 38,60}};
    int target = 37;
    bool found = false;

    int m = array.size(), n = array[0].size();
    int startRow = 0, endRow = m - 1;

    while(startRow <= endRow) {
        int midRow = startRow + (endRow -startRow)/2;

        if(target >= array[midRow][0] && target <= array[midRow][n-1]) {
            // found the row => BS on this row
            found = searchInRow(array, target, midRow);
            break;
        } else if(target >= array[midRow][n - 1 ]) {
            // down => right
            startRow = midRow + 1;
        } else {
            // up => left
            endRow = midRow -1;
        }
    }

    cout << (found ? "Found\n" : "Not Found\n");
}