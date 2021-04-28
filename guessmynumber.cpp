#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); //seed random number generator
    cout << "Guess My Number Game\n\n"; //извеждме на потребителя "задачата"
    int from, to; //въвеждаме променливи from и to, които да са крайните стойности
    cout<<"The number is between which numbers?\n"; //извеждаме въпрос
    cin>>from>>to; //питаме потребителя какви да са крайните стойности
    int num = rand() % (to-from+1)+from; // random number between from and to
    int guess = 0; //въвеждаме променлива guess със стойност 0
    int tries = 0; //въвеждаме променлива, която накрая ще каже колко опита е направил потребителят
    cout<<"Enter a guess number.\n"; //... извеждаме съобщение, в което подканваме потребителя да въведе число
    cout<<"If you want to stop the game, you can type 0.\n"; //казваме на потребителя, че може да спре играта, ако въведе 0
    while (guess != num) { //докато guess не е равно на нашето предположение...
        cin>>guess; //питаме потребителя за неговото предположение
        if (guess==0){
            cout<<"You stopped the game."; //извеждаме съобщение
            break;
        }
        if (guess > num) {
            cout << "Too high!\n\n"; //извеждаме съобщение, че числото, въведено от потребителя, е по-високо от нашето число
            tries++;
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n"; //извеждаме съобщение, че числото, въведено от потребителя, е по-ниско от нашето число
                tries++;
            }
        else { 
            cout << "\nCorrect! You got it in. "; //извеждаме съобщение, че потребителят е познал числото
            cout<<"You tried "<<tries+1<<" times to guess the number."; //извеждаме броя на опитите, като добавяме 1 за самия опит, в който е познал
        }
    }

    return 0;
}