#include<iostream>
#include<string>
using namespace std;

int main() {
	string input;
	int arr[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int max = 0;
	char answer;
	
	cin >> input;

	for (int i = 0; input.length() > i; i++)
		input[i] = tolower(input[i]);

	for (int i = 0; i <input.length(); i++) 
	{
		 if (input[i] >= 97 &&input[i] <= 122)
			arr[input[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) 
	{
		if (arr[i] > max)
		{
			answer = i + 65;
			max = arr[i];
		}
		else if (arr[i] == max)
			answer = '?';
	}

	cout << answer << "\n";

	return 0;
}