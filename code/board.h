#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "block.h"
#include "cell.h"
#include "level.h"

class Board {
    public:
    int boardNo;
    int idx = 0;
    int score = 0;
    int topScore = 0;
    int levelNo = 0; //TODO: is the default level set to 0?
    std::string file;
    bool is_playing ;//true means this player is playing. false means the other player is playing
    const int rows = 18;
    const int cols = 11;
    bool random = false; // random is the random switch, default to false which is off.
    char specialAction = 'N'; // default N means None, can be replaced with B/H/F
    bool gameOver = false; // game is still going, neither won nor over.
    std::unique_ptr<Block> currBlock;
    std::unique_ptr<Block> nextBlock;
    std::vector<std::vector<Cell>> theBoard;
    Level0 level0;
    Level1 level1;
    Level2 level2;
    Level3 level3;
    // Level4 level4;

    bool blind = false;
    bool heavy = false;
    bool force = false;
    std::vector<std::unique_ptr<Block>> theBlock;
    

    Board(int n, std::string file);
    void levelUp();
    void levelDown();
    void left();
    void right();
    void down();
    void drop(int *rowsRemoved = nullptr);
    void rot_cw();
    void rot_ccw();
    bool isMoveValid(char c);
    bool checkTemp(std::vector<Posn> temp);// checking if rotation is valid
    // void randomSwitch();
    void rowDelete();
    void mutateBlock();
    void init(); // initialize currBlock and nextBlock
    // void blind();
    // void heavy();
    // void force();

    bool inVec(std::vector<int> vct, int a);
    int NumType();
    void rowInit(int row);
    void copyRowAndChange(int row1);
    void upperCellDown(int row);
    int scoreAndChange(int originLevel);

};

#endif
