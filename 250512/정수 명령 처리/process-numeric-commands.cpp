#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n, value;
	string command;
	stack<int> stack1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> value;
			stack1.push(value);
		}
		else if (command == "pop")
		{
			cout << stack1.top() << endl;
			stack1.pop();
		}
		else if (command == "size") cout << stack1.size() << endl;
		else if (command == "empty") cout << stack1.empty() << endl;
		else if (command == "top") cout << stack1.top() << endl;
	}
	return 0;
}