# include<iostream>
# include<list>
using namespace std;

int main() {
    list<int> l = {6,7,8,9,10};

    l.emplace_back(1);
    l.push_back(2);
    l.emplace_front(3);
    l.push_front(4);

    for(int val : l) {
        cout << val << " ";
    }
    cout << "\n";
}