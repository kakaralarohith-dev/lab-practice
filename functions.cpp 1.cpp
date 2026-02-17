#include<iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}

int subraction(int a,int b){
	return a - b;
}
int multiply(int a, int b)
{
	return a*b;
}
float division(int a,int b)
{
	if(b !=0){
		return (float)a/b;
	}
	else {
		cout <<"Error Divison by Zero:";
		return 0;
	}
}
int Modulus(int a,int b){
	return a % b;
}

   int main(){
   	int num1,num2;
   	char opreation;
   	cout<<"Enter two numbers:";
   	cin >> num1 >>num2;
	   
	   cout<<"Enter an opreator(+,-,*,/,%):";
	   cin >>opreation;
	   
	   switch(opreation){
	   	case '+':
	   		cout << "result:" <<add(num1 , num2);
	   	    break;
	   	case '-':
	   		cout << "result:" << subraction(num1, num2);
	   		break;
	   	case '*':
	   		cout << "result:" <<multiply(num1, num2);
	   		break;
	   	case '/':
	   		cout << "result:" <<division(num1, num2);
	   		break;
	   	case '%':
	   		cout << "result:" << Modulus(num1, num2);
	   		break;
	  	default:
	  		cout<< "Error! Invalid opreator";
	  		break;
	   		
	   } 
   }
