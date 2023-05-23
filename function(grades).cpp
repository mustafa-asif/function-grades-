// function(grades).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void grades(int m)
{
	if (m>=91&&m<=100)
	{
		cout << "your garde is AA" << endl;
	}
	else if (m>=81&&m<=90)
	{
		cout << "your grade is AB" << endl;
	}
	else if (m>=71&&m<=80)
	{
		cout << "ypur grade is BB" << endl;
	}
	else if (m>=61&&m<=70)
	{
		cout << "your grade is BC" << endl;
	}
	else if (m>=51&&m<=60)
	{
		cout << "your grade is CC" << endl;
	}
	else if (m>=41&&m<=50)
	{
		cout << "your grade is DD" << endl;
	}
	else
	{
		cout << "you are fail this semester" << endl;
	}
}
int main()
{
	int a;
	
	
	for (int i = 0; i < 5; i++)
	{
		cout << "enter your marks out of 100" << endl;
		cin >> a;
		grades(a);
	}


}

