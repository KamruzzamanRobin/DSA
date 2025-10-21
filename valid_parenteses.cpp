# include<iostream>
# include<stack>
# include<string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                s.push(str[i]);
            } else {
                if(s.size() == 0) {
                    return false;
                }

                if( (s.top() == '(' && str[i] == ')') ||
                    (s.top() == '{' && str[i] == '}') ||
                    (s.top() == '[' && str[i] == ']')) {
                        s.pop();
                } else {
                    return false;
                }
            }
        }
        return s.size() == 0;
    }
};

int main() {
    Solution sta;
    string str = ("[{()}])");

    if(sta.isValid(str)) {
        cout << str << "-> Valid\n";
    } else {
        cout << str << "-> Invalid\n";
    }

    return 0;
}