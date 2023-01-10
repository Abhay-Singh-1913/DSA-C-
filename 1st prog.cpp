#include<iostream>
using namespace std;
int main (){
	int choice;
	float num1,num2;
	cout<<"Enter the two num you had:\n";
	cin >>num1;
	cin >>num2;
	cout<< "\nEnter a choice here 1.Add 2.sub 3.muti 4.div:- ";
	cin>> choice;
	switch(choice){	
  case 1:cout<< "\nAdd of numbres:";
	cout<< num1+num2;
	break;
  case 2:cout<< "\nSub of numbres:";
	cout<< num1-num2;
	break;
  case 3:cout<< "\nMulti of numbres:";
	cout<< num1*num2;
	break;
  case 4:cout<< "\nDiv of numbres:";
	cout<< num1/num2;
	break;
 }
}

