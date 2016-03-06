#include <iostream>
using namespace std;

//Fraction class defination
class Fraction
{
//Default constructor	
public:
	Fraction( )
	{
		 
	} // end Fraction constructor

	Fraction Fraction :: operator +(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		Num = numerator * Denom + denominator * Num;
		Denom = denominator * Denom;
		number.setNumDenom(Num, Denom);
		return number;
	}
	//function to get the numerator and denominator
	void getNumDenom(int &num, int &denom)
	{
		num = numerator;
		denom = denominator;
	} // end function getNumDenom

	// function to set the numerator and denominator
	void setNumDenom(int num, int denom)
	{
		numerator = num;
		denominator = denom;
	} // end function setNumDenom

	// function to get the denominator
	
	
	// function to add
	void add(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		numerator = numerator * Denom + denominator * Num;
		denominator = denominator * Denom;
	} // end function add

	// function to subtract
	void subtract(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		numerator = numerator * Denom - denominator * Num;
		denominator = denominator * Denom;
	}// end function subtract

	// function to multiply
	void multiply(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		numerator = numerator  * Num;
		denominator = denominator * Denom;
	} // end function multiply

	// function to divide
	void divide(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		numerator = numerator  * Denom;
		denominator = denominator * Num;
	}  // end function divide

	// function to print out the result
	void print()
	{
		if ((numerator / denominator) != 0)
			cout << numerator / denominator;

		if ((numerator % denominator) != 0)
		cout <<"'" << numerator % denominator << "/" <<denominator <<"'";

	} //end print function
	
	~Fraction()   //destructor
	{
	}

// numerator and denominator for this Fraction
private:
	int numerator;
	int denominator;

}; // end class Fraction


// function main begin program execution
int main()
{
	 // Fraction objects
	Fraction N1, N2, N3;

	N1.setNumDenom(1, 2);
	N2.setNumDenom(1, 7);
	N1.print();
	cout << " + ";
	N2.print();
	cout << "=";
	N3 = N1 + N2;
	N3.print();
} // end main