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

	//function to get the numerator and denominator
	void getNumDenom(int *num, int *denom)
	{
		*num = numerator;
		*denom = denominator;
	} // end function getNumDenom

	// function to set the numerator and denominator
	void setNumDenom(int num, int denom)
	{
		numerator = num;
		denominator = denom;
	} // end function setNumDenom

	// function to get the denominator
	
	int getDenom()
	{
		return denominator;
	} // end function getDenom

	// function to get the numerator
	int getNum()
	{
		return numerator;
	} // end function getNum

	// function to add
	void add(Fraction number)
	{
		int Denom = number.getDenom();
		int Num = number.getNum();

		numerator = numerator * Denom + denominator * Num;
		denominator = denominator * Denom;
	} // end function add

	// function to subtract
	void subtract(Fraction number)
	{
		int Denom = number.getDenom();
		int Num = number.getNum();

		numerator = numerator * Denom - denominator * Num;
		denominator = denominator * Denom;
	}// end function subtract

	// function to multiply
	void multiply(Fraction number)
	{
		int Denom = number.getDenom();
		int Num = number.getNum();

		numerator = numerator  * Num;
		denominator = denominator * Denom;
	} // end function multiply

	// function to divide
	void divide(Fraction number)
	{
		int Denom = number.getDenom();
		int Num = number.getNum();

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
	Fraction N1 , N2, N3, N4, N5, N6, N7, N8;
	int a, b, c, d, e, f, g, h;
	cout << "enter your fraction:  ";
	cin >> a >> b;
	N1.setNumDenom(a, b);
	N1.getNumDenom(&a, &b);
	
	// prompt for the input and perfoming the addition
	cout << "enter your fraction:  ";
	cin >> a >> b;
	N2.setNumDenom(a, b);
	N2.getNumDenom(&a, &b);
	N1.print();
	N1.add(N2);
	cout << " + ";
	N2.print();
	cout << "=";
	N1.print();
	cout << endl;


} // end main