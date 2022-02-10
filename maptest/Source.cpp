#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include "mapper.h"
using namespace std;

int main()
{
	mapper map1;
	map1.read();
	cout << map1.getValue("Target");
}