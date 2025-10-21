# include<iostream>
# include<vector>
# include<deque>
# include<stack>
# include<queue>
# include<map>
# include<string>
# include<unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;

    m.emplace("TV", 100);
    m.emplace("phone", 100);
    m.emplace("wller", 100);
    m.emplace("bus", 100);

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
}