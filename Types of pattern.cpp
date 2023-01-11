#include<iostream>
using namespace std;

int main(){
	
//	Draw Rectangle Pattern.
	
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
	
//	Draw Hollow Rectangle Pattern
	
//	int row,col;
	cout<<"To Draw Hollow Rectangle Pattern\n";
	cout<<"Enter no. of row:";
	cin>>row;
	cout<<"Enter no. of Columns:";
	cin>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i==1 || i==row){
			cout<<"*";
		} else if(j==1 || j==col){
			cout<<"*";
		}else{
			cout<<" ";
		}	
		}
		cout<<"\n";	
	}	
	
//	Draw Inverted Half Pyramid Pattern
	
	int n;
	cout<<"To Draw Inverted Half Pyramid Pattern\n";
	cout<<"Enter no. of row:";
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}


