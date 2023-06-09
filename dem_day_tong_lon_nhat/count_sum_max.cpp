//dem day co tong lon nhat 

#include <iostream>
using namespace std;
const int MAX = 1000;
int s[MAX][MAX],a[MAX],b[MAX];
int  n,m, dem = 0;
long long sinh(int m,int n) {
if(m==0||n==0) return 0;
if(s[m][n]==-1){
	if(a[m]==b[n]){
			s[m][n]=sinh(m-1,n-1)+a[m];
	} 
	else
	s[m][n]=max(sinh(m-1,n),sinh(m,n-1));
}
return s[m][n];
}

int main() {
	for(int i=0;i<1000;i++)
	  for(int j=0;j<1000;j++)
	     s[i][j]=-1;
	cout<<"Nhap m = ";cin>>m;
	for(int i=1;i<=m;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	cout<<"Nhap n = ";cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"b["<<i<<"] = ";cin>>b[i];
	}
//	sinh(m,n);
	cout<<"Day con co tong lon nhat = "<<sinh(m,n);
	return 0;
}
