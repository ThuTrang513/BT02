#include<iostream>
#include<cmath>
using namespace std;
int Prime(int n);
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n;i++){
		for(int j = i; j <= n; j++){
			cout << j << " ";
		}
		for(int j = 1; j < i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

