#include <iostream>

using namespace std;

int main()
{
   // Added block of code to show changes made to code after
   // cloning the code and modifying then uploading it back
   // to github using git
   cout << "Line of code added to show modification made to original code"<< "\n";


   int choice;

   cout << "select you order: 1 For Coffee ; 2 for Tea "<<"\n";


   cin >> choice;

   switch (choice) {
    case 1:
     cout<< "Order is coffee";
     break;

    case 2:
        cout<< "Order is tea" ;
        break;

    default:
        cout<< "Order not found" ;
   }

    return 0;
}
