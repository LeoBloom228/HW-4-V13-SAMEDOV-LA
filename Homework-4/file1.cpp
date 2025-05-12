#include <iostream>
#include <cmath>

int main()

{
	int n;

	std::cout << "Input n: ";
	std::cin >> n;

	double bN1 = 1.0;

	std::cout << bN1 << std::endl;

	double bN;
	for (int i = 2; i <= n; ++i)
	{
		bN = 0.25 * ((3 * bN1) + (1 / (3 * bN1)));

		std::cout << bN << std::endl;

		bN1 = bN;
	}


	return 0;
}