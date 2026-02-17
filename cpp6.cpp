#include<iostream>
using namespace std;
 
 
 int main(){
 	
 	int year;
 	
 	cout<<"enter a year:";
 	cin>>year;
 	
 	if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)) {
 		cout<< year<<"it is an leap year" << endl;
	 }
	 else{
	 	cout<<year<<"it is not a leap year."<<endl;
	 	
	 }
	 return 0;
 }
