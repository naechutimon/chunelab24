#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Write function count() here.

int count(int arr[], int size) {
    vector<int> uniqueNumbers(arr, arr + size);
    sort(uniqueNumbers.begin(), uniqueNumbers.end());
    auto last = unique(uniqueNumbers.begin(), uniqueNumbers.end());
    return distance(uniqueNumbers.begin(), last);
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
