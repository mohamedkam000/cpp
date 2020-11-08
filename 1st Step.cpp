/* My name: Mohammed Kamal
   Class: 2nd
   Department: Computer Engineering */

/* starting via including input-output stream 
 * that handles read and write operations, and cstring 
 * to keep character data in a CStringData object */
#include <iostream>
#include <cstring>
/* using the namespace named std for our variables and functions */
using namespace std;
/* using structure to record to define grouped list of variables */
struct student
/* defining our variables */
{
    char name[50];
    char dep[50];
    int roll;
    float marks;
};
/* telling our function to return some integer at the 
 * end of the execution */
int main() 
{
    student s;
    cout << "Enter information: " << endl;
    cout << "\nEnter name: ";
    cin >> s.name;
    cout << "Enter section: ";
    cin >> s.dep;
    cout << "Enter University ID number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;
/* declared our inputs and outputs as you can see */
    cout << "\nDisplaying Information: " << endl;
    cout << "Name: " << s.name << endl;
/* using if condition to return a specific character 
 * in a specific condition */
	if (strcmp(s.dep, "A") == 0) {
		cout << "Section: Control Engineering";
	}
/* strcmp being used to track entered characters 
 * so that it meets if condition or not */
	if (strcmp(s.dep, "T") == 0) {
		cout << "Section: Telecomunication Engineering";
	}
	if (strcmp(s.dep, "C") == 0) {
		cout << "Section: Computer Engineering";
	}
    cout << "\nUniversity ID Number: " << s.roll << endl;
    if (s.marks < 100)
    cout << "Student grade: A";
    if (s.marks < 90)
    cout << "Student grade: B";
    if (s.marks < 80)
    cout << "Student grade: C";
    if (s.marks < 70)
    cout << "Student grade: D";
    if (s.marks < 60)
    cout << "Student grade: F";
    /* returing zero means success*/
    return 0;
}
