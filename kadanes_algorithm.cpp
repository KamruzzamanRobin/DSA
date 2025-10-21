# include <iostream>
# include<vector>
using namespace std;

int main() {
    int n = 5;
    int array[5] = {1,2,3,4};
    int currentSum = 0, maxSum = 0;

    for(int i = 0; i < n; i++) {
        currentSum += array[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "Maximum subarray sum: " << maxSum << "\n";
    return 0;
}