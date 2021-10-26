// DSDM_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h" 
#include "windows.h"
#include <iomanip>
#include "math.h" 
using namespace std;

float dec(int, int);

float oct(int, int);

float dec(int a,int b) {
	int a1, a2, a3, c;
	a1 = a / 100;
	a2 = (a / 10) % 10;
	a3 = a % 10;
	c = a1 * pow(b, 2) + a2 * pow(b, 1) + a3 * pow(b, 0);
	return c;
}
float oct(int a,int b){
	int a1, a2, a3,a4=0, c;
	a1 = a % b;
	a2 = (a/b) % b;
	a3 = (a/b) / b;
	if (a3 /b > 0) {
		a3 = ((a / b) / b) % b;
		a4 = ((a / b) / b) / b;
	}
	
	c = (a4*1000)+(a3 * 100) + (a2 * 10) + a1;
	
	return c;

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c , d, k, m, p, g,x, h, h1,o,o1,o2;
	cout << "Введіть змінні a, b, c, d, k, m, p, g \n";
	cin >> a >> b >> c >> d >> k >> m >> p >> g;

	cout << "Введіть числові системи до змінних a, b, c, d, k, m, p \n";
	float a2, b2, c2, d2, k2, m2, p2, f;
	cin >> a2 >> b2 >> c2 >> d2 >> k2 >> m2 >> p2;

	float a1, b1, c1, d1, k1, m1, p1;
	a1 = dec(a, a2);
	b1 = dec(b, b2);
	c1 = dec(c, c2);
	d1 = dec(d, d2);
	k1 = dec(k, k2);
	m1 = dec(m, m2);
	p1 = dec(p, p2);

	a2 = oct(a1, g);
	b2 = oct(b1, g);
	c2 = oct(c1, g);
	d2 = oct(d1, g);
	k2 = oct(k1, g);
	m2 = oct(m1, g);
	p2 = oct(p1, g);

	cout << "Змінні в десятичній та g-ічній системи: \n";
	cout << "a= " << a1<<" = "<<a2 << endl;
	cout << "b= " << b1<<" = "<<b2 << endl;
	cout << "c= " << c1<<" = "<< c2<< endl;
	cout << "d= " << d1 << " = "<<d2 << endl;
	cout << "k= " << k1 << " = "<<k2<< endl;
	cout << "m= " << m1 << " = "<<m2<< endl;
	cout << "p= " << p1 << " = "<<p2<< endl;


	x = ((a1 * b1) + c1) / (((d1 + k1) * m1) - p1);
	f = oct(x,g);
	cout << "Результати виразу (a*b+c)/((d+k)*m-p): ";
	cout << f << endl;

	}
	

