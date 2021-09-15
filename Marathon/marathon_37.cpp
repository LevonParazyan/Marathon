#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
} vertical, horizontal;

int main() {
    cin>>vertical.x>>horizontal.y;
    cout<<"Vertical is "<<vertical.x<<endl<<"Horizontal is "<<horizontal.y;
    return 0;
}
