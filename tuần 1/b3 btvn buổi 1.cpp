#include<iostream>
using namespace std;
int main(){
	int n;
	long P = 0;
	cout<<"nhap so nguyen la so chan: ";
	cin>>n;
	if(n % 2 != 0){
	cout<<"nhap lai so chan!";
	
}
else {
	for(int i = 0; i < n; i++){
		P += (2 *i);
	}
	cout<<"tich la: "<<P;
}
}
