#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<< "    Guess the Number!"<< endl;
    cout << "Guess a Number between 1 to 100"<< endl;

    srand(time(0));
    int Number = 1 + (rand() % 100);
    int guess;
    cout<<"You have 7 choices to guess the Number"<<endl;
    int guess_left = 7;
    for(int i = 1; i<= 7 ; i++){
        cout<< "Enter a Number : "<<endl;
        cin>>guess;

        if(guess == Number){
            cout<<"You won!!!!"<<endl;
            break;
        }
        else{
            cout<<"No ! It is not the right Number"<<endl;
            if(guess > Number){
                cout<<"The number is smaller than the number you have guessed !"<<endl;
            }
            else{
                cout<<"The number is bigger than the number you have guessed !" <<endl;
            }
            guess_left--;
            cout<< guess_left<<" guesses left"<<endl;
            if(guess_left==0){
                cout<< "You lose !"<<endl;
                cout<< "Try again to win"<< endl;
            }
        }

    }
    return 0;
}