#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<int> vec = { 1,2,3,4,5 };
	std::swap(*std::max_element(vec.begin(), vec.end()), *std::min_element(vec.begin(), vec.end()));
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, ","));
	std::cout << std::endl;
	return 0;
}