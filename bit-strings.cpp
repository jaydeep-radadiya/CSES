#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
using namespace std;
// using namespace __gnu_pbds;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

#define ll long long
#define mod 1000000007
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)

ll solve(int a,int b){
	if(b==0)
		return 1;
	ll temp = solve(a,b/2)%mod;
	if(b%2==0)
		return temp*temp%mod;
	else
		return temp*a*temp%mod;
}

int main(){
	fastIO();

	int n;
	cin>>n;
	ll ans = solve(2,n);
	cout<<ans<<"\n";

	return 0;
}