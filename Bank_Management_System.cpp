#include<iostream>
#include<string>

using namespace std;

class Account{

    public:

    int acc_no=1234;
    int newAccNo;
    string name;
    int balance=100000;
    int  withdrawl;
    int  deposite;
    private:
    string password="malay@123";
    public:
    int choice;
    int wd;
    int dp;
    int wdb,deb;
    void Withdrawl();
    void Deposite();
    void Balance();
    void Password();
    void newAcoount();
    string address;
    int  mobile_number;
    int age;
    int amount;
    string newAccPassword;
    void Acc();
    int newdep;
    int ps;
};

//Withdrawl code

void Account:: Withdrawl(){
        cout<<"Enter the amount that you want to witdrawl :"<<endl;
        cout<<endl;
        cout<<endl;
        cin>>withdrawl;
        if(balance==0){
            cout<<"Sorry you dont have money."<<endl;
            cout<<endl;
            cout<<endl;
        }
        else if(withdrawl>balance){
            cout<<"you cant withdrawl "<<withdrawl<<" rupees ,you have "<<balance<<"rupees"<<endl;
            cout<<endl;
            cout<<endl;
        }
        else{
            wdb=balance-withdrawl;
            cout<<withdrawl<<" rupees witdrawled . "<<endl;
            cout<<endl;
            cout<<endl;
            balance=wdb;
            cout<<"Current amount is : "<<balance<<endl;
            cout<<endl;
            cout<<endl;
    }
}

//deposite code

void Account::Deposite(){
     
        cout<<"Enter the amount that you want to deposite : "<<endl;
        cout<<endl;
        cout<<endl;
        cin>>deposite;
        deb=balance+deposite;
        balance=deb;
        cout<<deposite<<" rupees deposited , "<<"current bank balance is : "<<balance<<endl;
        cout<<endl;
        cout<<endl;
}

//check balance

void Account::Balance(){
    cout<<"Your bank balance is : "<<balance<<endl;
    cout<<endl;
    cout<<endl;
}

//change password

void Account::Password(){
    string new_pass;
    string pass;
    string pas;
    cout<<"Enter your old password : "<<endl;
    cin>>new_pass;
    if(new_pass==password){
        cout<<"Enter your new password : "<<endl;
        cout<<endl;
        cout<<endl;
        cin>>pass;
        cout<<"Re-eneter your new password : "<<endl;
        cout<<endl;
        cout<<endl;
        cin>>pas;
        if(pass==pas){
            password=pass;
            cout<<"Password changed . "<<endl;
            cout<<endl;
            cout<<endl;
        }
        else{
            cout<<"Sorry re-enter your password . "<<endl;
        }
    }
    else{
        cout<<"Wrong password . "<<endl;
    }
}


void Account::Acc(){
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Enter  your Mobile number : "<<endl;
    cin>>mobile_number;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    cout<<"Enter your new Account password : "<<endl;
    cin>>newAccPassword;
    cout<<"Enter the ammount that you want to deposite : "<<endl;
    cin>>newdep;
    if(newdep!=0){
        balance=0;
    }
    balance=newdep;
    cout<<"Hi "<<name<<" your Account is Created."<<endl;
    
}
int  main(){
    Account a1;
    int choice ;
    int choice2;
    while(1){

        cout<<"Enter your choice : "<<endl;
        cout<<"Enter 1 for new Account ."<<endl;
        cout<<"Enter 2 for old Account access ."<<endl;
        cin>>choice;
        switch (choice){
            case 1:
                a1.Acc();
                break;
            case 2:
                        
                cout<<"Enter your name : "<<endl;
                cin>>a1.name;
                cout<<"Enter your account number : "<<endl;
                cin>>a1.newAccNo;
                if(a1.acc_no==a1.newAccNo){
                                    
                    while(1){
                        cout<<"Enter your choice : "<<endl;
                        cout<<"1 . [ Check your balance ]"<<endl;
                        cout<<"2 . [ Withdrawl ]"<<endl;
                        cout<<"3 . [ Deposite .]"<<endl;
                        cout<<"4 . [ Change Password ]"<<endl;
                        cout<<"5 . [Exit from your Account]"<<endl;
                        cin>>choice2;
                            switch(choice2){
                                                
                                case 1:
                                    a1.Balance();
                                    break;
                                case 2:
                                    a1.Withdrawl();
                                    break;
                                case 3:
                                    a1.Deposite();
                                    break;
                                case 4:
                                    a1.Password();
                                    break;
                                case 5:
                                    exit(0);
                                    break;
                                default:
                                    cout<<"Wrong choice . ";
                            }
                        }
                        return 0;
                        cout<<"Exit from your old account"<<endl;
                }
                else{
                    cout<<"Sorry this is not your Account number. "<<endl;
                    cout<<"Please re-enter : "<<endl;
                }
                break;
            case 3:
                exit(0);
            default:
                cout<<"ajajv";
        }
    }
    return 0; 
}
