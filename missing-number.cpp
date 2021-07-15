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

int main(){
	fastIO();

	ll n;
	cin>>n;
	ll act_sum = n*(n+1)/2;
	ll sum = 0;

	for(int i=1;i<n;i++){
		int x;
		cin>>x;
		sum += x;
	}

	cout<<act_sum-sum<<"\n";
	return 0;
}