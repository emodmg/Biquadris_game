#include "level.h"
#include "block.h"

char Level0::whatBlock() {
    char blockType;
    if (boardNo == 1) {
        iss1 >> blockType;
    }
    if (boardNo == 2) {
        iss2 >> blockType;
    }

    if (blockType == 'I') { return 'I'; }
    if (blockType == 'J') { return 'J'; }
    if (blockType == 'L') { return 'L'; }
    if (blockType == 'O') { return 'O'; }
    if (blockType == 'S') { return 'S'; }
    if (blockType == 'Z') { return 'Z'; }
    if (blockType == 'T') { return 'T'; }
    return 'F'; // 'F' means false
}

std::unique_ptr<Block> Level0::createBlock() {
    char c = whatBlock();
    if (c == 'I') {
        return std::make_unique<Iblock>();
    } else if (c == 'J') {
        return std::make_unique<Jblock>();
    } else if (c == 'L') {
        return std::make_unique<Lblock>();
    } else if (c == 'O') {
        return std::make_unique<Oblock>();
    } else if (c == 'S') {
        return std::make_unique<Sblock>();
    } else if (c == 'Z') {
        return std::make_unique<Zblock>();
    } else {// could be a failing case
        return std::make_unique<Tblock>();
    }
}


char Level1::whatBlock() {
    int blockType = rand() % 12 + 1;
    if (blockType == 1) return 'Z';
    if (blockType == 2) return 'S';
    if (blockType == 3 || blockType == 4) return 'T';
    if (blockType == 5 || blockType == 6) return 'O';
    if (blockType == 7 || blockType == 8) return 'L';
    if (blockType == 9 || blockType == 10) return 'J';
    if (blockType == 11 || blockType == 12) return 'I';
    return 'F';
}

std::unique_ptr<Block> Level1::createBlock() {
    char c = whatBlock();
    if (c == 'I') {
        return std::make_unique<Iblock>();
    } else if (c == 'J') {
        return std::make_unique<Jblock>();
    } else if (c == 'L') {
        return std::make_unique<Lblock>();
    } else if (c == 'O') {
        return std::make_unique<Oblock>();
    } else if (c == 'S') {
        return std::make_unique<Sblock>();
    } else if (c == 'Z') {
        return std::make_unique<Zblock>();
    } else {// could be a failing case
        return std::make_unique<Tblock>();
    }
}


char Level2::whatBlock() {
    int blockType = rand() % 7 + 1;
    if (blockType == 1) return 'Z';
    if (blockType == 2) return 'S';
    if (blockType == 3) return 'T';
    if (blockType == 4) return 'O';
    if (blockType == 5) return 'L';
    if (blockType == 6) return 'J';
    if (blockType == 7) return 'I';
    return 'F';
}

std::unique_ptr<Block> Level2::createBlock() {
    char c = whatBlock();
    if (c == 'I') {
        return std::make_unique<Iblock>();
    } else if (c == 'J') {
        return std::make_unique<Jblock>();
    } else if (c == 'L') {
        return std::make_unique<Lblock>();
    } else if (c == 'O') {
        return std::make_unique<Oblock>();
    } else if (c == 'S') {
        return std::make_unique<Sblock>();
    } else if (c == 'Z') {
        return std::make_unique<Zblock>();
    } else {// could be a failing case
        return std::make_unique<Tblock>();
    }
}



char Level3::whatBlock() {
    int blockType = rand() % 9 + 1;
    if (blockType == 1 || blockType == 8) return 'Z';
    if (blockType == 2 || blockType == 9) return 'S';
    if (blockType == 3) return 'T';
    if (blockType == 4) return 'O';
    if (blockType == 5) return 'L';
    if (blockType == 6) return 'J';
    if (blockType == 7) return 'I';
    return 'F';
}

std::unique_ptr<Block> Level3::createBlock() {
    char c = whatBlock();
    if (c == 'I') {
        return std::make_unique<Iblock>();
    } else if (c == 'J') {
        return std::make_unique<Jblock>();
    } else if (c == 'L') {
        return std::make_unique<Lblock>();
    } else if (c == 'O') {
        return std::make_unique<Oblock>();
    } else if (c == 'S') {
        return std::make_unique<Sblock>();
    } else if (c == 'Z') {
        return std::make_unique<Zblock>();
    } else {// could be a failing case
        return std::make_unique<Tblock>();
    }
}