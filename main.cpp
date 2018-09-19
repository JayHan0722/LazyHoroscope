//Authors: Jaehyun Han
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string First;
  string Last;

  //get user input
  cout<<"Type in your First name: "<<endl;
  cin>>First;

  cout<<"Type in your Last name: "<<endl;
  cin>>Last;

  //tell fortune
  cout<<"Welcome, "<<First[0]<<Last[0]<<", here is your fourtune..."<<endl;
  cout<<"Your lucky number is "<<First.length()<<endl;


  return 0;
}
