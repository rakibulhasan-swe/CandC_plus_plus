#include <iostream>
using namespace std;

int main(void)
{
	uint32_t N;

	cin >> N;
	uint32_t two = 1;
	while (two*2 <= N)
	{
		two *= 2;
	}
	cout << two << endl;

	return 0;
}
