#include <iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter the Age ="<<endl;
	cin >> age;
	
	switch (age)
	{
		case 1:
			cout<<"your are born right now";
			break;
			
		case 2:
			cout<<"your condition is also same";
			break;
			
		case 18:
			cout<<"your are Egligile for vote";
			break;
			
		default:
			cout<<"wait till 18 years ";
			break;
			
				
	}
	return 0;
}
