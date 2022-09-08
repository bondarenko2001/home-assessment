#include <iostream>
using namespace std;

int main()
{
    // 1. Loops (for/while/do while)
    // 1.1.0 Write a program that prints your name 8 times.


 int a=1;
 while(a<=8)
 { 
  a++;
  cout<<"Iryna"<<endl;
 }

//     // 1.1.2 Write a program that prints integer numbers in the range 0 to 100.

int number = 1;
	
	while(number <= 100)
	{
		cout << number << endl;
		number = number + 1;
	}

    // 1.1.3 Write a program that prints integer numbers in the range -10 to 10.

int number1 ;
	
	for(number1 = -10; number1 <= 10; number1++)
	{
		cout << number1 << endl;
	}


//     // 1.1.4 Write a program that prints integer numbers in the range -100 to 100.

    int number2 ;
	
	for(number2 = -100; number2 <= 100; number2++)
	{
		cout << number2 << endl;
	}

    
    // 2.1 Write a program that accepts a positive integer N from the user. 
    // Make sure that the user enters exactly a positive number. 
    // After that - sum up a series of numbers from 0 to the entered number N (0 + 1 + 2 + … + N). 
    // For example, if user enter 3 (N = 3), program must print your 6, what means 1+2+3. 
    // You must use for loop.
    
    // paste your code here 
    
     int n;
    long factorial = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial += i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
    
    
    // 2.2 Rewrite previous program using while loop! 
    
  int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0) {
  
        sum += number;

        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "\nThe sum is " << sum << endl;

    return 0;
}
