// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future." << "\n";
    int count = 0 ;
    srand(time(0));
    while(count < 3){
        if(cin.get()) count++ ;
    }
    string Grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    if(count == 3){
    cout << "You will get " << Grade[rand()%9] << " in this 261102.";
    }
    
    return 0 ;
}
