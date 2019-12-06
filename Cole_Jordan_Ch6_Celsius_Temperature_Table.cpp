//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 6: Celsius Temperature Table
//A function named Celsius that accepts a temp (F) and returns the temp (C),
//Called in a loop that displays a table of the temps (F) 0 through 20 and their (C) equivalents,
//Results formatted using setw / setprecision(1).

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototype
double Celsius(double);

int main()
{
    //Header for temperature table
	cout << "   Fahrenheit    Celsius" << endl;
	cout << "  _______________________" << endl ;
    
    //For loop to run temp (F) 0-20 and (C) equivalent (formatted using setw/fixed/setprecision)
	for (int F = 0; F <= 20; F++)
	{
	cout << setw(9) << F;
	cout << setw(14) << fixed << setprecision(1) << Celsius(F) << endl;
	}
	
	system("pause");
	return 0;
}

//Celsius function to convert temp (F) to temp (C)
double Celsius(double F)
{
    double C;
    C = (5 * (F - 32)) / 9;
    return C;
}
