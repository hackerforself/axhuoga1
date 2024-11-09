#include<bits/stdc++.h>
using namespace std;
int main(){
	int n[10];
	int x=0;
	for(int i=0;i<=9;i++){
		cin>>n[i];
	}
	for(int j=0;j<=9;j++){
		x=x+n[j];	
	}
	cout<<x<<endl;
	return 0;
}
