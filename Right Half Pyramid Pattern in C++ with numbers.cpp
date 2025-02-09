#include <iostream>
#include <string>

using namespace std;


int main(){
   int row;
   cout<<"row : "; cin >> row;
   int i = 1;
   while(row--){
   cout<<string(i,char(i))<<"\n";
   ++i;
}
 return 0;
}