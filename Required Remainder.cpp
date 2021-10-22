#include<iostream>

using namespace std;

int main(void){

	long long t, i, j = 0;
	cin>>t;
	long long x[50000],y[50000],n[50000],k[50000];
	for(i=0;i<t;i++){
		cin>>x[i]>>y[i]>>n[i];
		
		if(y[i]!=0){
			if(n[i]%x[i]==y[i]){
				k[i] = n[i];
			}
			else if(n[i]%x[i]>y[i]){
				k[i] = n[i]-((n[i]%x[i])-y[i]);
			}
			else{
				k[i] = n[i]-((n[i]%x[i])+((x[i]-y[i])));
			}
		}
		else{
			if(n[i]%x[i]>y[i]){
				k[i] = n[i]-((n[i]%x[i]));
			}
			else if(n[i]%x[i]==y[i]){
				k[i] = n[i];
			}
			else{
				k[i] = n[i]-(x[i]-1);
			}
		}
	}
	
	for(i=0;i<t;i++){
		if(k[i]<0){
			cout<<0<<endl;
		}
		else{
			cout<<k[i]<<endl;
		}
	}
	return 0;
}
