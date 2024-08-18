/*coding off of learncpp. User enters 2 numbers and recieves an output
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

	int x;
	int y;
	
	cout << "Enter an integer: ";
	cin >> x;

	cout << "enter another integer: ";
	cin >> y;

	cout << x << " + " << y << " is " << x+y << "." << endl;
	cout << x << " - " << y << " is " << x-y << "." << endl;

return 0;
}
