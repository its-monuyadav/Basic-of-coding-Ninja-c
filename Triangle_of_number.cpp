#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
   	int i = 1, n;
	cin >> n;
	while (i <= n)
	{
		int j = 1;
		while (j <= n - i)
		{
			cout << " ";
			j++;
		}
		j = 1;
		int k = i;
		while (j <= i)
		{
			cout << k;
			k++;
			j++;
		}
		k = k - 2;
		int l = 1;
		while (l <= i - 1)
		{
			cout << k;
			k--;
			l++;
		}

		cout << "\n";
		i++;
	}

	return 0;
}