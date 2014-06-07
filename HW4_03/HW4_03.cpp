#include <iostream>
using namespace std;

void find_smallest(int* arr)
{
	int small = arr[0];
	for (int i = 1; i < 8; i++) {
		if (arr[i] < small)
			small = arr[i];
	}
	cout << "The smallest value in the array is: " << small << endl;

}

int main(){
	int numbers[8]{1, 2, 4, 5, 10, 100, 2, -22};
	int* p = numbers;

	find_smallest(p);
	return 0;
}