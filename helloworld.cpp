#include <iostream>
using namespace std;
int main(void) {
    cout << "Hello World!" <<endl;
    int x=15;
    for(int i=1;i<=3;i++){
        x+=i*234;
    }
    cout<<x<<endl;
    return 0;
}