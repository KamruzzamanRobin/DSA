# include<iostream>
using namespace std;

void bubbleSort(int array[], int n) {
    for(int i = 0; i < n-1; i++) {
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                swap(array[j], array[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }
}

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int array[] = {4,1,5,2,3};
    int n = 5;
    bubbleSort(array, n);
    printArray(array,n);
    cout << "\n";
}