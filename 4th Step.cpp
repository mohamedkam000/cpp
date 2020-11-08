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
    float mat;
    float mat1;
    float mat2;
    float mat3;
    float mat4;
    float mat5;
    float mat6;
    float mat7;
    float sum;
    float avg;
} s[10];
/* telling our function to return some integer at the 
 * end of the execution */
int main() 
{
	cout << "Enter information: " << endl;
	// using for loop as a repetition control structure
    for(int i = 0; i < 10; ++i)
    {
		if (i < 10)
		{
			do
			{
				cout << "\nEnter name: ";
				cin >> s[i].name;
// using do while loop to repeat input process until it is breaked
				cout << "Enter section: ";
				cin >> s[i].dep;
				cout << "Enter University ID number: ";
				cin >> s[i].roll;
				cout << "1st Material Marks: ";
				cin >> s[i].mat;
				cout << "2nd Material Marks: ";
				cin >> s[i].mat1;
				cout << "3rd Material Marks: ";
				cin >> s[i].mat2;
				cout << "4th Material Marks: ";
				cin >> s[i].mat3;
				cout << "5th Material Marks: ";
				cin >> s[i].mat4;
				cout << "6th Material Marks: ";
				cin >> s[i].mat5;
				cout << "7th Material Marks: ";
				cin >> s[i].mat6;
				cout << "8th Material Marks: ";
				cin >> s[i].mat7;
				i = i + 1;
				if (i > 9) {
					break;
				}
			} while (i < 5);
			cout << endl;
		}
	}
		// declared our inputs and outputs as you can see
		cout << "\nDisplaying Information: " << endl;
		for(int i = 0; i < 10; ++i)
		{
			cout << "\nName: " << s[i].name << endl;
			/* using if condition to return a specific character 
			* in a specific condition */
			if (strcmp(s[i].dep, "A") == 0) {
			cout << "Section: Control Engineering";
			}
			/* strcmp being used to track entered characters 
			* so that it meets if condition or not */
			else if (strcmp(s[i].dep, "T") == 0) {
			cout << "Section: Telecomunication Engineering";
			}
			else if (strcmp(s[i].dep, "C") == 0) {
			cout << "Section: Computer Engineering";
			}
			else {
				cout << "Section: " << s[i].dep;
			}
			cout << "\nUniversity ID Number: " << s[i].roll << endl;
			// defining avrage and sum for materials
			s[i].sum = s[i].mat + s[i].mat1 + s[i].mat2 + s[i].mat3 + s[i].mat4 + s[i].mat5 + s[i].mat6 + s[i].mat7;
			s[i].avg = s[i].sum / 8;
			// using if condition to bind entered marks with the grade
			if (s[i].avg >= 90 && s[i].avg <= 100) {
			cout << "Your marks are: " << s[i].sum << "\nGrade: A\n";
			}
			// using && to check a number between two ranges
			else if (s[i].avg >= 80 && s[i].avg <= 89) {
			cout << "Your marks are: " << s[i].sum << "\nGrade: B\n";
			}
			else if (s[i].avg >= 70 && s[i].avg <= 79) {
			cout << "Your marks are: " << s[i].sum << "\nGrade: C\n";
			}
			else if (s[i].avg >= 60 && s[i].avg <= 69) {
			cout << "Your marks are: " << s[i].sum << "\nGrade: D\n";
			}
			else if (s[i].avg >= 50 && s[i].avg <= 59) {
			cout << "Your marks are: " << s[i].sum << "\nGrade: F\n";
			}
			else {
				cout << "\nGrade Not Available\n";
			}
		}
	/* returing zero means success, thus, program is terminated
	* but it can run without it, depending on your POV */
    return 0;
}
