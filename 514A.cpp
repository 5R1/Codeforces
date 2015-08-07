#include<bits/stdc++.h>

using namespace std;
#define LL long long


#define fo(i, n) for(int i = 0; i < n; i++)

const int N = 100001;
const int mod = (int)(1e9 + 7);

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for(int i = 0; i < n; ++i) {
        int x = s[i] - '0';
        cout << min(x, 9 - x > 0 || i > 0 ? 9 - x : x);
    }
    return 0;
}