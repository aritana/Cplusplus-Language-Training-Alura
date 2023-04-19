#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "**************************************" << endl;
    cout << "* Welcome to the Guessing Game! *" << endl;
    cout << "**************************************" << endl;

    cout << "Escolha o seu nível de dificuldade" << endl;
    cout << "FÁCIL (F), Médio (M), difícil (D)" << endl;

    char level;
    cin >> level;

    int numberOfAttempts;

    if (level == 'F')
    {
        numberOfAttempts = 15;
    }
    else if (level == 'M')
    {
        numberOfAttempts = 10;
    }
    else
    {
        numberOfAttempts = 5;
    }

    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;

    int attempts = 0;
    double points = 1000.0;
    bool hit = false;

    for (attempts = 1; attempts <= numberOfAttempts; attempts++)
    {
        int guess;

        cout << "Tentativa " << attempts << endl;
        cout << "What is your guess? ";
        cin >> guess;
        cout << "The guess value is: " << guess << endl;

        double lostPoints = abs(guess - SECRET_NUMBER) / 2.0;
        points = (points - lostPoints);

        hit = (guess == SECRET_NUMBER);
        bool greater = (guess > SECRET_NUMBER);

        if (hit)
        {
            cout << "Congratulations! You guessed corretly!" << endl;
            break;
        }
        else if (greater)
        {
            cout << "You guess is greater than the secret number!" << endl;
        }
        else
        {
            cout << "You guess is less than the secret number!" << endl;
        }
    }

    cout << "Fim de Jogo!" << endl;

    if (!hit)
    {
        cout << "Você perdeu, tente novamente!" << endl;
    }
    else
    {
        cout << "Você acertou o número secreto em " << attempts << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << points << " pontos." << endl;
    }

    return 0;
}