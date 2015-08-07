#include <bits/stdc++.h>

using namespace std;

bool isnotprime(int x)
{
  if (x < 2) return true;
  for(int i=2; i<= sqrt(x); i++) {
    if ((x%i) == 0) return true;
  }
  return false;
}
int main(){
	int n;
	cin >> n;
	for(int i = 2; i < n; i++){
		if(isnotprime(n - i) && isnotprime(i)){
			cout << i << " " << (n - i);
			break;
		}
	}
	return 0;
}
