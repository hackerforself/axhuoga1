#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	printf("请输入两个数:\n");
	for(;;){
		cin>>a>>b;
		if(a>b){
			printf("%d大于%d\n",a,b);
		}
		else if(a==b){
			printf("%d等于%d\n",a,b); 
		}
		else{
			printf("%d小于%d\n",a,b);
		}
		
	}
	return 0;
}
