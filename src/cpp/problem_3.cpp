#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;

    vector<int> v;

    cin >> a >> b;
    v.push_back(b);
    while (a < b) {
        if (b % 2 == 0) {
            b /= 2;
            v.push_back(b);

        } else if (b % 10 == 1) {
            b /= 10;
            v.push_back(b);
        } else {
            break;
        }
    }


    if (a == b) {
        cout << "YES";
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
    } else {
        cout << "NO";
    }

}
