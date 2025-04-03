// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
struct rectangle
{
    int length;
    int breadth;
};
struct emp
{
    int id;
    char name[50];
};
int main() {
   struct rectangle r = {10,20};
    // r.length=10;
    // r.breadth=20;
    std::cout<<r.length<<std::endl;
    std::cout<<r.breadth<<std::endl;
    struct emp e;
    e.id=15;
    strcpy(e.name, "manoj"); 
    std::cout<<e.id<<std::endl;
    std::cout<<e.name<<std::endl;
    return 0;
}
