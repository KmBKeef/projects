#include <iostream>
using namespace std;

class Frog {
	private:
		string name;
	
	private:
		string getName() { return name; }
	
	public:
		Frog(string name): name(name) {}
		
		void info() {cout << "my name is: " << getName() << endl;}
};

int main() {

	Frog frog("Freddy");	

  frog.info();

	return 0;
}
