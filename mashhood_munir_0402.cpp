#include "privateCircle.h"
#include "privateCylinder.h"
#include "protectedCircle.h"
#include "protectedCylinder.h"
#include <iostream>
using namespace std;

int main()
{
	protectedCylinder cylinderProt;
	privateCylinder cylinderPriv;
	float radius;
	float height;
	cout << "Enter the radius: ";
	cin >> radius;

	cout << "Enter the height: ";
	cin >> height;
	
	cylinderProt.setRadius(radius);
	cylinderProt.setHeight(height);
	cout << "Cylinder area: " << cylinderProt.getArea() << endl;
	cout << "Cylinder volume: " << cylinderProt.getVolume() << endl;

	cout << "Enter the radius: ";
	cin >> radius;

	cout << "Enter the height: ";
	cin >> height;

	cylinderPriv.setRadius(radius);
	cylinderPriv.setHeight(height);
	cout << "Cylinder area: " << cylinderPriv.getArea() << endl;
	cout << "Cylinder volume: " << cylinderPriv.getVolume() << endl;
}