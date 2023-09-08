#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < 10000; i++)
		arr[i] = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[num - 1]++;
	}


	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
		{
			for(int j =0; j<arr[i]; j++)
				cout << i+1 << '\n';
		}
	}

	return 0;
}