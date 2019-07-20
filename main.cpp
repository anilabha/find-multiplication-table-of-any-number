#include <iostream>

using namespace std;

int main()
{

   int n,i=1;
   cout<<"Enter The number: ";
   cin>>n;
   if(n>0){
  while(i<=10){
        int r=i*n;

  cout<<r<<endl;
  i++;
  }
   }
   else{
    cout<<"invalid input!";
   }

    return 0;
}
