#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1, str2;
	cin >> str1;
	cin >> str2;
	string temp = string ( str1.rbegin(), str1.rend() );
	if(str2 == temp){
		cout << "YES";
	}	
	else cout << "NO";
	return 0;
}
