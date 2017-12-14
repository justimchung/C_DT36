#include<iostream>
using namespace std;
/*
這題可以用2維陣列來解決，但為了教學需要，先用兩個一維陣列來模擬二維陣列
*/
int main()
{
	int n;
	cin >> n;
	int bufx[1000];
	int bufy[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> bufx[i];
		cin >> bufy[i];
	}
	for (int i = 0; i < n; i++)
	{
		int x = bufx[i];
		int y = bufy[i];
		bool Skyline = true;
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			int x2 = bufx[j];
			int y2 = bufy[j];

			if ((x < x2 && y <= y2) || (x <= x2 && y < y2))
			{
				Skyline = false;
				break;
			}
		}
		if (i == n - 1)
		{
			if (Skyline == true)
				cout << "Y" << endl;
			else
				cout << "N" << endl;
		}
		else
		{
			if (Skyline == true)
				cout << "Y ";
			else
				cout << "N ";
		}

	}

	return 0;
}