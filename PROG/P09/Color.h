#ifndef __Color__
#define __Color__

class Color{
    public:
        Color(unsigned char red, unsigned char green, unsigned char blue);
        Color(const Color& c);
        unsigned char red() const;
        unsigned char green() const;
        unsigned char blue() const;
        static const Color RED, GREEN, BLUE, BLACK, WHITE;
        bool equal_to(const Color& other) const;
        void invert();
    private:
        unsigned char _Red_, _Green_, _Blue_;
};

#endif