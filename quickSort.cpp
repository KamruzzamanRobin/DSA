#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int> &array, int start, int end) {
    int idx = start - 1, pivot = array[end];

    for(int i = start; i < end; i++) {
        if(array[i] <= pivot) {
            idx++;
            swap(array[i],array[idx]);
        }
    }
    idx++;
    swap(array[end], array[idx]);
    return idx;
}

void quickSort(vector<int> &array, int start, int end) {
    if(start < end) {
        int pivIdx = partition(array, start, end);

        quickSort(array, start, pivIdx - 1);
        quickSort(array, pivIdx + 1, end);
    }
}

int main() {
    vector<int> array = {12,31,35,8,32,17};
    quickSort(array, 0, array.size() - 1);

    for(int val : array) {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}