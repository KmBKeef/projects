#include <iostream>
using namespace std;

int main() {

	int arr[] = {21, 16, 23, 33, 10, 17, 20, 12, 3, 29};
	int n = sizeof(arr)/sizeof(int);
	int pivot;
	int save;
	
	if(n % 2 == 0) {
		pivot = ((n+2)/2)-1;
	}
	else {
		pivot = ((n+1)/2)-1;
	}

	
	for(int x = 0; x < n; x++) {
		
		if(arr[x] > arr[pivot] && x < pivot) { // moves to the right
			save = arr[x];
			
			for(int y = x; y <= pivot; y++ )
				arr[y] = arr[y+1]; 	
			
			arr[pivot] = save;
			x = 0;
		}
		
		else if(arr[x] < arr[pivot] && x > pivot) { // moves to the left
			save = arr[x];
			
			for(int z = x ; z >= pivot; z--)
				arr[z] = arr[z-1];

			arr[pivot] = save;
			x = 0;
		}
	}














	for(int w = 0; w < n; w++)
		cout << arr[w] << " " << flush;

	cout << endl;

	//	cout << save;
	//	cout << n << endl;
	//	cout << pivot << endl;	

	return 0;
}
