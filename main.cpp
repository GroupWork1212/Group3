#include <iostream>
#include <string.h>
#include <conio.h>


using namespace std;

int main()
{
    int a; string b =""; double tt;
    double total_price = 0.00;

    char opt ; int itm, i;

    cout<<"................ WELCOME TO GROUP 3 STORE POINT OF SALE ...............\n";
    cout<<"................Product Menu ...............\n";
    cout<<" Press 1. Deodorant spray for men = N1300.00 ..\n";
    cout<<" Press 2. Rexona Deodorant spray  = N900.00 ..\n";
    cout<<" Press 3. CannedTiger Beer = N400.00 ..\n";
    cout<<" Press 4. MaryLand Cookies = N500.00 ..\n";
    cout<<" Press 5. Hair Closure = N2500.00 ..\n";
    cout<<"-----------------------------------------------------------------------\n";

    cout<<"\n how many item do you want to buy: \n"; cin>>a;
     string selitem[a] ={};
    double price[a] ={};

    for(i=0; i<a; i++){
        cout<<"Enter menu option: ";cin>>itm;


            switch(itm){
                case 1:{
              tt = 1300.00;
              b= " Deodorant spray for men";
              selitem[i]= b;
              price[i]= tt;
            break;

            }
            case 2:{
                tt =  900.00;
              b= " Rexona Deodorant spray";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
            case 3:{
                tt =  400.00;
              b= " CannedTiger Beer";
              selitem[i]= b;
              price[i]= tt;
              break;
            }

            case 4:{
               tt =  500.00;
              b= " MaryLand Cookies";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
            case 5: {
                 tt = + 2500.00;
              b= " Hair Closure";
              selitem[i]= b;
              price[i]= tt;
              break;
            }
                default:{
                    cout<<"Invalid menu option \n";
                    break;
                }
            }

    }
    cout<<"\n====================GROUP 3 STORE RECEIPT =================\n";
    for (int k=0; k<a; k++){

        cout<<"\n"<<selitem[k]<<".............."<<price[k]<<"\n";
        cout<<"============================================================\n";
        total_price += price[k];


    }
    cout<<"============================================================\n";
    cout<<"TOTAL PRICE: "<<total_price;
    cout<<"\n";



return 0;
}


