// # Reflection

// - When using cin and getline together, note to that newline could be consumed by
//   getline too.

// - Don't forget how to print out decimal point with setprecision

// # Problem

// Objective
// Today, we're discussing data types. Check out the Tutorial tab for learning
// materials and an instructional video!
//
// Task
// Complete the code in the editor below. The variables , , and  are already
// declared and initialized for you. You must:
//
// Declare  variables: one of type int, one of type double, and one of type String.
// Read  lines of input from stdin (according to the sequence given in the Input
// Format section below) and initialize your  variables.
// Use the  operator to perform the following operations:
// Print the sum of  plus your int variable on a new line.
// Print the sum of  plus your double variable to a scale of one decimal place on
// a new line.
// Concatenate  with the string you read as input and print the result on a new line.

// # Initial solution

// Declare second integer, double, and String variables.
int a;
double b;
string c;

// Read and save an integer, double, and String to your variables.
cin >> a >> b;
cin.ignore();
getline(cin, c);

// Print the sum of both integer variables on a new line.
cout <<i + a << '\n';

// Print the sum of the double variables on a new line.
cout << fixed << setprecision(1) << d + b << '\n';

// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
cout << s + c << '\n';


// # Improved solution
