#include<ostream>
using namespace std;
float ftoc(float f){
	return (f - 32)*5.0/9.0;
}
float ctof(float c){
	return (c * 9.0 /5.0) + 32;
}
int main() {
	float f, c;
	cout << "Enter temperature is fahrenheit:";
	cin >> f;
	cout <<"Temperature is Centigrade:" << ftoc(f) <<endl;
	
	cout <<"Enter temperature is Centigrade:";
	cin >>c;
	cout <<"Temperature in Fahrenheit:" <<ctof(c)<<endl;
	return 0;
}
