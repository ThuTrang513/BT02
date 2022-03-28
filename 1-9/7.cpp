#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,k;
	cin >> n;
	k = n;
	cout << n << " ";
	if(n >= 0){
		while(true){
		    cin >> n;
			if(n < 0){
				cout << n;
			}
			else if( n == k) continue;
			else if(n != k){
				cout << n  << " ";
				k = n;
			}
	    }
	}
	
}

