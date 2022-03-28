#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int a1 , b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if(1.0*a1/a2 == 1.0*b1/b2 && 1.0*a1/a2 == 1.0*c1/c2){
    	cout << "Vo so nghiem";
	}
	else if(1.0*a1/a2 == 1.0*b1/b2 && 1.0*a1/a2 != 1.0*c1/c2){
		cout << "Vo nghiem";
	}
	else{
		int D = a1*b2 - a2*b1;
		int Dx = c1*b2 - c2*b1;
		int Dy = a1*c2 - a2*c1;
		cout << 1.0*Dx/D << " " << 1.0*Dy/D;
	}
    
    return 0;
}
