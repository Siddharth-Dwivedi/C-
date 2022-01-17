#include<bits/stdc++.h>
using namespace std;
const long long n=1e8;
int main(){
	int t;
	cin>>t;
	int D;
	long long int N;
	cin>>N>>D;
	int ar[n];
	while(t--){
	ar[0]=1;
	for (int i = 1; i <= 10; ++i)
	{
		ar[i]=2*ar[i-1];
	}
	for (int i = 0; i <= 10; ++i)
	{
		cout<<ar[i]<<" ";
	}
	// for (int i = 11; i <=n; ++i)
	// {
	// 	ar[i]=3*ar[i-1];
	// }
	// if (ar[D]>=N)
	// {
	// 	cout<<N;
	// }
	// else if (N>ar[D])
	// {
	// 	cout<<ar[D];
	
	// }
}
}
