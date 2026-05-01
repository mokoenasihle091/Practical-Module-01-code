#include <iostream>

using namespace std;

int main()
{
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
