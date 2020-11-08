/* My name: Mohammed Kamal
   Class: 2nd
   Department: Computer Engineering */

/* starting via including input-output stream 
 * that handles read and write operations, and cstring 
 * to keep character data in a cstringData object */
#include <iostream>
#include <cstring>
// using the namespace named std for our variables and functions
using namespace std;
// using structure to record to define grouped list of variables
struct student
// defining our variables */
{
    char name[50];
    char dep[50];
    int roll;
    float marks;
} s[5];
/* telling our function to return some integer at the 
 * end of the execution */
int main() 
{
	cout << "Enter information: " << endl;
	// using for loop as a repetition control structure
    for(int i = 0; i < 5; ++i)
    {
		cout << "\nEnter name: ";
		cin >> s[i].name;
		cout << "Enter section: ";
		cin >> s[i].dep;
		cout << "Enter University ID number: ";
		cin >> s[i].roll;
		cout << "Enter marks: ";
		cin >> s[i].marks;
	}
		// declared our inputs and outputs as you can see
		cout << "\nDisplaying Information: " << endl;
		for(int i = 0; i < 5; ++i)
		{
			cout << "\nName: " << s[i].name << endl;
			/* using if condition to return a specific character 
			* in a specific condition */
			if (strcmp(s[i].dep, "A") == 0) {
			cout << "Section: Control Engineering";
			}
			/* strcmp being used to track entered characters 
			* so that it meets if condition or not */
			if (strcmp(s[i].dep, "T") == 0) {
			cout << "Section: Telecomunication Engineering";
			}
			if (strcmp(s[i].dep, "C") == 0) {
			cout << "Section: Computer Engineering";
			}
			cout << "\nUniversity ID Number: " << s[i].roll << endl;
			// using if condition to bind entered marks with the grade
			if (s[i].marks >= 90 && s[i].marks <= 100) {
			cout << "Your Grade is A";
			}
			// using && to check a number between two ranges
			if (s[i].marks >= 80 && s[i].marks <= 89) {
			cout << "Your Grade is B";
			}
			if (s[i].marks >= 70 && s[i].marks <= 79) {
			cout << "Your Grade is C";
			}
			if (s[i].marks >= 60 && s[i].marks <= 69) {
			cout << "Your Grade is D";
			}
			if (s[i].marks >= 50 && s[i].marks <= 59) {
			cout << "Your Grade is F";
			}
		}
	/* returing zero means success, thus, program is terminated
	* but it can run without it, depending on your POV */
    return 0;
}
