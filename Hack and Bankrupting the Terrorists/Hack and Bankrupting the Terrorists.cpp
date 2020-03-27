// 09 Assignment - Using References to hack and Bankrupting the terrorists


#include <iostream>

using namespace std;
// function prototype (declaration)
void normalTransaction(int x, int y);

// function prototype (declaration)
void hackedTransaction(int& x, int& y);

// main function
int main()
{
	// JJ's Arcade Account Balance
	int JJsArcadeAccount = 300;

	// Terrorist Account Balance
	int terroristAccount = 97349739;

	cout << "          Bank of International Finances" << endl;
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "\n         Account Balances" << endl;
	cout << "____________________________________\n" << endl;
	cout << "JJ's Arcade Account: $" << JJsArcadeAccount << endl;
	cout << "Terrorist Account:        $" << terroristAccount << "\n\n" << endl;

	cout << "Calling normalTransaction()\n";

	// Call the function normalTransaction with the integers <JJsArcadeAccount> and <terroristAccount>
	normalTransaction(JJsArcadeAccount, terroristAccount);

	cout << "JJ's Arcade Account: $" << JJsArcadeAccount << "\n";
	cout << "Terrorist Account:        $" << terroristAccount << "\n\n";
	cout << "Calling hackedTransaction()\n";

	// Call the function hackedTransaction with the integers <JJsArcadeAccount> and <terroristAccount>
	hackedTransaction(JJsArcadeAccount, terroristAccount);

	cout << "JJ's Arcade Account: $" << JJsArcadeAccount << "\n";
	cout << "Terrorist Account:        $" << terroristAccount << "\n";

	// Return a value of 0
	return 0;
}

// Function definition
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// Function definition
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}