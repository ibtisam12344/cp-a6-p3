#include<iostream>
using namespace std;
char input;
char in()
{
	cout << "Enter character" << endl;
	cin >> input;
	return input;
}
void converter()
{
	
	if (islower(input))
	{
		cout << "The " << input << " in upper case is : ";
		char input_original = int(input) - 32;
		cout << input_original << endl;
	}
	else if (isupper(input))
	{
		cout << "The " << input << " in lower case is : ";
		char input_original1 = int(input) + 32;
		cout << input_original1;
	}
}
int main()
{
	in();
	converter();

	return 0;
}