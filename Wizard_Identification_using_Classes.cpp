/*==========================================================

 Title:       Assignment 7 - Wizard Identification using Classes
 Course:      CIS 2252
 Author:      <mohammed tanvvir>
 Date:        <8 /7 /23 >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
using namespace std;

class Wizard{
private:
    int wizardAge;
    string wizardFirstName;
    string wizardLastName;
    int wizard_ID;
    
public:
    void set_wizardAge(int age) {
        wizardAge = age;
    }
    
    void set_wizardFirstName(string firstName) {
        wizardFirstName = firstName;
    }
    
    void set_wizardLastName(string lastName) {
        wizardLastName = lastName;
    }
    
    void set_wizard_ID(int id) {
        wizard_ID = id;
    }
    
    
    int get_wizardAge() {
        return wizardAge;
    }
    
    string get_wizardFirstName() {
        return wizardFirstName;
    }
    
    string get_wizardLastName() {
        return wizardLastName;
    }
    
    int get_wizard_ID() {
        return wizard_ID;
    }
};



int main() {
//DO NOT MODIFY THE MAIN()!!!!
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
    wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
    
    return 0;
}
