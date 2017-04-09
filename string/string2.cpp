#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char str1[10]="Hello";
char str2[10]="World";
char str3[10];

//copy string 1 into string 3

strcpy(str3,str1);
cout<<"strcpy(str3,str1)" <<str1 <<endl;

//
