// NumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int value = (rand() % 100) + 1;
    bool userFeedback = true;
    int guess = 0;
    char feedback = 'Y';
    while (userFeedback) {
        std::cout<<"Enter a number between 1 and 100"<<std::endl;
        std::cin >> guess;
        if (guess > value) {
            std::cout << "That number is too high, try again"<<std::endl;
        }
        else if(guess < value) {
            std::cout << "That number is too low, try again" << std::endl;
        }
        else {
            std::cout << "That is correct, good work! (: Do you want to play again? (Y=Yes,N=No)" << std::endl;
            std::cin >> feedback;
            if (feedback == 'Y' || feedback == 'y') {
                value = (rand() % 100) + 1;
            }
            else {
                userFeedback = false;
            }
            
        }
    }
    std::cout << "Have a great day! Come again!";
    exit;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
