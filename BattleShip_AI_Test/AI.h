/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AI.h
 * Author: Brandon
 *
 * Created on October 15, 2016, 9:26 PM
 */

#ifndef AI_H
#define AI_H

#include <vector>
#include <string>

using namespace std;

class AI {
public:
    AI();
    AI(const AI& orig);
    //virtual ~AI();
    string fire();
    string getLastMove(){return lastMove;}
    void setHit(string hit);
private:
    int possMovesLeft;
    vector<string> possMoves;
    char getLetter(int x);
    void randomMoves();
    void fillMoves();
    string int2String(int x);
    vector<string> hits;
    string lastMove;
    bool shipFound;

};

#endif /* AI_H */

