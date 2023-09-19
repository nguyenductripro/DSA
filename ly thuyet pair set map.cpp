#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define F(i,a,b) for(ll i=a;i>=b;i--)
bool cmp(string a,string b)
{
	return a<b;
}
int main()
{
	freopen("in.inp","r",stdin);
	set
	//set<int>a; khai báo
	// multiset<int>a;
	
	//set la tap hop
	//set: cac phan tu chi xuat hien 1 lan
	//multiset: la set nhung cac phan tu co the lap lai
	//unorderedset: la set nhung khong sap xep
	//cac phan tu duoc sap xep tang dan hoac theo ham cmp
	// set< type, cmp> a;
	//for(auto x:a) cout<<x<<' '; duyet cac phan tu
	//cout<<a.size()<<endl; so luong phan tu cua set  a
	//cout<<a.count(8)<<endl; so lan xuat hien cua 8 trong set 
	//cout<<a.find(3)<<endl;
	//a.insert(b) nhap b vao a
	//a.erase(6); xoa tat ca phan tu co gia tri = 6
	//a.erase(a.find(8)) : xoa 1 phan tu co gia tri =8
	//*a.begin phan tu dau tien, *a.rbegin: cuoi cung
	
	pair,tuple
	/*
	pair<string,int> v;
	cin>>v.first>>v.second;
	cout<<v.first<<' '<<v.second;
	tuple<ll,string,float,int> a;
	cin>>get<0>(a)>>get<1>(a)>>get<2>(a)>>get<3>(a);
	cout<<get<0>(a)<<' '<<get<1>(a)<<' '<<get<2>(a)<<' '<<get<3>(a);
	*/
	map
	map <type1,type2>c;
	~mang danh dau
	type1: kieu du lieu cua cai can danh dau(x)
	type2:danh dau(y)
	c[x]=y
	for(auto x:c) x.first, x.second(x kieu pair)
	c.erase(), count(),: tuong tu set  
}
