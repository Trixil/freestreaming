#include "mapper.h"

void mapper::setValue(string key, string value)
{
	mapString.insert(pair<string, string>(key, value));
}
void mapper::printMap(int key)
{
	for (auto& iter: mapString)
	{
		cout << iter.first << ": " << iter.second << endl;
	}
}

void mapper::read()
{
	ifstream paramInput;
	paramInput.open("params.txt");
	string line = "";

	int mapKey = 0;
	while (!paramInput.eof())
	{
		getline(paramInput, line);
		while (1)
		{
			while ((!line.find_first_of('#', 0)) || (line.find(' ') == 0))
			{
				getline(paramInput, line);
			}
			break;
		}
		int spaceLoc = line.find_first_of(' ', 0);
		int end = line.find_first_of(' ', 1 + spaceLoc);
		setValue(line.substr(0, spaceLoc), line.substr(spaceLoc + 1, end - spaceLoc));
		mapKey++;
	}
	printMap(mapKey);

}
string mapper::getValue(string key)
{
	return mapString[key];
}
