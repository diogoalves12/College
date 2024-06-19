#include "Domino.h"

using namespace std;

bool Piece::can_be_left_to(const Piece& other) const{
    if(right_ == other.left_){
        return true;
    } else {
        return false;
    }
}

bool Piece::can_be_right_to(const Piece& other) const{
    if(left_ == other.right_){
        return true;
    }
    return false;
}

const Piece& Domino::left() const{
    return pieces_.front();
}

const Piece& Domino::right() const{
    return pieces_.back();
}

bool Domino::place_left(const Piece& p){
    Piece initial = pieces_.front();
    if(!initial.can_be_right_to(p)){
        return false;
    }
    pieces_.push_front(p);
    return true;
}

bool Domino::place_right(const Piece& p){
    Piece last = pieces_.back();
    if(!last.can_be_left_to(p)){
        return false;
    }
    pieces_.push_back(p);
    return true;
}
