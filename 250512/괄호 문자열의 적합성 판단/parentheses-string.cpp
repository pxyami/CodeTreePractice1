#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool Judge(string string1)
{
	stack<char> stack1;
	for (int i = 0; i < string1.size(); i++)
	{
		if (string1[i] == '(') stack1.push('(');
		else
		{
			if (stack1.empty()) return false;
			stack1.pop();
		}
	}
	if (!stack1.empty()) return false;
	return true;
}

int main()
{
	string string1;
	bool isValid;
	cin >> string1;
	isValid = Judge(string1);
	if (isValid) cout << "Yes";
	else cout << "No";
	return 0;
}