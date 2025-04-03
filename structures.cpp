#include <iostream>
struct rectangle
{
    int length;
    int breadth;
};
int main() {
    struct rectangle r;// struct rectangle r = {10,20};
    r.length=10;
    r.breadth=20;
    std::cout<<r.length<<std::endl;
    std::cout<<r.breadth<<std::endl;
    return 0;
}
