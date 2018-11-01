#include <iostream>
// Library needed to get a random seed
#include <time.h>

int main() {
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand( time(NULL) );
    int guess,bet, balance;
    balance = 500;
    std::cout <<"$$$$$$$$$$$$$$$ WELCOME TO MONEY STORE   $$$$$$$$$$$$$$$"<<std::endl;
    std::cout <<"                                                        "<<std::endl;
    
   
    while (balance>0)
    {
        std::cout << "money available to play dollar games "<< balance <<std::endl;
         // Picks either 0 or 1 randomly with equal probablilty	
        // CAN BE RUN AS MANY TIMES AS NEEDED
        int random = rand() % 2;
        std::cout << random;
        
        std::cout <<"choose 0 or 1 to play"<<std::endl;
        std::cin >>guess;
        if (guess != 0 && guess !=1){
            std::cout <<"you don't have enough money to play"<<std::endl;
            break;
        }

        std::cout <<"enter how much you want to bet: "<<std::endl;
        std::cin >>bet;

        balance = balance - bet;
        
     
     
        if (guess==random)
        {
            std::cout <<"You win and your amount become double"<<std::endl;
            balance=bet*2+balance;
        }

        else
        {
            std::cout <<"you loose"<<std::endl;

        }

    }
    std::cout <<"you quit"<<std::endl;
    

    return 0;
}