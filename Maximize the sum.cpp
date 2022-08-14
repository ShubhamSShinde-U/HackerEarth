#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	
	while(num>0){
		long n,k;

		cin>>n>>k;
		long a[n];

		for(int m=0;m<n;m++){
			cin>>a[m];
		}
		
		//long arr[]=selectionSort(a, n);

		long i, j, min, temp;
   		for (i = 0; i < n - 1; i++) {
     		 min = i;
      		for (j = i + 1; j < n; j++){
      			if (a[j] < a[min]){
      				min = j;
      				temp = a[i];
      				a[i] = a[min];
      				a[min] = temp;
				}
		   }
   		}

		long max_sum=0;
		if(k==0){
			cout<<0<<endl;
		}
		else{
			for(int i=0;i<k;i++){
				max_sum=max_sum+a[n-(i+1)];
			}
			cout<<max_sum<<endl;
		}
		
		
		num--;
		
	}   
	return 0;
}

