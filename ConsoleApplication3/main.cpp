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

	// Overloading the operator(+) for adding the two fractions
	Fraction Fraction :: operator +(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		Num = numerator * Denom + denominator * Num;
		Denom = denominator * Denom;
		number.setNumDenom(Num, Denom);
		return number;
	}


	// Overloading the operator(-) for adding the two fractions
	Fraction Fraction :: operator -(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		Num = numerator * Denom - denominator * Num;
		Denom = denominator * Denom;
		number.setNumDenom(Num, Denom);
		return number;
	}


	// Overloading the operator(*) for adding the two fractions
	Fraction Fraction :: operator *(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		Num = numerator  * Num;
		Denom = denominator * Denom;
		number.setNumDenom(Num, Denom);
		return number;
	}

	// Overloading the operator(/) for adding the two fractions
	Fraction Fraction :: operator /(Fraction number)
	{
		int Num, Denom;
		number.getNumDenom(Num, Denom);

		Num = numerator  * Denom;
		Denom = denominator * Num;
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
	Fraction N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12;

	N1.setNumDenom(1, 2);
	N2.setNumDenom(1, 7);
	N1.print();
	cout << " + ";
	N2.print();
	cout << "=";
	N3 = N1 + N2;
	N3.print();
	cout << endl;

	N4.setNumDenom(1, 2);
	N5.setNumDenom(1, 7);
	N4.print();
	cout << " - ";
	N5.print();
	cout << "=";
	N6 = N4 - N5;
	N6.print();
	cout << endl;

	N7.setNumDenom(1, 2);
	N8.setNumDenom(1, 7);
	N7.print();
	cout << " * ";
	N8.print();
	cout << "=";
	N9 = N7 * N8;
	N9.print();
	cout << endl;


	N10.setNumDenom(1, 5);
	N11.setNumDenom(1, 3);
	N10.print();
	cout << " / ";
	N11.print();
	cout << "=";
	N12 = N10 / N11;
	N12.print();

} // end main