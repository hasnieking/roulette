#ifndef __GAME_H__
#define __GAME_H__

//outside bets
struct Outside {
    long high = 0;
    long low = 0;
    long red = 0;
    long black = 0;
    long even = 0;
    long uneven = 0;
    long blocku = 0;
    long blockm = 0;
    long blockd = 0;
    long coll = 0;
    long colm = 0;
    long colr = 0;
};

class Game {
    public :
        Game(long startmoney, bool europ) : money{startmoney}, money_prev{startmoney}, european{europ}, rounds{0}, outside{} {} //contructor
        ~Game(); //deconstructor
        long getMoney() {return money;}
        int getRounds() {return rounds;}
        void spin(); //spins the wheel and gives/takes money
        long difference(); //difference between money last round and current round

    private :
        long money; //amount of money player has
        long money_prev; //money of previous round
        bool european; // european (0) or american (0, 00) roulette
        int rounds; //amount of played rounds
        Outside * outside; //outside bets
};



#endif