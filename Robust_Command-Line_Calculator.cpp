#include <iostream>  // Required for console interaction (user input and output messages)
#include <limits>    // for std::numeric_limits, used to clear the buffer.
#include <string>    // not directly used righ now but it's good to include for having a strings in comming updates.
#include <cmath>     // for mathematical functions like 'pow()' we avoided it for now due to getting the idea of making functions or the manual way.
using namespace std; // using the standard namespace to avoid the 'std::example'.

//------Factorial function------.
// starting a factorial function that only calculate a non-negative integeres.
// starting a function should be like this form:  type name ( parameter1, parameter2, ...) { statements }.

double fact(int n)   
{
	if (n < 0)
	{
		cout << "Error, Factorial is not defined! " << endl;		// handles negative input by printing this line if the value is less than (0).
		return 0.0;							// exit the function early and signal an error if the input is bad.
	}

	if (n == 0)								// this part declares that: 0! = 1, or the base mathematical factorial.
	{
		return 1.0;							// return 1.0; = true.
	}
	double r = 1;								// Initialize 'r' to 1.0; essential as the multiplicative identity for factorial/power.
	for (int i = 1; i <= n; ++i)						// starting a (for) loop should be like this: for(intialization ; condition ; increment) {statements/loop body}.
	{
		r *= i;								// r=r*i is the same as the shortcut r*=i. 
	}
	return r;								// return the value.
}

//---------Power function-------.
// same as factorial this function is designed to calulate only positive numbers due to not falling into algorithms/mathematics that requires advanced knowledge.
// our parameters here is the base and exponent or x and y, the function requires two variables/parameters to achieve powering.

double calculatePower(double base, int exponent)
{
	if (exponent == 0)
	{
		return 1.0;
	}
	if (exponent < 0)
	{
		cout << "Error!, Power function does not currently support negatives." << endl;
		return 0.0;
	}
	double r = 1;
	for (int i = 0; i < exponent; ++i)					// Calculate power interatively (base * base * ..... * exponent times), curly braces are not required if the statement is not complex.
		r *= base;
	return r;
}

//--------Main program--------.
// our program starts from here(the main function) and not from the functions above.

int main()
{

	while (true)								// decided to use a 'while(true)' loop here for continuous operation, breaking out explicitly with user input.
	{

	//-----Declaring the program variables------.

		double x;							// first number.
		double y = 0.0;							// second number (intialized by 0.0 to avoid garbage if not set) we can avoid intilization.
		char pr;							// the input by user to choose making a calulation or not.
		char op;							// the input operator by user.
		double result;							// the final output result after proceeding the calulations.

		cout << "do you want to perform a calculation?? (y/n):" << endl;						// prompt the user to choose whether start or end the program.
		cin >> pr;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');						// Critical: Clears the leftover newline character from the input buffer. Without this, subsequent 'cin' calls could misbehave.
		if (pr == 'n' || pr == 'N')											// if statement to apply user's urge to end the program.
		{
			break;													// break the loop if the user choosed 'n or N'.
		}

		while (true)													// starting a while loop for the first number.
		{
			cout << "Enter the first number: " << endl;
			cin >> x;
			if (std::cin.fail())											// if statement in case the user input is not the same as the type we declared.
			{
				cout << "Invalid input, Please input a number!" << endl;
				std::cin.clear();										// clear error flags in 'cin' after the invalid user input.
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');				// discard the invalid input and start in new line.
				continue;											// continue the loop from the start "ask for the first number".
			}

			else									
			{
				std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');					// clear the input buffer after picking the successful input type.
				break;												// break the loop if it's true.
			}
		}
		while (true)													// starting a while loop for choosing an operation to calculate.
		{
			cout << "Enter operator (+, -, *, /, !, ^)" << endl;
			cin >> op;
			std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			if (cin.fail())
			{
				cout << "Invalid operator input!, Please select a valid operator" << endl;			// if the user choosed invalid operator.
				cin.clear();
			}

			else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '!' || op == '^')
			{
				break;												// if true: breaks the loop and proceed to the second number.
			}

			else
			{
				cout << "Please insert the on screen opeerators in order to continue your operation." << endl;	//handles invalid operators.
			}
		}

		//-------starting a conditional loop-------.
		// this loop prevents asking for 'y' input in the factorial case.	

		if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^')
		{
			while (true)
			{
				cout << "Enter the second number: ";
				cin >> y;
				if (cin.fail())
				{
					cout << "Invalid input, Please enter a number" << endl;
					cin.clear();
					std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}

				else
				{
					std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
					break;
				}
			}
		}

		// perform the calculation based on the selected operator using (switch case).

		switch (op)													// starting switch statement based on the 'op' choise.
		{

		case '+':
			result = x + y;
			cout << x << "+" << y << "=" << result << endl;
			break;

		case '-':
			result = x - y;
			cout << x << "-" << y << "=" << result << endl;
			break;

		case '*':
			result = x * y;
			cout << x << "*" << y << "=" << result << endl;
			break;

		case '/':
			result = x / y;
			if (y == 0)												// preventing devision by zero with an acceptable error message.
			{
				cout << "Error devision by zero!" << endl;
			}
			else
			{
				cout << x << "/" << y << "=" << result << endl;
			}
			break;

		case '^':
			if (y != static_cast<int>(y))										// IMPORTANT: Check if 'y' has any decimal part. We use static_cast to truncate 'y', then compare it to the original. If they differ, it means 'y' was not a whole number.
			{
				cout << "Error! power calculation only supports integer exponants." << endl;
			}
			else
			{
				result = calculatePower(x, static_cast<int>(y));						// recalling our power function to do it's job.
				cout << x << "^" << static_cast<int>(y) << "=" << result << endl;
			}
			break;

		case '!':
			if (x < 0 || x != static_cast<int>(x))									// this 'if' block specifically ensures that factorial is only attempted on non-negative integers.
			{
				cout << "Error!, Factorial is only defined by non-negative integers." << endl;
			}
			else
			{
				result = fact(static_cast<int>(x));								// recalling our factorial function.
				cout << static_cast<int>(x) << "! =" << result << endl;
			}
			break;

		default:

			cout << "An Unexpexted Error Ocurred With The Operator." << endl;					// anything that is out of the code scenario print this message.

			break;
		}														// end switch cse statement.
	
}																// end the main loop.				
return 0;															// close the program.
}																// end the main function.
