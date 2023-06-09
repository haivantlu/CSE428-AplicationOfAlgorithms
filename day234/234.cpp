#include<iostream>
using namespace std;
long long a[100000000],n;
long long f[100000000];
long long F(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	if(n==3) return 1;
	if(n==4) return 2;
	if(f[n]==0){
		 f[n]= F(n-2)+F(n-3)+F(n-4);
		 return f[n]%1000000007;
	}
	else
	return f[n]%1000000007;
}
int main(){
	cin>>n;
	a[1]=0;a[2]=1;a[3]=1;a[4]=2;
	for(int i=5;i<=n;i++){
		a[i]=a[i-2]+a[i-3]+a[i-4];
		a[i]=a[i]%1000000007;
	}
	cout<<a[n]<<endl;
	cout<<F(n);
}
