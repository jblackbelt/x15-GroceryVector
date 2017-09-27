//Authors: John Hokanson, Sean Alex, Justin West, Majed Alshaikhhussain
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> list; //array of 5 strings
        int numItems = 0;
        char input;
        int i=0;
        while(true)
        {
          cout<<"\n==GROCERY LIST MANAGER==";
          cout<<"\nEnter your choice: ";
          cout<<"\n (A)dd an item";
          cout<<"\n (S)how grocery list";
          cout<<"\n (Q)uit";
          cout<<"\n (R)emove";
          cout<<"\nYour choice (A/S/Q/R): ";
          cin>>input;
          if(input == 'S' || input == 's')
          {
              for(int x = 0; x <= list.size()-1 ; x++)
              {
                    cout << list[x] << endl;
              }
          }
          if(input == 'A' || input =='a')
          {              
              cout << "What item would you like to add to your cart?" << endl;
              string itemName;
              cin >> itemName;
              list.push_back(itemname);
              cout << "You added " << list[i] << " to your cart\n";
              i++;
          }
          if(input == 'R'  ||  input == 'r')
          {
            int num=0;
            for(int x = 0; x<= list.size()-1 ; x++)
            {
                cout << x+1 << ". " << list[x] << endl;
            }
            cout << "Which item would you like to remove" << endl;
            cin >> num;
            list.erase(num-1);
          }
              if(input == 'Q' || input == 'q')
              {
                break;
              }
        }
        return 0;

}

