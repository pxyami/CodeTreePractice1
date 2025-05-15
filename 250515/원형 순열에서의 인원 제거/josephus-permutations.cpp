#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	deque<int> deque1;

	for (int i = 1; i <= n; i++) deque1.push_back(i);

	while (!deque1.empty())
	{
		for (int i = 0; i < k-1; i++)
		{
			deque1.push_back(deque1.front());
			deque1.pop_front();
		}
		cout << deque1.front() << " ";
		deque1.pop_front();
	}

	return 0;
}