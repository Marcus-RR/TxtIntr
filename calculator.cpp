#include<iostream>
class calc
{
public:
calc()
{
char o;
int a,b;
cin>>a;
cin>>o;
cin>>b;
switch(o)
{
case '*':
cout<<a<<"*"<<b<<"="<<a*b;
break;
case '/':
cout<<a<<"/"<<b<<"="<<a/b;
break;
default:
cout<<"Enter right operator";
break;
}
}
};
int main()
{
calc obj;
return 0;
}
