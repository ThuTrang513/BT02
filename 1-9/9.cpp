#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long int a,b;
	cin >> a >> b;
	long long int min1 = a, min2 = b;
	for(int i = 2; i <= n; i++){
		cin >> a >> b;
		if(a < min1) min1 = a;
		if(b < min2) min2 = b;
	}
	cout << min1*min2;	
}

