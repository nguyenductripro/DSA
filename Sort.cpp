#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
#define F(i,a,b) for(ll i=a;i>=b;i--)
#define l() length()
ll n,a[100000];
void QuickSort(ll a[],ll x,ll y)
{
	if(x>=y) return;
	ll pivot = y;
	ll j=x-1;
	f(i,x,y-1)
	{
		if(a[i]<a[y])
		{
			j++;
			swap(a[i],a[j]);
		}
	}
	j++;
	swap(a[j],a[y]);
	QuickSort(x,j-1);
	QuickSort(j+1,y);
}
void InterchangeSort(ll a[],ll x,ll y )
{
	f(i,x,y-1)
	{
		f(j,i+1,y)
		{
			if(a[j]<a[i]) swap (a[i],a[j]);
		}
	}
}
int main()
{
	
}
