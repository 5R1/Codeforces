#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	set<char> myset;
	for(int i = 0; i < str.length(); i++){
		myset.insert(str[i]);
	}

	if(myset.size() % 2 == 0){
		 cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}

    return 0;
}