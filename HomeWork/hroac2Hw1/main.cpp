

#include <iostream>
using namespace std;
 /*
 CSC376 - Assignment 1 - Problem 1
 Author: Hannah Roach
 Date: 9/2/2018

Problem 1: (5 points) Write a C++ program that inputs three numbers and multiplies them. The output
should appear as shown below. Your name should replace mine.
 */

/*
int main() {
    cout << "Input your height(cm):" << endl;
    int height;
    cin >> height;

    cout << "Input your width(cm):" << endl;
    int width;
    cin >> width;

    cout << "Input your depth(cm):" << endl;
    int depth;
    cin >> depth;

    int volume;
    volume = height*width*depth;
    std::cout << "Hello, Hannah Roach!" << std::endl;
    std::cout << "You require " << volume << " cubic centimeters on this earth!" << std::endl;
    return 0;
}
*/

/*
 CSC376 - Assignment 1 - Problem 2a.
 Author: Hannah Roach
 Date: 9/2/2018

Problem 2a: (8 points Write a C++ program that inputs the length and width of two rectangles (in
integers) representing a house and a garage. Write a function that uses Call-by-Value
int rectArea (int len, int wid) that returns the area of a rectangle with length len and width wid. Divide
the area of the garage by the area of the house and multiply by 100 to determine the percentage (int).
Enter your name as a Global variable and all other variables should be local variables in main or
rectArea.
*/

/*
string name = "Hannah Roach";

int rectArea(int len, int wid)
{
    int area;
    area = len*wid;
    return area;
}

int main() {

    int length_of_house, width_of_house;
    int length_of_garage, width_of_garage;
    int area_of_house, area_of_garage;
    int percent;

    cout << "Length of House (ft):" << endl;
    cin >> length_of_house;

    cout << "Width of House (ft):" << endl;
    cin >> width_of_house;

    cout << "Length of Garage (ft):" << endl;
    cin >> length_of_garage;

    cout << "Width of Garage (ft):" << endl;
    cin >> width_of_garage;


    area_of_house = rectArea(length_of_house, width_of_house);
    std::cout << "The house is " << area_of_house<< " square feet" << std::endl;

    area_of_garage = rectArea(length_of_garage, width_of_garage);
    std::cout << "The garage is " << area_of_garage<< " square feet" << std::endl;

    percent = 100*area_of_garage/area_of_house;
    std::cout << name <<"'s garage is " << percent << " percent of her house" << std::endl;

    return 0;
}
*/

/*
 CSC376 - Assignment 1 - Problem 2b.
 Author: Hannah Roach
 Date: 9/2/2018

Problem 2b: (7 points) Draw the memory and run-time stack when rectArea is called. This should look
similar to Fig 2.17g in the textbook and ALL of your variable names should be shown including name.
Remember, local variables are stored on the stack and global variables are stored in fixed memory. You
may hand draw & scan or use Paint or Visio or Googledraw, etc to create this and paste into your
document.
*/


/*
 CSC376 - Assignment 1 - Problem 3a.
 Author: Hannah Roach
 Date: 9/2/2018

Problem 3a: (8 points) Write a C++ program that inputs the length, width, & height (in integers) of a
house. Write a function that uses Call-By-Reference
void rect (int& ar, int& vl, int len, int wid, int hgt) that computes the area ar and the volume vl of the
house.
Enter your name as a Global variable and all other variables should be local variables in main o rrect.
*/

/*
string name = "Hannah Roach";

int area_of_house;
int volume_of_house;

void rect(int& ar, int& vl, int len, int wid, int hgt)
{
    volume_of_house = len*wid*hgt;
    area_of_house = len*wid;
    std::cout <<name<<" has a house with " << area_of_house << " square feet that contains " << volume_of_house << " cubic feet" << std::endl;
}

int main() {

    int length_of_house,  width_of_house, height_of_house;

    cout << "Length of House (ft):" << endl;
    cin >> length_of_house;

    cout << "Width of House (ft):" << endl;
    cin >> width_of_house;

    cout << "Width of House (ft):" << endl;
    cin >> height_of_house;

    rect(area_of_house, volume_of_house, length_of_house, width_of_house, height_of_house);

    return 0;
}
*/

/*
 CSC376 - Assignment 1 - Problem 3b.
 Author: Hannah Roach
 Date: 9/2/2018

Problem 3b: (7 points) Draw the memory and run-time stack when rect is called. This should look similar
to Fig 2.21c in the textbook and ALL of your variable names should be shown including name.
Remember, local variables are stored on the stack and pointers will have arrows. You may hand draw &
scan or use Paint or Visio or Googledraw, etc to create this and paste into your document.
*/


/*
 CSC376 - Assignment 1 - Problem 4a.
 Author: Hannah Roach
 Date: 9/2/2018

Problem 4a: (8 points) Write a recursive C++ program to solve the following problem :
P(1) = 3
P(2) = 4
P(n) =P(n-1)+P(n-2) for n>2
To test – output for P(4)=11 P(6) = 29 and P(7) =47
Hint: main shall call a function int par(int n) that returns 3 if n=1, it returns 4 if n = 2, and it returns
par(n-1) + par(n-2) if n>2. If you have not had CSC385 and need more help to understand this, email me
separately.
*/

/*
int num = 5;

int fact(int n)
{
    if(n<=1)
    {
        return 3;
    }

    if(n<=2)
    {
        return 4;
    }

    else
    {
        n = fact(n-1) + fact(n-2) ;
        return n;
    }
}

int main ()
{
    cout << "Hannah Roach shows P(5) has " << fact(num) << " units"<< endl;
    return 0 ;
}
*/


/*
 CSC376 - Assignment 1 - Problem 4b.
 Author: Hannah Roach
 Date: 9/2/2018

Problem 4b: (7 points) Draw a call tree for P(5). This should look similar to Figure 2.30 in the textbook.
Note: the numbers just above the ovals are the return values. You may hand draw & scan or use Paint or
Visio or Googledraw, etc to create this and paste into your document.
 */
