#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b > c && b+c >a && a+c >b){
		cout <<"Chu vi: " << a+b+c << endl;
		if(a==b && b == c) cout << "deu";
		else if(a == b || a==c || b ==c){
			if(a == sqrt(b*b+c*c) || b == sqrt(a*a + c*c) || c == sqrt(a*a + b*b)){
				cout << "vuong can";
			}
			else cout << "can";
		}
		else if(a == sqrt(b*b+c*c) || b == sqrt(a*a + c*c) || c == sqrt(a*a + b*b)){
			cout << "vuong";
		}
		else cout << "thuong";
	}
	else cout << "Khong la tam giac";
	return 0;
}
