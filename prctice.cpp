# include<iostream>
# include<vector> 
using namespace std;

int main() {
    int array[] = {1,2,3,4};
    int maxSum = 0;

    for(int i = 0; i < 4; i++) {
        int currentSum = 0;
        for(int j = i; j < 4; j++) {
                currentSum += array[j];
                maxSum = max(currentSum, maxSum);
        }
        cout << "\n";
    }
    cout << maxSum << "\n";
}