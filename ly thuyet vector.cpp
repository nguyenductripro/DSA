#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
#define F(i,a,b) for(ll i=a;i>=b;i--)
#define l() length()
int main()
{
	vector <ll> a(15,7);
	
	a.push_back(15);
	a.push_back(25);
	a.push_back(25);
	a.pop_back();
	cout<<a.size()<<endl;
	a.insert( a.begin()+3 ,3 );
	ll x=12;
	auto t=find(a.begin(),a.end(),x);
	cout<<a.size()<<endl;
	a.erase(a.end()-15,a.end()-3);
	sort(a.begin(),a.end());
	for(auto x:a) cout<<x<<' ';
	
}
