#include <bits/stdc++.h>

using namespace std;



int main(){
	int k, l, m, n, d, a[100005], cnt;
    memset(a, 0, sizeof(a));
    cnt=0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    for(int i=k-1; i<d; i+=k) a[i]++;
    for(int i=l-1; i<d; i+=l) a[i]++;
    for(int i=m-1; i<d; i+=m) a[i]++;
    for(int i=n-1; i<d; i+=n) a[i]++;
    for(int i=0; i<d; i++) if(a[i]) cnt++;
    printf("%d", cnt);
	return 0;
}
