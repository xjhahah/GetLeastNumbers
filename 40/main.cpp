#include <iostream>
#include <set>
#include <vector>
using namespace std;

typedef multiset<int, greater<int>> intStr;
typedef multiset<int, greater<int>>::iterator sit;


void GetLeastNumbers(const vector<int>& data, intStr& leastNumbers, size_t K)
{
	leastNumbers.clear();
	if (K < 1 || data.size() < K)
	{
		return;
	}
	vector<int>::const_iterator it = data.begin();
	while (it != data.end())
	{
		if (leastNumbers.size() < K)
		{
			leastNumbers.insert(*it);
		}
		else
		{
			sit iterGreatest = leastNumbers.begin();
			if (*it < *(leastNumbers.begin()))
			{
				leastNumbers.erase(iterGreatest);
				leastNumbers.insert(*it);
			}
		}
	}
}
int main()
{
	int arr[] = { 3,5,2,1,7,6,9,8 };
	return 0;
}