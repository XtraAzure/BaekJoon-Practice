#include <iostream>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int a, b;

	cin >> n;
	
	if (n > 1000000)
		return 0;
	
	for (int i = 0; n > i; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}