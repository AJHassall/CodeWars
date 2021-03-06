#include <vector>
#include <iterator>




class Kata
{
public:
	std::vector<int> foldArray(std::vector<int> array, int runs)
	{
		for (int i = 0; i < runs; i++) {

			std::vector<int>::iterator left = array.begin();
			std::vector<int>::iterator right = array.end()-1;

			while (left < right) {
				*left += *right;
				left++;
				
				
				array.erase(right--);
			}
		}

		return std::vector<int>(array);
	}
};



