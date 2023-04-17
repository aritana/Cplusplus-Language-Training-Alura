#include <iostream>
using namespace std;

int main()
{
    cout << "**************************************" << endl;
    cout << "* Welcome to the Guessing Game! *" << endl;
    cout << "**************************************" << endl;

    const int SECRET_NUMBER = 42;
    bool didnotHit = true;
    int attempts = 0;

    do
    {
        int guess;
        attempts++;
        cout << "Tentativa " << attempts << endl;

        cout << "What is your guess? ";
        cin >> guess;
        cout << "The guess value is: " << guess << endl;

        bool hit = (guess == SECRET_NUMBER);
        bool greater = (guess > SECRET_NUMBER);

        if (hit)
        {
            cout << "Congratulations! You guessed corretly!" << endl;
            didnotHit = false;
        }
        else if (greater)
        {
            cout << "You guess is greater than the secret number!" << endl;
        }
        else
        {
            cout << "You guess is less than the secret number!" << endl;
        }
    } while (didnotHit);

    cout << "Fim de Jogo!" << endl;
    cout << "Você acertou o número secreto em" << attempts << " tentativas" << endl;

    return 0;
}