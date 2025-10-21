// using tow pointer approach for a sorted array
# include<iostream>
# include<vector>
using namespace std;

vector<int>pairSum(vector<int>vec, int target) {
    vector<int> ans;
    int n = vec.size();
    int i = 0, j = n-1;
    while(i < j) {
        int sum = vec[i] + vec[j];
        if(sum < target) {
            i++;
        } else if(sum > target) {
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 26;

    vector<int> ans = pairSum(vec, target);
    for(int x : ans) {
        cout << x << "\n";
    }
}