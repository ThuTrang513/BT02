#include<iostream>
using namespace std;
int main(){
	int n;
	int dem = 0, tong = 0;
	do{
		cin >> n;
		while(n > 10){
			cout << "Nhap lai diem mon thu " << dem+1 << ": ";
			cin >> n;
		}
		if( n >= 0 && n <= 10){
			dem++;
			tong += n;
		}
	}while(n > 0);
	cout << 1.0*tong/dem;
	return 0;
}
