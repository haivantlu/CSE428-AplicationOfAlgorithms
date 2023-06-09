#include<iostream>
#include<map>
using namespace std;
const int MAX=1000;
int n,m ;
map<pair<int,int>,long long>a;
long long f(int m,int n){
	if(n==0||m==0) return 1;
	if(a[make_pair(m,n)]==0)
	return a[make_pair(m,n)]=f(n-1,m)+f(n,m-1);
	else
	return a[make_pair(m,n)];
}
int main(){
	cout<<"Nhap M = ";cin>>m;
	cout<<"Nhap N = ";cin>>n;
	cout<<"So cach = "<<f(m,n);
	
}
