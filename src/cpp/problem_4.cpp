#include <bits/stdc++.h>

using namespace std;
int main() {
 int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        s += t;
    }
    char c[s.size() + 1];
    strcpy(c, s.c_str());
    sort(c, c + s.size());
    char *p = unique(c, c + s.size());
    *p = '\0';
    cout << c << endl;




}
