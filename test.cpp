#include<iostream>
using namespace std;
class Box{
int l,b,h;
public:
Box(int x,int y,int z){
    l=x;b=y;h=z;

}
void showDimension(){
 cout<<l<<" "<<b<<" "<<h;
}
};
int main(){
    Box firstBox(4,5,6);

    firstBox.showDimension();
    return 0;

}
