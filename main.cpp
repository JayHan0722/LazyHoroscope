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
  cout<<"What is your First name?"<<endl;
  cin>>First;

  cout<<"What is your Last Name?"<<endl;
  cin>>Last;

  //tell fortune
  cout<<"Welcome, "<<First[0]<<"."<<Last[0]<<"."<<", here is your fourtune..."<<endl;
  cout<<"Your lucky number is "<<First.length()<<endl;

  if(First[0] == 'a' || First[0] == 'e' || First[0] == 'i' || First[0] == 'o' || First[0] == 'u' ||
     First[0] == 'A' || First[0] == 'E' || First[0] == 'I' || First[0] == 'O' || First[0] == 'U')
  {
          cout<<"You are destined to be famous."<<endl;
  }

  else
  {
          cout<<"You should keep a low profile."<<endl;
  }
  
  int index = Last.length() - 1;
  char LL = Last[index];

  if(LL == 'a' || LL == 'e' || LL == 'i' || LL == 'o' || LL == 'u' ||
     LL == 'A' || LL == 'E' || LL == 'I' || LL == 'O' || LL == 'U')
  {
          cout<<"You have already met your ture love."<<endl;
  }

  cout<<"Have a good day!"<<endl;


  return 0;
}
