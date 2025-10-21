# include<iostream>
# include<algorithm>
using namespace std;

// for that problem first sort the array
int main() {
    int array[] = {2,2,1,1,1,2,2};
    int len = sizeof(array)/sizeof(array[0]);
    sort(array, len);

    for(int i = 0; i < len: i++) {
        cout << array[i] << "\n";
    }
}