#include<iostream>
   using namespace std;

       int main()
    {
        int balance=5000,amount;
   char choice;

   while(balance!=0){
    cout<<"enter 'd' for deposite amount , enter 'w' for withdrawn the amount"<<endl;
    cin>>choice;
    if(choice=='d'){
        cout<<"enter amount to deposite"<<endl;
         cin>>amount;
         balance += amount;
    }

         else if(choice=='w'){
            cout<<"enter amout to withdraw"<<endl;
            cin>>amount;
            if(balance>=amount){
                balance -= amount;
            }

         }
    
    }
    cout<<balance<<endl;
 }

