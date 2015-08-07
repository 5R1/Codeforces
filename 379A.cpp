#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int rest = 0, count = 0;
	while(a > 0){
		count += a;
		rest += a % b;
		a = a / b;
		if(rest >= b){
			a += 1;
			rest -= b;
		}
	}
	cout << count;		
	return 0;
}
