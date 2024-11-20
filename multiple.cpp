#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=a;i<=100;i++){
		if(i%a==0){
			cout<<i<<endl;
		}
	}
    return 0;
}
