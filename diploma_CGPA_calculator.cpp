#include<iostream>
#include<conio.h>
using namespace std;

void userInput(int);
float calculation(float,int);

int main()
{
    float Se1,Se2,Se3,Se4,Se5,Se6,Se7,Se8;
    float lSe1,lSe2,lSe3,lSe4,lSe5,lSe6,lSe7,lSe8; 
    userInput(1);
    cin>>Se1;
    lSe1 = calculation(Se1,1);
    userInput(2);
    cin>>Se2;
    lSe2 = calculation(Se2,2);
    userInput(3);
    cin>>Se3;
    lSe3 = calculation(Se3,3);
    userInput(4);
    cin>>Se4;
    lSe4 = calculation(Se4,4);
    userInput(5);
    cin>>Se5;
    lSe5 = calculation(Se5,5);
    userInput(6);
    cin>>Se6;
    lSe6 = calculation(Se6,6);
    userInput(7);
    cin>>Se7;
    lSe7 = calculation(Se7,7);
    userInput(8);
    cin>>Se8;
    lSe8 = calculation(Se8,8);
    cout<<"\nYour CGPA is : ";
    cout<<lSe1+lSe2+lSe3+lSe4+lSe5+lSe6+lSe7+lSe8<<endl;
    getch();
}
void userInput(int i)
{
        cout<<"Enter your "<<i;
        if(i==1)
            cout<<"st";
        else if(i==2)
            cout<<"nd";
        else if(i==3)
            cout<<"rd";
        else if(3<i<9)
            cout<<"th";
        cout<<" Semester result : ";
}
float calculation(float n,int s)
{
    int persentise;
    if(s == 1||s==2||s==3){
        persentise = 5;
        }
    else if(s==5||s==8){
        persentise = 15;
        }
    else if(s == 6){
        persentise = 20;
        }
    else if (s == 7){
        persentise = 25;
        }
    else{
        persentise = 10;
        }
    float MoOfSe;
    MoOfSe=(n*persentise)/100;
    return MoOfSe;
}
