
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,s,k,p,q;
	int ans=0;
	cin>>n>>s>>k;
	for(int i=0;i<n;i++){
		cin>>p>>q;
		ans+=(p*q);
	}
	if(ans<s)ans+=k;
	
	cout<<ans<<endl;
	return 0;
}