#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "**************************************" << endl;
    cout << "* Welcome to the Guessing Game! *" << endl;
    cout << "**************************************" << endl;

    const int SECRET_NUMBER = 42;
    bool didnotHit = true;
    int attempts = 0;

    double points = 1000.0;

    do
    {
        int guess;
        attempts++;

        cout << "Tentativa " << attempts << endl;
        cout << "What is your guess? ";
        cin >> guess;
        cout << "The guess value is: " << guess << endl;

        double lostPoints = abs(guess - SECRET_NUMBER) / 2.0;
        points = (points - lostPoints);

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
    cout << "Você acertou o número secreto em " << attempts << " tentativas" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuação foi de " << points << " pontos." << endl;

    return 0;
}