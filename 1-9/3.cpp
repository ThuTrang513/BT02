#include<iostream>
#include<cmath>
using namespace std;
int Prime(int n);
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n-1+i; j++){
			if(j <= n-i) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
}

