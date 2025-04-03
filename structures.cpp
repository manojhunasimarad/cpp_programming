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
struct cards
{
    int facevalue;
std::string shape;
std::string color;
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
    struct cards deck[52];
    deck[0].facevalue=1;//for ace
    deck[0].shape="heart";
    deck[0].color="red";
    std::cout << "Card 0 details:" << std::endl;
    std::cout << "Face Value: " << deck[0].facevalue << std::endl;
    std::cout << "Shape: " << deck[0].shape << std::endl;
    std::cout << "Color: " << deck[0].color << std::endl;
    return 0;
}
