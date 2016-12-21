#include <iostream>
using namespace std;

int main() {

	int arr[] = {21, 16, 23, 33, 10, 17, 20, 12, 3, 29};
	int n = sizeof(arr)/sizeof(int);
	int pivot;
	int save;
	int count = 0;
	if(n % 2 == 0) {
		pivot = ((n+2)/2)-1;
	}
	else {
		pivot = ((n+1)/2)-1;
	}

	for(int x = pivot - 1; x >= 0; x--) {
		if(arr[x] > arr[pivot]) {
			save = arr[x];
			for(int y = x; y <= pivot; y++)
				arr[y] = arr[y+1];
			arr[pivot] = save;
			//x = pivot-1;
			pivot--;
		}
		count++;
	}

	for(int h = pivot+1; h < n; h++) {
		if(arr[h] < arr[pivot] && h > pivot) { // moves to the left
			save = arr[h];
			for(int z = h ; z >= pivot; z--)
				arr[z] = arr[z-1];
			arr[pivot] = save;
			//h = pivot+1;
			pivot++;
		}
		count++;
	}

	for(int w = 0; w < n; w++){cout << arr[w] << " " << flush;}cout << endl;	

	//	cout << save;
	//	cout << n << endl;
	cout << count << endl;
	cout << pivot << endl;
	cout << arr[pivot] << endl;
	return 0;
}
