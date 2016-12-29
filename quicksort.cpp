#include <iostream>
using namespace std;


int count;

void quickSort(int arr[], int left, int right) {
		int b = left, e = right; int tmp; int pivot = (arr[(left + right) / 2]);
		
		while(b <= e) {
			count++;
			while (arr[b] < pivot)
				b++;

			while (arr[e] > pivot)
				e--;

			if (b <= e) {
				tmp = arr[b]; 
				arr[b] = arr[e]; 
				arr[e] = tmp; 
				b++; 
				e--; 
			} 
		};

		if (left < e) quickSort(arr, left, e);

		if (b < right) quickSort(arr, b, right); 
}
	

int main() {
	int myarr [] = {5,4,3,2,1};
	int noValues = sizeof(myarr)/sizeof(int);
	for(int x = 0; x < noValues; x++)
	 	cout << myarr[x]  << " " << flush;
	cout << endl;
	quickSort(myarr, 0, noValues-1)  ;

	for(int x = 0; x < noValues; x++)
	 	cout << myarr[x]  << " " << flush;
	cout << endl;
	cout << count << endl;
	return 0;
}

//Easy peasy lemon sqeez
 
