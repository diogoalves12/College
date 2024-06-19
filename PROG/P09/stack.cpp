#include <iostream>
#include <vector>

template <typename T>
class Stack {
    public:
        Stack(){
            std::vector<T> t = {};
            elements = t;
        }
        size_t size() const{
            return elements.size();
        }
        bool peek(T& elem) const{
            if(elements.size() != 0){
                elem = elements[elements.size() - 1];
                return true;
            }
            return false;
        }
        bool pop(T& elem){
            if(elements.size() != 0){
                elem = elements[elements.size() - 1];
                elements.pop_back();
                return true;
            }
            return false;
        }
        void push(const T& elem){
            elements.push_back(elem);
        }
    private:
        std::vector<T> elements;
};