#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, ans = 0;
    cin >> n;
    (n & 1)? ans = -(n + 1)/2 : ans = n / 2 ;  
    cout << ans << endl;
    return 0;
}