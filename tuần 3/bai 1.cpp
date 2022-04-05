#include<iostream>
using namespace std;
struct ngaysinh {
	int ngay, thang, nam;
};
class KH {
private:
	char ht[30];
	ngaysinh NS;
	char k[50];
	char cmnd[30];
public:	
friend ostream& operator<<(ostream& os ,KH a);
friend istream& operator>>(istream& is,KH &a);
int getnam(){
	return NS.nam;
} 
void sapxep(KH &a);
};
 ostream& operator<<(ostream& os ,KH a){
 		cout<<"-____________________________________________________________________"<<endl;
	cout<<"ho va ten"<<"| "
	    <<"|"<<"so cmnd"<<"|"
	    <<"|"<<"ho khau"<<"|"
	    <<"|"<<"ngay thang nam sinh"<<"|"<<endl;
	os<<"|"<<a.ht
        <<"|   "<<a.cmnd
        <<"|   "<<a.k
        <<"|   "<<a.NS.ngay<<a.NS.thang<<a.NS.nam;
}
 istream& operator>>(istream& is,KH &a){
		cout<<"\nNhap vao ho ten khach hang: ";
	is>>a.ht;  fflush(stdin);
	cout<<"\nNhap vao ho khau: ";
	is>>a.k;  fflush(stdin);
	cout<<"\nNhap vao so cmnd: ";
	is>>a.cmnd;  fflush(stdin);
	cout<<"\nNhap ngay sinh ";
	is>>a.NS.ngay;
	cout<<"\nNhap thang sinh ";
	is>>a.NS.thang;
	cout<<"\nNhap nam sinh ";
    is>>a.NS.nam;
}
void  KH::sapxep(KH &a){
	int i,j;
    int tg;
    int n;
    for( i=1; i<=n; i++)
        for( j=i+1; j<=n; j++)
            if(a[i].getnam() {
            tg=a[i].getnam();
                a[j].getnam()=a[i].getnam();
                a[j].getnam()=tg;
			}
            	cout<<"-____________________________________________________________________"<<endl;
	cout<<"ho va ten"<<"| "
	    <<"|"<<"so cmnd"<<"|"
	    <<"|"<<"ho khau"<<"|"
	    <<"|"<<"ngay thang nam sinh"<<"|"<<endl;
	cout<<"|"<<a.ht
        <<"|   "<<a.cmnd
        <<"|   "<<a.k
        <<"|   "<<a.NS.ngay<<a.NS.thang<<a.NS.nam;
}
int main(){
	int n;
	KH a[100];
	cout<<"\nNhap so luong khach hang";
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
	cout<<"\nSau khi sap xep theo thu tu giam dan cua tuoi";
	sapxep();
}
