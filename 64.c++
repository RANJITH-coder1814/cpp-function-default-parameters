#include<iostream>
using namespace std;
int add(int x,int y,int z=0){
    return x+y+z;
}
int main(){
    cout<<add(10,3)<<endl;
    cout<<add(3,5,8)<<endl;
    cout<<add(2,6,0)<<endl;

}