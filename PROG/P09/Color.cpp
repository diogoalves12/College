#include "Color.h"

Color::Color(unsigned char red, unsigned char green, unsigned char blue) : _Red_(red), _Green_(green), _Blue_(blue){}
Color::Color(const Color& c){
    _Red_ = c._Red_;
    _Green_ = c._Green_;
    _Blue_ = c._Blue_;
}
unsigned char Color::red() const{
    return _Red_;
}
unsigned char Color::green() const{
    return _Green_;
}
unsigned char Color::blue() const{
    return _Blue_;
}
const Color Color::RED = Color(255,0,0), Color::GREEN = Color(0,255,0), Color::BLUE = Color(0,0,255), Color::BLACK = Color(0,0,0), Color::WHITE = Color(255,255,255);
bool Color::equal_to(const Color& other) const{
    return (_Red_ == other._Red_ && _Green_ == other._Green_ && _Blue_ == other._Blue_);
}
void Color::invert(){
    _Red_ = 255 - _Red_;
    _Green_ = 255 - _Green_;
    _Blue_ = 255 - _Blue_;
}