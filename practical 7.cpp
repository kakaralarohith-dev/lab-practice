#include<iostream>
using namespace std;

double area(double radius)
{
	return 3.14*radius*radius;
}
double area(double length,double width)
{
	return length*width;
}
double area(double base,double height,bool isTriangle)
{
	return 0.5*base*height;
}
int main()
{
	double radius,length,width,base,height;
	
	cout <<"Enter the radius of the Circle:";
	cin>>radius;
	cout<<"Area of circle:"<<area(radius)<<endl;
	
	cout <<"Enter the length and width of the rectangle:";
	cin >> length >> width;
	cout <<"Area of rectangle:"<<area(length,width)<<endl;
	
	cout <<"Enter the bade and height of the triangle:";
	cin >> base >> height;
	cout<<"Area of triangle:"<<area(base,height,true)<<endl;
	return 0;
}
