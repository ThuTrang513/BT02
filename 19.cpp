#include<iostream>
using namespace std;
int main(){
	int so_mon;
	cin >> so_mon;
	int d,h,tong = 0,tong_he = 0;
	for(int i = 1; i <= so_mon;i++){
		cout << "Diem mon hoc " << i <<": ";
		cin >> d;
		cout <<endl << "He so mon hoc " << i <<": ";
		cin >> h;
		cout << endl;
		tong += h*d;
		tong_he += h;
	}
	cout << "So mon hoc: " << so_mon <<endl;
	cout << "Tong so he so: " << tong_he << endl;
	cout << "Diem trung binh cua "<< so_mon <<" mon hoc: " << 1.0*tong/ tong_he; 
	return 0;
}
