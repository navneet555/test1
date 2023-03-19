#include <iostream>
#include <string>
#include "game.h"
#include "helper.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

void Choice (int choice){
    if (choice == 1){
    cout << " Playing Game... "<< endl;
    cout << "---------------------" << endl;
}
    else if (choice == 2){
    cout << "---------------------" << endl;
    cout << " Name: Navneet Sujith"<< endl;
    cout << " ID: s3791635"<< endl;
    cout << " Email: s3791635@student.rmi.edu.au "<< endl;
    cout << "---------------------" << endl;
}
    else if (choice == 3){
    cout << "Terminating Program" << endl;
        exit (0);
    }
    else{
        cout << "Invalid choice. Please try again." << endl;
    }
}

void showStudentInformation(string name, string id, string email){
    name = "Navneet Sujith";
    id = "s3791635";
    email = "s3791635@student.rmit.edu.au";
}

int main(){
    int choice;
    do
    {   
        cout << " Welcome to Car Board" << endl;
        cout << "---------------------" << endl;
        cout << "1. Play Game" <<endl;
        cout << "2. Show Student's information" << endl;
        cout << "3. Quit" << endl;
        cout << "Please enter your choice: " << endl;
        cin >> choice;
        if (! cin)
        {  cout << "Invalid choice. Please try again." << endl;
            cin.fail();
            cin.clear();
            cin.ignore ();
            main();
        }
        else
        {Choice (choice);
        }
    }
    while (choice != 3);
    std::cout << "Good bye!\n\n";

    return EXIT_SUCCESS;
} 
    
    


