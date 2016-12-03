#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float a, b, c, n, q;
	
//  ax^2 + bx +c = (qx+n)*(px+m)
//	a = q*p;
//	c = m*n;
//	b = b0 + b1 = q*m + n*p;
//  b0 * b1 = a * c

	cout << "Enter your falues for a, b and c: " << endl;
	cout << "a: " << flush;
	cin >> a;
	
	cout << "b: " << flush;
	cin >> b;
	
  cout << "c: " << flush;
	cin >> c;


  cout << "Input equation is " << a << "*x^2 + " << b << "*x + "<< c << endl;
  int count = 0;
  bool solution_found = false;
  for (n=-1*abs(c); n <= abs(c); n++) {
			for (q=-1*abs(a); q <= abs(a); q++) {
          count++;
					if (q != 0 && n != 0 && q*q*c + n*n*a == b*n*q) {
						cout << "The solution is: (" <<q<<"*x + " << n << ")*(" << a/q<< "*x + " << c/n << ")" << endl; 
						solution_found = true;
					}
			}
  }	

  if(! solution_found) {
		cout << "Sorry, no solution was found" << endl;
  }
	cout << "Took "<< count <<  " iterations" << endl;
	return 0;
}
