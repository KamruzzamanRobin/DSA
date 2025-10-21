# include<iostream>
# include<string>
using namespace std;

class A {
public:
    int x;

    void incX() {
        x = x + 1;
    }
};

int main() {
    A obj;
    obj.x = 0;
    cout << obj.x << "\n";
    obj.incX();
    cout << obj.x << "\n";
}