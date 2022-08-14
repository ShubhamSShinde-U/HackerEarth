#include <iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	while(num>0){
		int n,k;
		cin>>n>>k;
		int a[n],sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum/n<=k){
			cout<<0;
		}
		else{
			cout<<sum/(k+1) - n + 1;
		}
		num--;
		cout<<endl;
	}
	return 0;
}