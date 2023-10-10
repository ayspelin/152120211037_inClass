#include <iostream>
#include <ctime>
#include <cstring>



using namespace std;

void assignOneArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void displayOneArray(int* arr,int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	srand(time(0));
	int m;
	cout << "enter the size:" << endl;
	cin >> m;
	int* array = new int[m];
	clock_t startTime = clock();
	assignOneArray(array,m);
	displayOneArray(array, m);
	clock_t endTime = clock();

	cout << endl;
	double elapsedTime = double(endTime - startTime) / CLOCKS_PER_SEC;

	cout << "elapsed time: " << elapsedTime;
	
	delete[] array;


	
	

	return 0;
}

