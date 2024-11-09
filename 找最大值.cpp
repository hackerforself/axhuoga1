#include <bits/stdc++.h>
using namespace std;
int main(){
	int n[10];
	int max=0;
	for(int i=0;i<10;i++){
		cin>>n[i];
	}
	for(int j=9;j>=0;j--){
		if(max<n[j]){
			max=n[j];
		}
	}
	cout<<max<<endl;
	return 0;
}
