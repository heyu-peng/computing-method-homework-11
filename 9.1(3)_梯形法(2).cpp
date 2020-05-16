#include<bits/stdc++.h>
using namespace std;
double y_p1(double x,double y,double h)
{
return (-pow(8*h*h*h*y*y + 4*h*h*x*x + 4*h*h*x*y*y + h*h*pow(y,4) - 16*h*h*y*y - 24*h*x*y*y + 4*h*pow(y,4) + 4*pow(y,4),0.5) - 2*h*x + h*y*y + 2*y*y)/(2*(2*y - h*y));
}
int main(){
	double x=0,y=1,h=0.1;
	cout<<"x="<<x<<", y="<<y<<endl;
	for(;x<1.0-h;x+=h)
		y=y_p1(x,y,h),cout<<"x="<<x+h<<", y="<<y<<endl;
}
