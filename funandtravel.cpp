#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();
class Management
{
    public:
        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer ID:";
            cin>>cId;
            cout<<"Enter the name :";
            cin>>name;
            cout<<"\nEnter the age :";
            cin>>age;
            cout<<"\n Address :";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;
    
        void flights()
        {
            string flightN[]={"Dubai", "Australia", "Tahiti", "New York", "Texas", "Florida", "Maryland"};

            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }
            cout<<"\nWelcome To The Airlines!"<<endl;
            cout<<"Press there number of the country of which you want to book the flight: ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                {
                    cout<<"_______Welcome To Dubai Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. DUB - 106"<<endl;
                    cout<<"\t08-01-2024 7:47PM 7hrs USD $777"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=777;
                        cout<<"\nYou have successfully booked the flight DUB - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();
                }
                case 2:
                {
                    cout<<"_______Welcome To Australia Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. AUS - 106"<<endl;
                    cout<<"\t07-01-2024 7:47PM 7hrs USD $777"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=777;
                        cout<<"\nYou have successfully booked the flight AUS - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();                    
                }
                case 3:
                {
                    cout<<"_______Welcome To Tahiti Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. TAH - 106"<<endl;
                    cout<<"\t05-01-2024 7:47PM 7hrs USD $777"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=777;
                        cout<<"\nYou have successfully booked the flight TAH - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();  
                }
                case 4:
                {
                    cout<<"_______Welcome To New York Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. NYC - 106"<<endl;
                    cout<<"\t06-01-2024 7:47PM 1hr USD $50"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=50;
                        cout<<"\nYou have successfully booked the flight NYC - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();                      
                }
                case 5:
                {
                    cout<<"_______Welcome To Texas Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. TEX - 106"<<endl;
                    cout<<"\t04-01-2024 7:47PM 1hr USD $50"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=50;
                        cout<<"\nYou have successfully booked the flight TEX - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();
                }
                case 6:
                {
                    cout<<"_______Welcome To Florida Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. FLO - 106"<<endl;
                    cout<<"\t03-01-2024 7:47PM 1hr USD $50"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=50;
                        cout<<"\nYou have successfully booked the flight FLO - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();
                }
                case 7:
                {
                    cout<<"_______Welcome To Maryland Emirates_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. MAR - 106"<<endl;
                    cout<<"\t02-02-2024 7:47PM 1hr USD $50"<<endl;
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;
                    if (choice1==1){
                        charges=50;
                        cout<<"\nYou have successfully booked the flight MAR - 106"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    } else {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: "<<endl;
                    mainMenu();
                }
                default:
                {
                    cout<<"Invalid input, Shifting to the main menu"<<endl;
                    mainMenu();
                    break;
                }
            }
        }
};

float registration::charges;
int registration::choice;
class ticket : public registration, Details
{
    public:
        void Bill()
        {
            string destination=" ";
            ofstream outf("records.txt");
            {
                outf<<"_______XYZ Airlines_______"<<endl;
                outf<<"_______Ticket_______"<<endl;
                outf<<"____________________"<<endl;
                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\tDescription"<<endl;

                if(registration::choice==1)
                {
                    destination="Dubai";
                } else if (registration::choice==2) {
                    destination="Australia";
                } else if (registration::choice==3){
                    destination="Tahiti";
                } else if (registration::choice==4){
                    destination="New York";
                } else if (registration::choice==5){
                    destination="Texas";
                } else if (registration::choice==6){
                    destination="Florida";
                } else if (registration::choice==7){
                    destination="Maryland";
                }
                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t"<<registration::charges<<endl;
            }
            outf.close();
        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                  Frontier Airlines                 \n"<<endl;
    cout<<"\t__________________Main Menu_________________________\n"<<endl;
    cout<<"\t_______________________________________________________\n"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|\t Press 1 to add the Customer Details     \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration         \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges          \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                         \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t_______________________________________________________\n"<<endl;
    cout<<"Enter the choice : ";
    cin>>lchoice;
    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"___________Customers___________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main Menu ";
            mainMenu();
            break;
        }
        case 2:
        {
            cout<<"___________Book a flight___________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"_______GET YOUR TICKET_______\n"<<endl;
            t.Bill();
            cout<<"Your ticket is printed, you can get it \n"<<endl;
            cout<<"Press any key to go back to main menu: ";
            mainMenu();
            break;
        }
        case 4:
        {
            cout<<"\n\n\t_______Thank You_______"<<endl;
            exit(0);
        }
        default:
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}
int main()
{
    Management Mobj;
    return 0;
}