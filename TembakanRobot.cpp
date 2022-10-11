// NAMA     : Iftala Zahri Sukmana
// NRP      : 5025221002
// JURUSAN  : Teknik Informatika

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int v0,x,loss;
    float vtan;

    cin >> v0;
    if (v0 >= 1 && v0 <= 10) {
  		v0 = v0-1;
        loss = 1;
	  }
	else if (v0 >= 11 && v0 <=20) {
	  	v0 = v0-3;
        loss = 3;
	  }
	else {
	  	v0 = v0-5;
        loss = 5;
	  }

    x = pow(v0,2)*sin(90*3.1415/180)/10;
    vtan = sqrt(x*10/sin(90*3.1415/180))+loss;
    cout<<x<<" "<<vtan<<endl;
    return 0;
}

