#include <iostream>
#include <cmath>

using namespace std;
int main(){
	while(1){
		double r1,r2,rc,re,vcc,beta;
		double vbe = 0.6;
		cout << "R1: ";
		cin >> r1;
		cout << "R2: ";
		cin >> r2;
		cout << "Rc: ";
		cin >> rc;
		cout << "Re: ";
		cin >> re;
		cout << "Vcc: ";
		cin >> vcc;
		cout << "Beta: ";
		cin >> beta;
		cout << "Vbe: ";
		cin >> vbe;

		double rth = (r1*r2)/(r1+r2);
		//cout << "Rth: " << rth << endl;
		double vth = (vcc/r1)*rth;
		//cout << "Vth: " << vth << endl;

		double ib = (vth - vbe)/(rth+(1+beta)*re);
		//cout << "IB: " << ib << endl;
		double ic = beta*ib;

		double vc = vcc - ic*rc;
		double ie = ib + ic;
		double ve = ie*re;
		double vce = vc - ve;

		cout << "Ic = " << ic << "\nVCE = " << vce << endl << endl;
	}
}