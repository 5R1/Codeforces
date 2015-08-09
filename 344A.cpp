#include <bits/stdc++.h>

using namespace std;



int main(){  
	int n;
	cin >> n;
	int arr[n];
	int count = 1;
	cin >> arr[0];
	for(int i = 1; i < n; ++i){
		cin >> arr[i];
		if(arr[i - 1] != arr[i]){
			count++;
		}
	}
	cout << count << endl;
    return 0;
}