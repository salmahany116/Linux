
#include <iostream>
#include <string>

using namespace std;

int isVowel(char ch)
{
	int result;
	string vowels ="AEIOUaeiou";
	result=vowels.find(ch);
	if(result==1)
	return 1;
	else
	return 0;
}

// Driver code
int main()
{
	int ch;
	std::cout<<"please enter letter"<<std::endl;
	std::cin>>ch;
	if (isVowel(ch)==1)
		cout << "vowel" << endl;
	else
		cout << "consonant" << endl;

	return 0;
}
