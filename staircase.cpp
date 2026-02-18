#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sp=n-1,ha=1;
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<sp; j++) {
			cout<<" ";
		}
		for(j=0; j<ha; j++) {
			cout<<"#";
		}
		sp--;
		ha++;
		cout<<endl;
	}
}