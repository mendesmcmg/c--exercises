// Read three values (variables A, B and C), which 
//are the three student's grades. Then, calculate the
// average, considering that grade A has weight 2, 
//grade B has weight 3 and the grade C has weight 5. 
//Consider that each grade can go from 0 to 10.0, 
//always with one decimal place.

// Input
// The input file contains 3 values of floating points
// with one digit after the decimal point.

// Output
// Print the message "MEDIA"(average in Portuguese) 
//and the student's average according to the following
// example, with a blank space before and after the 
//equal signal.

//INPUT
//5.0
//6.0
//7.0

//OUTPUT
//MEDIA = 6.3

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float A;
    float B;
    float C;
    float average;

    cin >> A;
    cin >> B;
    cin >> C;

    average = ((A*2)+(B*3)+(C*5))/10;

    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;

    return 0;
}