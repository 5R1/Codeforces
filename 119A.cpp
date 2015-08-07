#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y){
	
	return (x == 0)? y : gcd(y % x, x);
}

int main(){
	int a, b, n;
	cin >> a >> b >> n;
	int count = 0;
	while(n >= 0){
		count++;
		n -= gcd((count & 1) ? a: b, n);
	}

	if(count & 1) cout << 1; else cout << 0;

	return 0;
}
