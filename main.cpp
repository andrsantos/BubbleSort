#include<iostream>
#include<conio.h>
using namespace std;

main()
{

int hold;
int array[5];
cout<<"entre com 5 números: "<<endl;
for(int i=0; i<5; i++)
{
cin>>array[i]; 
} 

for(int i=0; i<4; i++)
{
for(int j=0; j<4; j++)
{
if(array[j]>array[j+1])
{
hold=array[j];
array[j]=array[j+1];
array[j+1]=hold; 
}
} 
} 
cout<<"array ordenado: "<<endl;
for(int i=0; i<5; i++)
{
cout<<array[i]<<endl; 
} 

getch();
}