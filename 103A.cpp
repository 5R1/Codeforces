#include <bits/stdc++.h>

using namespace std;



int main()
{  
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int min = arr[0], max = arr[0], minpos = 0, maxpos = 0;
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
            maxpos = i;
        }
        if(arr[i] <= min){
            min = arr[i];
            minpos = i;
        }
    }
    // cout << max << min << maxpos << minpos << endl;
    int res = maxpos + (n - 1 - minpos);
    if(minpos < maxpos) res--;
    cout << res << endl;
    return 0;
}