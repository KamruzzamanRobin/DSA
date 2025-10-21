# include<iostream>
# include<vector>
using namespace std;

int recBinatySearch(vector<int>arr, int target, int st, int end) {
    if(st <= end) {
        int mid = st + ((end - st) / 2);

        if(target > arr[mid]) {
            return recBinatySearch(arr, target, st = mid + 1, end);
        } else if(target < arr[mid]) {
            return recBinatySearch(arr, target, st, end = mid - 1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> array1 = {-1,0,3,4,5,9,12};
    int target1 = 9;

    vector<int> array2 = {-1,0,3,5,9,12};
    int target2 = -6;

    cout << recBinatySearch(array1, target1, 0, array1.size() - 1) << "\n";
    cout << recBinatySearch(array2, target2, 0, array2.size() - 1) << "\n";
}