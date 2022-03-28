#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int a , b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    float delta = b*b - 4*a*c;
    float t;
    if(delta > 0){
        cout <<(-b - sqrt(delta))/(2*a) << endl << (-b + sqrt(delta))/(2*a);
    }
    else if(delta == 0){
        cout << -1.0*b/(2*a);
    }
    else{
        cout << -1.0*b/(2*a) << " " << - sqrt(-delta)/(2*a) << endl;
        cout << -1.0*b/(2*a) << " " << sqrt(-delta)/(2*a) << endl;
    }
    return 0;
}
