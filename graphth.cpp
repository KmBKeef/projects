#include <iostream>
#include <string.h>
using namespace std;

const char* verteces[]={ "ab", "ac", "ad", "ae", "ak", "af", "aj", "ag", "ai", "ah", "bh", "bc", "bd", "be", "cg", "ci", "cd", "ce", "dj", "df", "de", "ef", "eg", "eh", "ek", "fg", "fh", "fj", "gh", "gi", "hi", "hj", "hk", "ij", "ik", "jk"};

const char* edges[] = {"hijk", "hgfe", "bcde", "abh", "aek", "adfj", "acgi"};

int count = 0;
int main() {
	int vlen = sizeof(verteces)/sizeof(const char*);
	int elen = sizeof(edges)/sizeof(const char*);
	cout << "vlen: " << vlen << " elen: " << elen << endl;
	for(int x=0; x < vlen ; x++) {
		for(int y=0; y < vlen ; y++) {
			for(int z=0; z < vlen ; z++) {
				if((verteces[x][0] == verteces[y][0] && verteces[y][1] == verteces[z][1] && verteces[x][1] == verteces[z][0])) {
					char buffer[7];
					sprintf(buffer, "%s%s%s", verteces[x],verteces[y],verteces[z]);
					bool straight = false;
			    for(int e=0; e < elen; e++) {
						if(strchr(edges[e], buffer[0]) && strchr(edges[e], buffer[1]) && strchr(edges[e], buffer[3])) {
							straight = true;
							break;
						}
					}	
					if(straight == false) {
					  printf("%s\n", buffer);
						count++;
					}
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}
