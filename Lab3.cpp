#include <iostream>

int main()
{	
	const int size = 10;
	int half_size = size / 2;
	int array[size];

	for (int i = 0; i < size; ++i)
	{
		array[i] = i + 1;
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';

	for (int i = 0; i < half_size; ++i)
	{
		int tmp = array[i];
		array[i] = array[i + half_size];
		array[i + half_size] = tmp;
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}
