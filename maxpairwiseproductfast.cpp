#include<iostream>
#include<vector>
using namespace std;

long long maxPairwiseProductFast(const vector<int> &numbers)
{
	int n = numbers.size();
	int max_first_index =  -1;
	for(int i=0;i<n;i++)
		if(max_first_index==-1 || numbers[i]>numbers[max_first_index])
			max_first_index = i;
	int max_second_index = -1;
	for(int i=0;i<n;i++)
		if((numbers[i]!=numbers[max_first_index] && (max_second_index==-1 || numbers[i]>numbers[max_second_index])))
			max_second_index = i;
	long long result = numbers[max_first_index]*numbers[max_second_index];
	return result;
}

int main()
{
	int n;
	cin>>n;
	vector<int> numbers(n);
	for(int i=0;i<n;i++)
	{
		cin>>numbers[i];
	}

	long long result = maxPairwiseProductFast(numbers);
	cout<<result;
	return 0;
}