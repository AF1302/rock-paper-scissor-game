#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string moves[] = {"rock", "paper", "scissor"};

std::string get_user_move(){
    
    std::string user;
    
    std::cout << "Choose a move:";
    std::cin >>  user;
    return user;
}

std::string bot_move(){
    
    std::string bot;
    
    bot = moves[rand() % 3];
    
    return bot;
}

void game(){
    
    std::string user = get_user_move();
    std::string bot = bot_move();

    std::cout << "User: " << user << '\n';
    std::cout << "Bot: " << bot << '\n';
    
    if(user=="rock" && bot=="scissor"){std::cout<< "User win\n";}
    else if(user=="scissor" && bot=="paper"){std::cout<< "User win\n";}
    else if(user=="paper" && bot=="rock"){std::cout<< "User win\n";}
    else if(user==bot){std::cout<< "Tie\n";}
    else{std::cout<< "Bot win\n";}
    
}

int main()
{
    srand(time(nullptr));
    bot_move();
    game();
    
    return 0;
    
}
