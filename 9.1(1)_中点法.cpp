#include<bits/stdc++.h>
using namespace std;
double y_p(double x,double y_nm,double y_n,double h)
{
return y_nm+2*h*(1-y_n);
}
int main(){
	double ans=0;
	double x=0,y[2]={0,0.090909},h=0.1;
	cout<<"x="<<x<<", y="<<y[0]<<endl;
	x+=h;
	cout<<"x="<<x<<", y="<<y[1]<<endl;
	double temy;
	for(;x<1.0-h;x+=h){
		temy=y[1];
		y[1]=y_p(x,y[0],y[1],h);
		y[0]=temy;
		cout<<"x="<<x+h<<", y="<<y[1]<<endl;
		}
}
