#include<iostream>
using namespace std;
// majority em=lement problem

int majorityElement(int array[], int len) {
    int frequency = 0, ans = 0;
    for(int i = 0; i < len; i++) {
        if(frequency == 0) {
            ans = array[i];
        }
        if(ans == array[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }
    return ans;
}

int main() {
    int array[] = {2,2,1,1,1,2,2};
    int len = sizeof(array) / sizeof(array[0]);
    int ans = majorityElement(array, len);
    cout << "Majority element is: " << ans << endl;
    return 0;
}
