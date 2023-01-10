#include<iostream>
using namespace std;

int main(){
	int Sum=0,n;
	
	cout<< "Enter the 'n' num for sum of n square:- ";
	cin>> n;
	
	for(int i=1;i<=n;i++){
		Sum = Sum + i*i;
		if(i<n){
			cout<< i*i<<"+";
		}else{
			cout<< i*i<<"=";
		}
	}
	cout<< Sum;
}
