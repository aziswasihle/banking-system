#include <iostream>

using namespace std;

string names[3]={"Sihle","Mbali","Thando"};
int accountNumbers[3]={9876543,23498789,43862064};
int pins[3]={2007,1997,1999};
double balances[3]={8000,500,7000};
string accountNumber;
int amount;
int account;
int user =-1;


//finig user account to log in and use bank
void findingUser()
{
string name;
cout<<"Good day, Please enter Account name to access account: ";
cin>>name;
        for(int i=0;i<3;i++)
    {
        if(names[i]==name)
        {
            user=i;
        }
    }
    if(user==-1)
    {
        cout<<"Invalid User, Please start all over"<<endl;
    }
    else
    {
        cout<<"Log in Successful"<<endl;
    }

}


//user deposits money into account
void deposit()
{

        cout<<"Enter the amount you want to deposit: R";
        cin>>amount;

        if(amount>0)
        {
        balances[user]=balances[user]+amount;
        cout<<"Balance: R"<<balances[user]<<endl;
            }
        else
        {
        cout<<"INVALID AMOUNT, Please start all over"<<endl;
            }


}


//user withdraws money from account
void withDraw()
{
    cout << "Enter the amount you want to withdraw: R";
    cin >> amount;

    if (amount>0)
    {
        balances[user] = balances[user] - amount;
        cout << "You have withdrawn R"<<amount<<endl;
        cout<<"Remaining Balance: R" <<balances[user]<<endl;
    }
    else
    {
        cout << "INVALID INPUT or INSUFFICIENT FUNDS." << endl;
            }
}


//user sends money to to another account with only 8 mumbers
 void sendCash()
{
    cout<<"Enter Account number of the holder you are sending money to: ";
    cin>>accountNumber;
    if(accountNumber.length()!=8)
    {
        cout<<"INVALID ACCOUNT NUMBER, PLEASE START ALL OVER. MUST BE 8 DIGITS"<<endl;
    }
    else
    {
        cout<<"Enter the amount you want to deposit: ";
        cin>>amount;
        cout<<endl;
    if(amount>0&&amount<=balances[user])
    {
        cout<<"You have Deposited R"<<amount<<" to Account Number "<<accountNumber<<endl;
        balances[user] = balances[user] - amount;
        cout<<"Remaining balance: R"<<balances[user]<<endl;
        }
            else
            {
            cout<<"INVALID AMOUNT , PLEASE START ALL OVER"<<endl;
        }
    }
    }


//user chceks balance from account
void checkBalance()
{
    cout<<"Balance: "<<balances[user]<<endl;
}


//the menu option where user has to select the service they want to do
void menu()
{

    findingUser();

    if(user==-1)
    {
        return;
    }
    int option=0;
    while(option!=5)
    {

    int option;
    while(option!=5)
    {
    cout<<endl;
    cout<<endl;
    cout<<"Enter 1 to Check Balance"<<endl;
    cout<<"Enter 2 to Withdraw"<<endl;
    cout<<"Enter 3 to Deposit"<<endl;
    cout<<"Enter 4 to Send Cash"<<endl;
    cout<<"Enter 5 to exit"<<endl;
    cin>>option;
    cout<<endl;
    cout<<endl;
    switch(option)
    {
        case 1:
        checkBalance();
        break;

        case 2:
        withDraw();
        break;

        case 3:
        deposit();
        break;

        case 4:
        sendCash();
        break;

        case 5:
        cout<<"Thank You for banking with us!"<<endl;

        default:
        cout<<"Invalid input, start all over"<<endl;
            }
        cout<<endl;
    }
    }
}

int main()
{

 menu();
    return 0;
}
