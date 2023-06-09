#include <iostream>
#include<map>
using namespace std;
int n;
map<int ,long long>a;

int main() {
	cout<<"N = ";
	cin>>n;
	
	if(a[n]!= 0) return a[n];
	
	
	a[0] = 1; a[1] = 1;	
	for(int i = 2; i <= n; i++){
		a[i] = a[i-1] + 2*a[i-2];
	}
	
	cout<<"So phuong an = "<<a[n];	

  
	
}

