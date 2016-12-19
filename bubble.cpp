#include <iostream>
using namespace std;

int main() {

	int no[] = {10 , 9,8,7,6 ,5,4, 3,2, 1};
	int count = sizeof(no)/sizeof(int);	
	int tries = 0;



	for(int x = 0; x < (count-1) ; x++) {
		for(int y = 0; y < (count-1-x) ; y++) {
			if(no[y] > no[y+1]) {
				int z = no[y+1];
				no[y+1] = no[y];
				no[y] = z;
			}
			tries++;
		}	
		
		for(int x = 0; x < count; x++) cout << no[x]<< " " << flush;
 	cout <<	endl;
	}
	
	
	cout << tries << endl;
	return 0;
}
