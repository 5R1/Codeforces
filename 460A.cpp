#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int count = a;
	count += (int)((a - 1)/(b - 1));
	cout << count;		
	return 0;
}
