#include <windows.h> 
#include <iostream>
#include <TlHelp32.h> 
#include <string> 
#include <sstream> 
#include <math.h>

# define M_PI           3.14159265358979323846  /* pi */
#define _USE_MATH_DEFINES
using namespace std;


int c;


//multiplying , dividing   , addition , subtraction 1,2,3,4

class MDSSrASub {
public :
	double x,y,z;

	int add(int, int) {system("CLS");	cout << "You have choosen addition ...." << endl;	cout << "Enter x :=: ";cin >> x;	cout << "Enter y :=: ";cin >> y;	z = x + y;	return z; }

	int mult(int , int) {system("CLS");	cout << "You have choosen multiplying ...." << endl;	cout << "Enter x :=: ";cin >> x;	cout << "Enter y :=: ";cin >> y;	z = x * y;	return z;}

	int div(float, float) {system("CLS");	cout << "You have choosen dividing ...." << endl;	cout << "Enter x :=: ";cin >> x;	cout << "Enter y :=: ";cin >> y;	 z = x / y; return z;}

	int sub(int, int) {system("CLS");	cout << "You have choosen subtraction ...." << endl;	cout << "Enter x :=: ";cin >> x;	cout << "Enter y :=: ";cin >> y;	 z = x - y; return z;}
};
MDSSrASub m;

//Area of sqare,rectangle , triangle ,circle    5,6,7,8
class AsArAtAc {
public:

	int h,b;
	double x, y, z, r;
	
	int AoS(int) { system("CLS"); cout << "You have choosen Area of sqare ...." << endl;	cout << "Enter x :=: ";cin >> x;	z = x * x;	return z; }

	int AoR(int, int) { system("CLS"); cout << "You have choosen Area of rectangle  ...." << endl;	cout << "Enter x :=: ";cin >> x;	cout << "Enter y :=: ";cin >> y;	 z = x * y;	return z; }

	int AoT(int, int) { system("CLS"); cout << "You have choosen Area of triangle ...." << endl;	cout << "Enter height in cm:=: ";cin >> h;	cout << "Enter base  in cm :=: ";cin >> b;	 z = (0.5) * h * b;	return z; }

	int AoC(int) { system("CLS"); cout << "You have choosen Area of circle ...." << endl;	cout << "Enter r :=: ";cin >> r;	z = r*r*M_PI;	return z; }
};
AsArAtAc Am;


//Perimeter of sqare , triangle ,circle,rectangle    9,10,11,12
class PsPtPc {
public:
	double x, y, z,c,r;

	int PoS(int) { system("CLS"); cout << "You have choosen Perimeter of sqare ...." << endl;	cout << "Enter x :=: ";cin >> x;	z = x*4;	return z; }

	int PoR(int, int) { system("CLS"); cout << "You have choosen Perimeter of rectangle  ...." << endl;		cout << "Enter x :=: ";cin >> x;	cout << "Enter y :=: ";cin >> y;	z = x*2 + y*2;	return z; }

	int PoT(int, int, int) { system("CLS"); cout << "You have choosen Perimeter of triangle ...." << endl;	cout << "Enter side a:=: ";cin >> x;	cout << "Enter side b :=: ";cin >> y; cout << "Enter side c :=: ";cin >> c;	 z = x+y+c;	return z; }

	int PoC(int) { system("CLS"); cout << "You have choosen Perimeter of circle ...." << endl;	cout << "Enter r :=: ";cin >> r;	z = r * 2 * M_PI;	return z; }
};
PsPtPc Pm;

//Volume of cube , pyramid ,sphere,rectangle,     15,13,14,16
class VcVpVs {
public:
	double x, y, z,h;

	int VoC(int) { system("CLS"); cout << "You have choosen Volume of cube ...." << endl;	cout << "Enter x :=: ";cin >> x;	z = x * x * x;	return z; }

	int VoP(int, int, int) { system("CLS"); cout << "You have choosen Volume of pyramid ...." << endl;	cout << "Enter Base length :=: ";	cin >> x;	cout << "Enter Base width :=: ";	cin >> y;	cout << "Enter Pyramid height :=: ";	cin >> h;	z = (x*y*h)/3;	return z; }

