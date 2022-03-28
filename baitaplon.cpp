#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int gio_lam;
	long long int tien_lam, thue;
	cin >> gio_lam;
	if(gio_lam <= 100) tien_lam = gio_lam*12000;
	else if(gio_lam <= 150) tien_lam = (gio_lam-100)*16000 + 1200000;
	else if(gio_lam <= 200) tien_lam = (gio_lam-150)*20000 + 16000*50 + 1200000;
	else tien_lam = (gio_lam-200)*25000 + 20000*50 + 16000*50 + 1200000;
	tien_lam = tien_lam * 0.91;
	if(tien_lam < 1500000 &&tien_lam >= 1000000) thue = (tien_lam - 1000000 )*0.1;
	else if(tien_lam >= 1500000 && tien_lam < 2000000) thue = (tien_lam - 1500000 )*0.15 + 50000;
	else if(tien_lam >= 2000000 ) thue = (tien_lam - 2000000 )*0.2 + 50000 + 500000*0.15;
	tien_lam = tien_lam - thue;
	long long int tong_du_no = tien_lam;
	for(int i = 1; i <= 12; i++){
		tong_du_no = tong_du_no * 1.02;
	}
	cout <<  tong_du_no;
}
