#include <iostream>

void foo()
{
	setlocale(LC_ALL, "rus");
	using std::cout;
	using std::endl;
	
	cout << "По - Let-Let-Let me die - ем?" << endl;
}

void main()
{
	int value;
	{
		using std::cin;
		using std::cout;
		using std::endl;
		cout << "how many R eul?" << endl;
		cin >> value;
	}
	for (int i = 0;i < value; i++)
	{
		foo();
	}
}