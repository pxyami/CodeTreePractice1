#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	int cmdNum, value;
	string cmd;
	deque<int> deque1;
	cin >> cmdNum;
	for (int i = 0; i < cmdNum; i++)
	{
		cin >> cmd;
		if (cmd == "push_front")
		{
			cin >> value;
			deque1.push_front(value);
		}
		else if (cmd == "push_back")
		{
			cin >> value;
			deque1.push_back(value);
		}
		else if (cmd == "pop_front")
		{
			cout << deque1.front() << endl;
			deque1.pop_front();
		}
		else if (cmd == "pop_back")
		{
			cout << deque1.back() << endl;
			deque1.pop_back();
		}
		else if (cmd == "size") cout << deque1.size() << endl;
		else if (cmd == "empty") cout << deque1.empty() << endl;
		else if (cmd == "front") cout << deque1.front() << endl;
		else if (cmd == "back") cout << deque1.back() << endl;
	}
	return 0;
}