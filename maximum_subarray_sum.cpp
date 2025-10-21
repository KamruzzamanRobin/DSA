# include <iostream>
#include<vector>
using namespace std;

int main() {
    int n = 5;
    int array[5] = {1,2,3,4,5};
    int maxSum  = 0;

    for(int st = 0; st < n; st++) {
        int currentSum = 0;
        for(int end = st; end < n; end++) {
            currentSum += array[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Maximum subarray sum : " << maxSum << "\n";
}