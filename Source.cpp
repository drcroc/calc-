#include <windows.h> 
#include <iostream>
#include <TlHelp32.h> 
#include <string> 
#include <sstream> 
#include <math.h>

# define M_PI           3.14159265358979323846  /* pi */
#define _USE_MATH_DEFINES
//using namespace std;


int c;


//multiplying , dividing   , addition , subtraction 1,2,3,4

class MDSSrASub {
public :
	double x,y,z;

	int add(int, int) {system("CLS");	std::cout << "You have choosen addition ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	std::cout << "Enter y :=: ";std::cin >> y;	z = x + y;	return z; }

	int mult(int , int) {system("CLS");	std::cout << "You have choosen multiplying ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	std::cout << "Enter y :=: ";std::cin >> y;	z = x * y;	return z;}

	int div(float, float) {system("CLS");	std::cout << "You have choosen dividing ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	std::cout << "Enter y :=: ";std::cin >> y;	 z = x / y; return z;}

	int sub(int, int) {system("CLS");	std::cout << "You have choosen subtraction ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	std::cout << "Enter y :=: ";std::cin >> y;	 z = x - y; return z;}
};
MDSSrASub m;

//Area of sqare,rectangle , triangle ,circle    5,6,7,8
class AsArAtAc {
public:

	int h,b;
	double x, y, z, r;
	
	int AoS(int) { system("CLS"); std::cout << "You have choosen Area of sqare ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	z = x * x;	return z; }

	int AoR(int, int) { system("CLS"); std::cout << "You have choosen Area of rectangle  ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	std::cout << "Enter y :=: ";std::cin >> y;	 z = x * y;	return z; }

	int AoT(int, int) { system("CLS"); std::cout << "You have choosen Area of triangle ...." <<std::endl;	std::cout << "Enter height in cm:=: ";std::cin >> h;	std::cout << "Enter base  in cm :=: ";std::cin >> b;	 z = (0.5) * h * b;	return z; }

	int AoC(int) { system("CLS"); std::cout << "You have choosen Area of circle ...." <<std::endl;	std::cout << "Enter r :=: ";std::cin >> r;	z = r*r*M_PI;	return z; }
};
AsArAtAc Am;


//Perimeter of sqare , triangle ,circle,rectangle    9,10,11,12
class PsPtPc {
public:
	double x, y, z,c,r;

	int PoS(int) { system("CLS"); std::cout << "You have choosen Perimeter of sqare ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	z = x*4;	return z; }

	int PoR(int, int) { system("CLS"); std::cout << "You have choosen Perimeter of rectangle  ...." <<std::endl;		std::cout << "Enter x :=: ";std::cin >> x;	std::cout << "Enter y :=: ";std::cin >> y;	z = x*2 + y*2;	return z; }

	int PoT(int, int, int) { system("CLS"); std::cout << "You have choosen Perimeter of triangle ...." <<std::endl;	std::cout << "Enter side a:=: ";std::cin >> x;	std::cout << "Enter side b :=: ";std::cin >> y; std::cout << "Enter side c :=: ";std::cin >> c;	 z = x+y+c;	return z; }

	int PoC(int) { system("CLS"); std::cout << "You have choosen Perimeter of circle ...." <<std::endl;	std::cout << "Enter r :=: ";std::cin >> r;	z = r * 2 * M_PI;	return z; }
};
PsPtPc Pm;

//Volume of cube , pyramid ,sphere,rectangle,     15,13,14,16
class VcVpVs {
public:
	double x, y, z,h;

	int VoC(int) { system("CLS"); std::cout << "You have choosen Volume of cube ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	z = x * x * x;	return z; }

	int VoP(int, int, int) { system("CLS"); std::cout << "You have choosen Volume of pyramid ...." <<std::endl;	std::cout << "Enter Base length :=: ";	std::cin >> x;	std::cout << "Enter Base width :=: ";	std::cin >> y;	std::cout << "Enter Pyramid height :=: ";	std::cin >> h;	z = (x*y*h)/3;	return z; }

	int VoS(int) { system("CLS"); std::cout << "You have choosen Volume of sphere ...." <<std::endl;	std::cout << "Enter x :=: ";std::cin >> x;	z=(4/3)*M_PI*x*x*x;	return z; }

	int VoR(int, int, int) { system("CLS"); std::cout << "You have choosen Volume of rectangle ...." <<std::endl;	std::cout << "Enter Base length :=: ";	std::cin >> x;	std::cout << "Enter Base width :=: ";	std::cin >> y;	std::cout << "Enter Pyramid height :=: ";	std::cin >> h;	z = (x * y * h);	return z;}


};
VcVpVs Vm;

//squared  ,square root  17,18
class SSr {
public:
	double x, y, z;

	int Squ(int) { system("CLS"); std::cout << "You have choosen squared ...." <<std::endl; std::cout << "Enter x :=: ";std::cin >> x;  z = x*x;return z; }
	int SqR(int) { system("CLS"); std::cout << "You have choosen squared ...." <<std::endl; std::cout << "Enter x :=: ";std::cin >> x;  z = sqrt(x);return z; }

};
SSr Sm;


class _menu {
public:
	int case_;

	int cases(int) {
	
		std::cout << "Choose what you need help with  " <<std::endl;
		std::cout << "1. addition			7. Area of rectangle			13. Volume of cube" <<std::endl;
		std::cout << "2. subtraction			8. Area of circle			14. Volume of pyramid" <<std::endl;
		std::cout << "3. multiplying			9. Perimeter of sqare			15. Volume of rectangle" <<std::endl;
		std::cout << "4. dividing			10. Perimeter of triangle		16. Volume of sphere" <<std::endl;
		std::cout << "5. Area of sqare		11. Perimeter of circle			17. squared of a number " <<std::endl;
		std::cout << "6. Area of triangle		12. Perimeter of rectangle		18.square root  of a number " <<std::endl <<std::endl;
		std::cout << "0. for exit \n" <<std::endl;
		std::cout << "Enter the number  ";
		std::cin >> case_;return case_;
	}
};
_menu men;

int main()
{
	men.cases(men.case_);  

	switch (men.case_)
	{
	case 0:
	case 1:	m.add(m.x, m.y); std::cout <<std::endl; break;
	case 2:	m.sub(m.x, m.y); std::cout <<std::endl; break;
	case 3:	m.mult(m.x, m.y); std::cout <<std::endl; break;
	case 4:	m.div(m.x, m.y); std::cout <<std::endl; break;

	case 5:	Am.AoS(Am.x); std::cout <<std::endl; break;
	case 6:	Am.AoT(Am.x, Am.y); std::cout <<std::endl; break;
	case 7:	Am.AoR(Am.x, Am.y); std::cout <<std::endl; break;
	case 8:	Am.AoC(Am.x); std::cout <<std::endl; break;

	case 9:	Pm.PoS(Pm.x); std::cout <<std::endl; break;
	case 10: Pm.PoT(Pm.x, Pm.y, Pm.z); std::cout <<std::endl; break;
	case 11: Pm.PoC(Pm.r); std::cout <<std::endl; break;
	case 12: Pm.PoR(Pm.x, Pm.y); std::cout <<std::endl; break;

	case 13:	Vm.VoC(Vm.x); std::cout <<std::endl; break;
	case 14:	Vm.VoP(Vm.x, Vm.y, Vm.h); std::cout <<std::endl; break;
	case 15:	Vm.VoR(Vm.x, Vm.y, Vm.z); std::cout <<std::endl; break;
	case 16:	Vm.VoS(Vm.x); std::cout <<std::endl; break;
	

	case 17:	Sm.Squ(Sm.x); std::cout <<std::endl; break;
	case 18:	Sm.SqR(Sm.x); std::cout <<std::endl; break;

	default:
		// operator is doesn't match any case constant (+, -, *, /)
		std::cout << "Error! operator is not correct " <<std::endl;
		break;
	}

	if (men.case_ > 0 && men.case_ < 5) { std::cout << "z = " << m.z <<std::endl <<std::endl; }
	else if (men.case_ > 4 && men.case_ < 9) { std::cout << "z = " << Am.z << " cm^2" <<std::endl <<std::endl; }
	else if (men.case_ > 8 && men.case_ < 13) { std::cout << "z = " << Pm.z << " cm" <<std::endl <<std::endl; }
	else if (men.case_ > 12 && men.case_ < 16) { std::cout << "z = " << Vm.z << " cm^3" <<std::endl <<std::endl; }
	else if (men.case_ > 16 && men.case_ < 19) { std::cout << "z = " << Sm.z  <<std::endl <<std::endl; }

system("pause");
system("CLS");
return 0;
}