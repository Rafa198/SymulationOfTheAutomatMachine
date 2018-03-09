//Simulation of the Automatic Machine
//03.03.2018
//Author Rafael Fazlyev

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int SIZE = 20;


int main()
{
	ifstream in("input.txt");
	ofstream out("output.txt");
	int s = 1, number = 0;
	char a, result[SIZE];
	
	while (in >> a)
	{
		switch (s)
		{
		case 1:
		{
			switch (a)
			{
			case 'a':
			{
				result[number] = 'A';
				s = 2;
				break;
			}
			case 'b':
			{
				result[number] = 'C';
				s = 2;

				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (a)
			{
			case 'a':
			{
				result[number] = 'A';
				s = 3;
				break;
			}
			case 'b':
			{
				result[number] = 'E';
				s = 3;
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (a)
			{
			case 'a':
			{
				result[number] = 'B';
				s = 4;
				break;
			}
			case 'b':
			{
				result[number] = 'D';
				s = 1;
				break;
			}
			}
			break;
		}

		case 4:
		{
			switch (a)
			{
			case 'a':
			{
				result[number] = 'C';
				s = 4;
				break;
			}
			case 'b':
			{
				result[number] = 'E';
				s = 3;
				break;
			}
			}
			break;
		}
		break;
		}
		number++;
	}
	for (int i = 0; i < number; i++)
		out << result[i];
	out << endl;
	if (result[9] == 'A'|| result[19] == 'A'||result[29] == 'A')
		out << "YES"; else out << "NO";
	return 0;
}