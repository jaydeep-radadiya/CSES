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

	string s;
	cin>>s;

	int mx = 1;
	int temp = 1;

	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1])
			temp++;
		else
			temp = 1;
		mx = max(mx,temp);
	}

	cout<<mx<<"\n";
	return 0;
}