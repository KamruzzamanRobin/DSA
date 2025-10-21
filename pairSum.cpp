# include<iostream>
# include<vector>
using namespace std;

vector<int>pairSum(vector<int>vec, int target) {
    vector<int>pair_sum;
    for(int i = 0; i < vec.size(); i ++) {
        for(int j = i+1; j < vec.size(); j++) {
            if(vec[i] + vec[j] == target) {
                pair_sum.push_back(i);
                pair_sum.push_back(j);
                return pair_sum;
            }
        }
    }
    return pair_sum;
}

int main() {
    vector<int> vec = {2,7, 11,15};
    int target = 13;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "\n";
    cout << ans[1] << "\n";
}