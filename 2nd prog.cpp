#include<iostream>
using namespace std;

int getMin(int arry[],int n){
	int min=20,i;
	
	for(i=0;i<=n;i++){
		if(min > arry[i]){
			min = arry[i];
		}
	}
	return arry[i];
}
void Adding(int arry[],int n){
	int i,Sum=0;
	for(i=0;i<=n;i++){
		Sum = Sum + arry[i];
	}
	cout<< "\nSum of all elements is:- "<<Sum;
}
void LinearSearch(int arry[],int n){
	int i,ele;
	cout<< "\nEnter the element have to search:- ";
	cin>>ele;
	
	for(i=0;i<=n-1;i++){
	    if(ele == arry[i]){
			cout<< " At place : "<< i+1;
		}
		else{
			cout<<"null";
			break;
		}
	} 
}
int main(){
	int n;
	cout<< "Enter the number of element you want to- ";
	cin>>n;
	int arry[n],i,j;
	cout<< "Enter the elements values:\n";
	for(i=0;i<=n-1;i++){
		cin>> arry[i];
	}
	cout<< "Display enter elements";
	for(j=0;j<=n-1;j++){
		cout<< " "<< arry[j];
	}
	LinearSearch(arry,n);
}


