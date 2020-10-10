#include <vector>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int score(const std::vector<int>& dice) {
  // your code here
  int s=0,n1,n2,n3,n4,n5,n6;
  n1=count(dice.begin(),dice.end(),1);
  n2=count(dice.begin(),dice.end(),2);
  n3=count(dice.begin(),dice.end(),3);
  n4=count(dice.begin(),dice.end(),4);
  n5=count(dice.begin(),dice.end(),5);
  n6=count(dice.begin(),dice.end(),6);

if(n1>=3) { s+=1000 ;n1-=3;}
while(n1>0){s+=100;n1-=1;}
if(n5>=3) { s+=1000 ;n5-=3;}
while(n5>3){s+=100;n5-=3;}
while(n6>3){s+=600;n6-=3;}
while(n4>3){s+=400;n4-=3;}
while(n3>3){s+=300;n3-=3;}
while(n2>3){s+=200;n2-=3;}
cout << s ;
}