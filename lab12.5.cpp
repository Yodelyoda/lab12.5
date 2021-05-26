#include <iostream>
#include <stack>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream fin("input.txt");
	while (fin)
	{
		int n;
		string str;
		getline(fin, str);
		stack<char> s(deque<char>(str.begin(), str.end()));
		while (!s.empty())
		{
			
				cout << s.top();
				s.pop();
			
		}
		cout << endl;
	}
	return 0;
}