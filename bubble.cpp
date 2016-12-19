#include <iostream>
using namespace std;



int main() {
	
	int no[] = {10 , 4, 5, 3, 2, 1};
	
	int* s1 = no;
	int* s2 = no + 1;
	int save = *s2;
	bool swap = true;	
	
	
	for(int x = 1; x < sizeof(no)/sizeof(int); x++) {
		
			s1 = no;
			s2 = no +1;
			save = *s2;
		
		for(int x = 2; x < sizeof(no)/sizeof(int); x++) {

			if(*s1 > *s2){
			*s2 = *s1;
			*s1 = save;
			}
			
			s1++;
			s2++;
			save =*s2;
			
					
		}	
		
		if(*s1 > *s2) {
				*s2 = *s1;
				*s1 = save;
			}	
	}




		for(int x = 0; x < sizeof(no)/sizeof(int); x++) {
			
			cout << no[x]<< " " << flush;
				
		}
		
		cout << endl;
		cout << *s1 << " " << *s2 << endl;	
	
	return 0;
}
