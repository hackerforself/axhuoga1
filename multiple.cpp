/*
* I known you want to list a number's multiple in range 100
* if you want to list a number's multiple for other range?
* so you should define other viarable to specify the range,
* so your program will be best
*/

#include<iostream>
using namespace std;
int main(){
    int a;
    int range; //define range
    cin>>a>>range; //read a and range from console
    
    for(int i=a;i<=range;i++){
	if(i%a==0){
		cout<<i<<endl;
	}
}
    return 0;
}
