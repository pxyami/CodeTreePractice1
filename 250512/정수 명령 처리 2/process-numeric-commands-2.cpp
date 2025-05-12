#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	int n, value;
	string command;
	queue<int> queue1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> value;
			queue1.push(value);
		}
		else if (command == "pop")
		{
			cout << queue1.front() << endl;
			queue1.pop();
		}
		else if (command == "size") cout << queue1.size() << endl;
		else if (command == "empty") cout << queue1.empty() << endl;
		else if(command == "front") cout << queue1.front() << endl;
	}
	return 0;
}