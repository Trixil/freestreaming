#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

class mapper
{
private:
	map<string, string> mapString;
public:
	void setValue(string key, string value);
	void printMap(int key);
	string getValue(string key);
	void read();
};