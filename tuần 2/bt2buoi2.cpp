#include<iostream>
using namespace std;
class giaovien
{
private:
	char ht[30];
	char bc[15];
	char nganh[15];
	long bl, cb;
	int t;
public:
	void nhap(){
		cout<<"\nHo va ten: ";
		cin.getline(ht,30);
			fflush(stdin); 
		cout<<"ten nganh ";
		cin.getline(nganh,15);
			fflush(stdin); 
		cout<<"bang cap ";
		cin.getline(bc,15);
			fflush(stdin); 
		 cout<<"Bacluong ";
		cin>>bl;
		cout<<"Tuoi ";
		cin>>t;
			fflush(stdin); 
		}
	void tien()
	{
		int cb = 0; 
		cb = bl * 610;  
	}
	void xuat()
	{
		cout<<"\nHo va ten "<<ht;
		cout<<"\nTen nganh "<<nganh;
        cout<<"\nBang cap "<<bc; 
		cout<<"\nTien luong "<<cb;
		cout<<"\nTuoi "<<t<<endl;		
	}
	void tim(){
		cout<<"danh sach cac giao vien co tien luong nho hon 2000";
		if(cb < 2000)
		{
			xuat();
		}
	}
	void sapxep(giaovien a[], int n){
		for(int i = 0; i < n; i++){
			for(int j = 0; j< n; j++){
				if(a[i].nganh < a[j].nganh)
				{
				swap(a[i],a[j]);
				xuat();	
				}
			}
		}
	}
}; 
int main()
{
	int n;
	cout<<"nhap so luong giao vien ";
	cin>>n;
	giaovien a[n];
	fflush(stdin);  //cin.ignore;
	for(int i = 0; i< n ; i++){
	cout<<"\nNhap thong tin giao vien thu "<<i+1<<endl;
		a[i].nhap();
		a[i].xuat();
	}
	for(int i = 0; i< n ; i++){
		a[i].tim();
	}
	for(int i = 0; i< n ; i++){
		a[i].sapxep(a,n);
	}
	return 0;
}
