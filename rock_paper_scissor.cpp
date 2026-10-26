#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string moves[] = {"rock", "paper", "scissor"};

string get_user_move(){
    
    string user;
    
    cout << "Choose a move:";
    cin >>  user;
    return user;
}

string bot_move(){
    
    string bot;
    
    bot = moves[rand() % 3];
    
    return bot;
}

void game(){
    
    string user = get_user_move();
    string bot = bot_move();

    cout << "User: " << user << '\n';
    cout << "Bot: " << bot << '\n';
    
    if(user=="rock" && bot=="scissor"){cout<< "User win\n";}
    else if(user=="scissor" && bot=="paper"){cout<< "User win\n";}
    else if(user=="paper" && bot=="rock"){cout<< "User win\n";}
    else if(user==bot){cout<< "Tie\n";}
    else{cout<< "Bot win\n";}
    
}

int main()
{
    srand(time(nullptr));
    bot_move();
    game();
    
    return 0;
    
}
