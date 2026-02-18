#include<iostream>
using namespace std;
int main() {
	int a[3],b[3];
	int i;
	for(i=0; i<3; i++) {
		cin>>a[i];
	}
	for(i=0; i<3; i++) {
		cin>>b[i];
	}
	int alice=0;
	int bob=0;
	for (i=0; i<3; i++) {
		if (a[i]>b[i])
			alice++;
		else if(b[i]>a[i])
			bob++;
		else
			continue;
	}
	cout<<alice<<" "<<bob<<endl;
}