	int VoS(int) { system("CLS"); cout << "You have choosen Volume of sphere ...." << endl;	cout << "Enter x :=: ";cin >> x;	z=(4/3)*M_PI*x*x*x;	return z; }

	int VoR(int, int, int) { system("CLS"); cout << "You have choosen Volume of rectangle ...." << endl;	cout << "Enter Base length :=: ";	cin >> x;	cout << "Enter Base width :=: ";	cin >> y;	cout << "Enter Pyramid height :=: ";	cin >> h;	z = (x * y * h);	return z;}


};
VcVpVs Vm;

//squared  ,square root  17,18
class SSr {
public:
	double x, y, z;

	int Squ(int) { system("CLS"); cout << "You have choosen squared ...." << endl; cout << "Enter x :=: ";cin >> x;  z = x*x;return z; }
	int SqR(int) { system("CLS"); cout << "You have choosen squared ...." << endl; cout << "Enter x :=: ";cin >> x;  z = sqrt(x);return z; }

};
SSr Sm;


class _menu {
public:
	int case_;

	int cases(int) {
	
		cout << "Choose what you need help with  " << endl;
		cout << "1. addition			7. Area of rectangle			13. Volume of cube" << endl;
		cout << "2. subtraction			8. Area of circle			14. Volume of pyramid" << endl;
		cout << "3. multiplying			9. Perimeter of sqare			15. Volume of rectangle" << endl;
		cout << "4. dividing			10. Perimeter of triangle		16. Volume of sphere" << endl;
		cout << "5. Area of sqare		11. Perimeter of circle			17. squared of a number " << endl;
		cout << "6. Area of triangle		12. Perimeter of rectangle		18.square root  of a number " << endl << endl;
		cout << "0. for exit \n" << endl;
		cout << "Enter the number  ";
		cin >> case_;return case_;
	}
};
_menu men;

int main()
{
	men.cases(men.case_);  

	switch (men.case_)
	{
	case 0:
	case 1:	m.add(m.x, m.y); cout << endl; break;
	case 2:	m.sub(m.x, m.y); cout << endl; break;
	case 3:	m.mult(m.x, m.y); cout << endl; break;
	case 4:	m.div(m.x, m.y); cout << endl; break;

	case 5:	Am.AoS(Am.x); cout << endl; break;
	case 6:	Am.AoT(Am.x, Am.y); cout << endl; break;
	case 7:	Am.AoR(Am.x, Am.y); cout << endl; break;
	case 8:	Am.AoC(Am.x); cout << endl; break;

	case 9:	Pm.PoS(Pm.x); cout << endl; break;
	case 10: Pm.PoT(Pm.x, Pm.y, Pm.z); cout << endl; break;
	case 11: Pm.PoC(Pm.r); cout << endl; break;
	case 12: Pm.PoR(Pm.x, Pm.y); cout << endl; break;

	case 13:	Vm.VoC(Vm.x); cout << endl; break;
	case 14:	Vm.VoP(Vm.x, Vm.y, Vm.h); cout << endl; break;
	case 15:	Vm.VoR(Vm.x, Vm.y, Vm.z); cout << endl; break;
	case 16:	Vm.VoS(Vm.x); cout << endl; break;
	

	case 17:	Sm.Squ(Sm.x); cout << endl; break;
	case 18:	Sm.SqR(Sm.x); cout << endl; break;

	default:
		// operator is doesn't match any case constant (+, -, *, /)
		cout << "Error! operator is not correct " <<endl;
		break;
	}

	if (men.case_ > 0 && men.case_ < 5) { cout << "z = " << m.z << endl << endl; }
	else if (men.case_ > 4 && men.case_ < 9) { cout << "z = " << Am.z << " cm^2" << endl << endl; }
	else if (men.case_ > 8 && men.case_ < 13) { cout << "z = " << Pm.z << " cm" << endl << endl; }
	else if (men.case_ > 12 && men.case_ < 16) { cout << "z = " << Vm.z << " cm^3" << endl << endl; }
	else if (men.case_ > 16 && men.case_ < 19) { cout << "z = " << Sm.z  << endl << endl; }

system("pause");
system("CLS");
return 0;
}