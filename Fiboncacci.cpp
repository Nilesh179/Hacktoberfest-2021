#include <iostream>
using namespace std;
int main() 
{
int first=0, second=1; 
int limit, next;
cout<<"Enter the number of places until you want to print : "<<endl;
cin>>limit;
cout<<first;
while(second < limit) 
{ cout<<"\t";
cout<<second;
next = first + second;
first = second;
second = next;
}
return 0;
}
