#include<iostream>
using namespace std;

int main(){
	int row,col;
	cout<<"To Draw Rectangle Pattern\n";
	cout<<"Enter no. of row:";
	cin>>row;
	cout<<"Enter no. of Columns:";
	cin>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			cout<<"*";
		}
		cout<<"\n";
	}	
}


