# include<iostream>
# include<vector>
using namespace std;

int main() {
    vector<int> array = {1,2,3,4,5};

    vector<int>:: reverse_iterator it;
    for(auto it = array.begin(); it != array.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}