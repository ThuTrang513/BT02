#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int F;
    cin >> F;
    double C = 5.0*(F-32)/9;
    cout << fixed << setprecision(2);
    cout << C << " " << C + 273.15;
    return 0;
}
