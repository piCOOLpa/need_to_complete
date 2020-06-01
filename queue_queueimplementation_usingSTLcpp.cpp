// queue_implementation_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>

using namespace std; 
int main()
{
    cout << "implement the queue using STL \n";
    queue<int> bank_queue;

    int choice; 

    // menu driven program to implement the queue and its properties 
    cout << "choice of the menu :\n";
    cout << "enter 1 : check if the queue is empty \n";
    cout << "enter 2 : get the current size of the queue  \n";
    cout << "enter 3 : get the front and back referance of the queue\n";
    cout << "enter 4 : push an element to the queue \n";
    cout << "enter 5 : pop the element from the queue\n";
    cout << "Press 6 to exit\n";
    cout << "enter the choice : ";
    cin  >> choice;
    while (choice != 6)
    {
        // Display the result 
        switch (choice) {
        case 1: {
            bool isempty = 0;
            if (isempty)
            {
                cout << "the queue is empty \n";
            }
            else {
                cout << "the queue is not empty \n";
            }
            break;
                }
        case 2: {
            cout << "Difference is " << (a - b) << "\n";
            break;
        }
        case 3: {
            cout << "Product is " << (a * b) << "\n";
            break;
        }
        case 4: {
            cout << "Division is " << (a / b) << "\n";
            break;
        }
        case 5: {
            cout << "GCD is " << __gcd(a, b) << "\n";
            break;
        }
        case 6: {
            cout << "LCM is "
                << ((a * b) / __gcd(a, b))
                << "\n";
            break;
        }
        case 7: {
            cout << "Thank you\n";
            break;
        }
        default:
            printf("Wrong Input\n");
        }
    }

}

