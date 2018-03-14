#include<iostream>
#include<string.h>
using namespace std;
int main(){
char a[5][25];

for(int i=1;i<=5;i++){
cout<<"Enter name of student"<<i<<endl;
gets(a[i]);
}
cout<<"names entered are:- "<<endl;
for(int i=1;i<=5;i++){

cout<<a[i]<<endl;
}
return 0;
}