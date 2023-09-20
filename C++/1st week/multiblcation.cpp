
#include <iostream>


using namespace std;

int main()
{
	int result=0;
	for(int i =1 ;i<=10;i++)
	{
		std::cout<<"table for: "<<i<<std ::endl;
		for(int j =0 ;j<=10;j++)
		{
			std::cout<<i<<"*"<<j<<"=";
			result = i*j;
			std::cout<<result<<std::endl;
		}
	}

	return 0;
}
