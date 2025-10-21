#include <iostream>
#include <queue>
using namespace std;

class Stack {
public:
    queue<int> q1;
    queue<int> q2;

    void push(int val) {
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(val);

        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top element: " << st.top() << endl;

    cout << "Top element: " << st.top() << endl;

    while(!st.empty()) {
        cout << "Popped: " << st.pop() << "\n";
    }
    cout << "\n";

    return 0;
}