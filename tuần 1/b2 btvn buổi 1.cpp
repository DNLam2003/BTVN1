#include<iostream>
using namespace std;
int main(){
	int n;
	float S;
	cout<<"nhap so kw tieu thu: ";
	cin>>n;
	if(n <= 100)
		S = n * 2000;
	else if(n <= 200)
	S = n * 2500;
	else if(n <= 300)
	S = n * 3000;
	else 
	S = n * 5000;
	cout<<"tong tien la:"<<S;
} 

