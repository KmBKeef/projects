#include <iostream>
using namespace std;

char arr[35][2] = {
	{'a','b'},{'a','c'},{'a','d'},{'a','d'},{'a','k'},{'a','f'},{'a','j'},{'a','g'},{'a','i'},{'a','h'},{'b','h'},{'b','c'},{'b','d'},{'b','e'},{'c','g'},{'c','i'},{'c','d'},{'c','e'},{'d','f'},{'d','e'},{'e','f'},{'e','g'},{'e','h'},{'e','k'},{'f','g'},{'f','h'},{'f','j'},{'g','h'},{'g','i'},{'h','i'},{'h','j'},{'h','k'},{'i','j'},{'i','k'},{'j','k'}
};

char print() {
	for(int x=0; x < 35 ; x++) {
		for(int y=0; y < 2; y++) {
			cout << arr[x][y] << ", "  << flush;
		}
		cout << endl;
	}	
}
int count = 0;
int main() {

	//	cout << sizeof(arr)/2 << endl;
	//	print();
	
	for(int x=0; x < 35 ; x++) {
			for(int y=0; y < 35 ; y++) {
					for(int z=0; z < 35 ; z++) {
							if((arr[x][0] == arr[y][0] && arr[y][1] == arr[z][0] && arr[x][1] == arr[z][1])) {
								cout << "[" << arr[x][0] <<  " " << arr[x][1] << "] [" << arr[y][0] << " " << arr[y][1] << "] [" << arr[z][0] << " " << arr[z][1] << "] " << endl; 
								count++;
							}
						}
					}
				}

	
	cout << count << endl;
	return 0;
}
