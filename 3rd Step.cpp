/* My name: Mohammed Kamal
   Class: 2nd
   Department: Computer Engineering */

/* starting via including input-output stream 
 * that handles read and write operations, and cstring 
 * to keep character data in a cstringData object */ 
#include <iostream>
using namespace std;
// using preprocessor function to find the largest of the numbers
// passed to it, it is useful for non constants.
#define MAX 10
// using a class name that contains details of a student
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
        float avg;
// used access specifier to declare what can be viewed or not outside
// the class, as for members or public availability
    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
// using void to declare that the function returns nothing
};
 
// member function definition, outside of the class
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks out of 800: ";
    cin >> total;
     
    perc=(float)total/800*100;
    avg=(float)total/8;
}
 
// member function definition, outside of the class
void student::putDetails(void){
    cout << "\nStudent details:\n";
    cout << "Name: "<< name << "\nRoll Number: "<< rollNo << "\nTotal: " << total << "\nAverage: " << avg << " Points" << "\nPercentage: " << perc << "%" << endl;
}
// our function needs to return value at the end of the execution
int main()
{
    student std[MAX];
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
// using for loop to repeat input for storing students details
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }

    cout << endl;
    
// another loop to repeat showing students details     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
// returning value for int main() to declare the process succeeded
    return 0;
}
