#include<bits/stdc++.h>
using namespace std;
int main(){
	int n[10];
	int m=0;
	for(int i=0;i<=9;i++){
		cin>>n[i];
	}
	for(int b=0;b<=9;b++){
		if(m>n[b]){
			m=n[b];
		}
	}
	cout<<m<<endl;
	return 0;
	
}
