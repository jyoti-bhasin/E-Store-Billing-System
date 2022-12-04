#include<iostream>

using namespace std;

int main(){
    int returTotalBill(void);
    int totalBill=returTotalBill();
    cout<<"Your total Bill Amount is "<<totalBill<<endl;
    cout<<"Thank you for you order !"<<endl;
}

int returTotalBill(){
    char c;
    char item;
    char mobileItem;
    int billAmount=0;
    char selectAgain;
    char computerItem;
    cout<<"----------------Welcome to Online Order Service--------------"<<endl;
    cout<<"--------------Please follow below instructions-----------"<<endl;
    cout<<"Step 1 : Please press s to start your order"<<endl;
    cout<<"Step 2 : You can order both mobile and computer items"<<endl;
    cout<<"Step 3 : Please press a to select mobile items"<<endl;
    cout<<"Step 4 : Please press b to select computer items"<<endl;
    cout<<"Step 5 : You will get your final Bill after your order"<<endl;
    start:
    cin>>c;
    if(c=='s' || c=='S'){
        items:
        cout<<"Please select your choice"<<endl;
        cout<<"(a)mobile items               (b)computer items"<<endl;
        cin>>item;
        if(item=='a' || item=='A'){
            mobileItemList:
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
            cout<<"(1) Earphones(premium) : Price : Rs-250"<<endl;
            cout<<"(2) Earphones(standard) : Price : Rs-50"<<endl;
            cout<<"(3) Cover : Price :  Rs-100"<<endl;
            cout<<"(4) Screenguard : Price : Rs-150"<<endl;
            cout<<"(5) Connector : Price : Rs-100"<<endl;
            cin>>mobileItem;
            if(mobileItem=='1'){
                billAmount=billAmount+250;
            }
            else if(mobileItem=='2'){
                billAmount=billAmount+50;
            }
            else if(mobileItem=='3'){
                billAmount=billAmount+100;
            }
            else if(mobileItem=='4'){
                billAmount=billAmount+150;
            }
             else if(mobileItem=='5'){
                billAmount=billAmount+100;
            }
            else{
                cout<<"You have entered wrong value,please try again!"<<endl;
                goto mobileItemList;
            }
          cout<<"Do you want to add more items, y or n?"<<endl;
          cin>>selectAgain;
          if(selectAgain=='y'){
              goto items;
          }
          else{
              return billAmount;
          }
        }
        else if(item=='b' || item=='B'){
           ComputerItemList:
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
            cout<<"(1) Pendrive : Price : Rs-350"<<endl;
            cout<<"(2) Connector : Price : Rs-100"<<endl;
            cout<<"(3) Speaker : Price :  Rs-1500"<<endl;
            cout<<"(4) Mouse : Price : Rs-1000"<<endl;
            cout<<"(5) Headphones : Price : Rs-2000"<<endl;
            cin>>computerItem;
            if(computerItem=='1'){
                billAmount=billAmount+350;
            }
            else if(computerItem=='2'){
                billAmount=billAmount+100;
            }
            else if(computerItem=='3'){
                billAmount=billAmount+1500;
            }
            else if(computerItem=='4'){
                billAmount=billAmount+1000;
            }
             else if(computerItem=='5'){
                billAmount=billAmount+2000;
            }
            else{
                cout<<"You have entered wrong value,please try again!"<<endl;
                goto ComputerItemList;
            }
          cout<<"Do you want to add more items, y or n?"<<endl;
          cin>>selectAgain;
          if(selectAgain=='y'){
              goto items;
          }
          else{
              return billAmount;
          }

        }
        else{
          cout<<"You have entered wrong value,please try again!"<<endl;
          goto items;
        }

    }
    else{
        cout<<"You have entered wrong value, please press s!"<<endl;
        goto start;
    }

   return billAmount;
}
