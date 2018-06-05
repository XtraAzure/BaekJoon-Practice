#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int testCase;
	int numTest;
	float testScore[1000];
	float sumScore = 0;
	float avgScore;
	float avgAbove = 0;
	float avgPercent;
	cin >> testCase;

	while (testCase != 0)
	{
		cin >> numTest;

		if (numTest > 1000 || numTest < 1)
			return 0;

		for (int i = 0; numTest > i; i++)
		{
			cin >> testScore[i];
			if (testScore[i] > 100 || testScore[i] < 0)
				return 0;
			sumScore += testScore[i];
		}
		avgScore = sumScore / numTest;
		for (int i = 0; numTest > i; i++)
		{
			if (avgScore < testScore[i])
			{
				avgAbove++;
			}
		}
		avgPercent = (avgAbove / numTest) * 100;
		cout << fixed <<setprecision(3)
		<< avgPercent << "%\n";

		testCase--;
		sumScore = 0;
		avgScore = 0;
		avgAbove = 0;
		avgPercent = 0;

	}

	return 0;
}