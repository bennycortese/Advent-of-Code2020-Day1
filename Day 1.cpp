// Day 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;



void CopyDaStuff(string nameOfFile, vector<int>& dataStuffs)
{
	ifstream inIntFile(nameOfFile);

	if (inIntFile.is_open())
	{

		string lineFromFile;

		while (getline(inIntFile, lineFromFile))
		{
			istringstream stream(lineFromFile);

			string tempInt;
			int realValue;

			getline(stream, tempInt, ',');
			realValue = stoi(tempInt);

			dataStuffs.push_back(realValue);
		}
	}
}



int main()
{
	int firstVar;
	int secondVar;
    vector<int> theDataFromOurFile;

	CopyDaStuff("Day1Data.txt", theDataFromOurFile);

	//cout << theDataFromOurFile.at(i) << endl;
	for (int i = 0; i < theDataFromOurFile.size(); i++)
	{
		for (int j = 0; j < theDataFromOurFile.size(); j++)
		{
			if (theDataFromOurFile.at(i) + theDataFromOurFile.at(j) == 2020)
			{
				firstVar = theDataFromOurFile.at(i);
				secondVar = theDataFromOurFile.at(j);
			}
		}
	}
	cout << firstVar * secondVar << endl;


}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
