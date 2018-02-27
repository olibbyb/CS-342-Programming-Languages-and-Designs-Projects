#include <iostream>
int sizeOfString(char*);
using namespace std;

int main()
{
	char userString[60];
	cout << "Enter a sentence." << endl;
	cin.getline(userString, 60);
	cout << "The number of words in your sentence is " << sizeOfString(userString) << endl;
	return 0;
}

int sizeOfString(char *cs)
{
	int count = 1;
	while (*cs != NULL)
	{
		if (*cs == ' ')
		{
			count++;
		}
		*cs++;
	}
	return count;
}