#include <iostream>
using namespace std;
#include<iomanip>
#include <stdlib.h>
#include<conio.h>
int title();
double everything();
double pickup(double carTotal);
double addons(double pickTotal);
double receipt(double pickTotal, double carTotal, double totalAddons);
double payment(double total);



int main()
{
int x=0;
while (x=1000)
{
    cout.setf(ios::fixed);
cout<<setprecision(2);
    title();
    double carTotal;
    double pickTotal;
    double totalAddons;
    double total;
    carTotal = everything();
    pickTotal = pickup(carTotal);
    totalAddons = addons(pickTotal);
    total = receipt(pickTotal,carTotal, totalAddons);
    payment(total);


}
return 0;
}

int title()
{


cout<<"|-------------------------------------------------------------------------------------------------"<<endl;
cout<<"|     _____   _____ _______    _____             _____            _        _                      "<<endl;
cout<<"|    |  __ \\ / ____|__   __|  / ____|           |  __ \\          | |      | |                   "<<endl;
cout<<"|    | |  | | (___    | |    | |     __ _ _ __  | |__) |___ _ __ | |_ __ _| |___                  "<<endl;
cout<<"|    | |  | |\\___ \\   | |    | |    / _` | '__| |  _  // _ \\ '_ \\| __/ _` | / __|             "<<endl;
cout<<"|    | |__| |____) |  | |    | |___| (_| | |    | | \\ \\  __/ | | | || (_| | \\__ \\             "<<endl;
cout<<"|    |_____/|_____/   |_|     \\_____\\__,_|_|    |_|  \\_\\___|_| |_|\\__\\__,_|_|___/           "<<endl;
cout<<"|-------------------------------------------------------------------------------------------------"<<endl;



}

double everything()
{
    string name;
    cout<<"\n"<<endl;
    cout<<"Welcome to the DST Car Rentals where we deliver your rental car or you can pick it up"<<endl;
    cout<<"Please enter your name"<<endl;
    cin>>name;
    cout<<"\n"<<endl;
    cout<<"Hello "<<name<<", Our available types of cars are listed below including the rate"<<endl;
    cout<<"\n"<<endl;

    cout<<"------------------------------------------------------"<<endl;
    cout<<"-----Type--------|-----Price----|------Passengers-----"<<endl;
    cout<<"|Sedan ----------|--- $60/day --|------ up to 5 ------|"<<endl;
    cout<<"|Sport ----------|--- $130/day -|------ up to 2 ------|"<<endl;
    cout<<"|SUV ------------|--- $70/day --|------ up to 7 ------|"<<endl;
    cout<<"|Van ------------|--- $65/day --|------ up to 8 ------|"<<endl;
    cout<<"|Truck ----------|--- $80/day --|------ up to 6 ------|"<<endl;
    cout<<"-------------------------------------------------------"<<endl;

    cout<<"\n"<<endl;

    string car;
    int days;
    string sedan, Sedan;
    string Sport, sport;
    cout<<"Which type of vehicle would you like to rent?"<<endl;
    cin>>car;

double cartotal;

     cout<<"How many days would you like to rent a " << car << "?"<<endl;
        cin>>days;
        cout<<"\n"<<endl;

    if (car=="sedan"||car=="Sedan")
    {
     cartotal=60*days;
cout<<"The price of renting a "<<car<<" for "<<days<<" days will be $"<<cartotal<<endl;
cout<<"The car you will be renting is a 2018 BMW 5 series"<<endl;
cout<<"\n"<<endl;
    return cartotal;
    }

    else if (car=="Sport"||car=="sport")
    {
        cartotal=130*days;
 cout<<"The price of renting a "<<car<<" for "<<days<<" days will be $"<<cartotal<<endl;
 cout<<"The car you will be renting is a 2018 Lamborghini Huracan"<<endl;
 cout<<"\n"<<endl;
    return cartotal;
    }
    else if (car=="SUV"||car=="suv")
    {
    cartotal=70*days;
 cout<<"The price of renting a "<<car<<" for "<<days<<" days will be $"<<cartotal<<endl;
 cout<<"The car you will be renting is a 2018 Mercedes GLS"<<endl;
 cout<<"\n"<<endl;
    return cartotal;
    }
       else if (car=="Van"||car=="van")
    {
    cartotal=65*days;
 cout<<"The price of renting a "<<car<<" for "<<days<<" days will be $"<<cartotal<<endl;
 cout<<"The car you will be renting is a 2018 Chrysler Pacifica"<<endl;
 cout<<"\n"<<endl;
 return cartotal;
    }
       else if (car=="Truck"||car=="truck")
    {
        cartotal=80*days;
  cout<<"The price of renting a "<<car<<" for "<<days<<" days will be $"<<cartotal<<endl;
  cout<<"The car you will be renting is a 2018 Ford F-150"<<endl;
  cout<<"\n"<<endl;
  return cartotal;
     }

}

    double pickup(double carTotal)
    {
    char pickup;
    double picktotal;

    cout<<"Will you be picking up your rental from our locations or will be getting delivered? L=Location D= Delivery"<<endl;
    cin>>pickup;

    if (pickup=='L'||pickup=='l')
    {
        cout<<"Since you are picking the veichle from our locations, there will be no charge :)"<<endl;
        picktotal= carTotal+0;
        cout<<"\n"<<endl;
        cout<<"Your total so far is $"<<picktotal<<endl;
    }

    else if (pickup=='D'||pickup=='d')
    {
        cout<<"The delivery will cost $50 extra on top of total"<<endl;
        picktotal= carTotal+50;
        cout<<"\n"<<endl;
        cout<<"Your total so far is $"<<picktotal<<endl;


    }
    return picktotal;

}
double addons(double pickTotal)
{
    string gps;
    string seat;
    cout<<"\n"<<endl;
    cout<<"For your acesibility we have some aditional addons"<<endl;
    cout<<"\n"<<endl;
    double totaladd;
    double totaladdons;
    double Tseat;
    double Tgps;


    cout<<"Will you like a GPS || $50 extra /// yes or no"<<endl;
    cin>>gps;
    if (gps=="yes"||gps=="Yes")
    {
        cout<<"\n"<<endl;
        Tgps= 0+50;
        cout<<"Okay, so this will be added to your grand total"<<endl;
    }

    else if(gps=="no"||gps=="No")
    {
        cout<<"\n"<<endl;
        Tgps=0;
     cout<<"Okay, we won't charge you for that then"<<endl;
    }


    cout<<"\n"<<endl;
    cout<<"Will you like to also rent a car seat? || $50 extra /// yes or no"<<endl;
    cin>>seat;
    if (seat=="yes"||seat=="Yes")
    {
        cout<<"\n"<<endl;
        Tseat= 0+50;
        cout<<"Okay, so this will be added to your grand total"<<endl;
    }

    else if(seat=="No"||seat=="no")
    {
        cout<<"\n"<<endl;
        Tseat=0;
     cout<<"Okay, we won't charge you for that then"<<endl;
    }

    totaladd= Tseat+Tgps;
    totaladdons= pickTotal+totaladd;

    cout<<"\n"<<endl;
    cout<<"Your grand total so far is $"<<totaladdons<<endl;
    return totaladdons;
}

double receipt(double pickTotal, double carTotal, double totalAddons)
{
     cout.setf(ios::fixed);
cout<<setprecision(2);
    cout<<"\n"<<endl;
    double T;
    T= pickTotal-carTotal;
    cout<<"*******************************************************"<<endl;
    cout<<"                  Client Information                   "<<endl;
    cout<<"*******************************************************"<<endl;

    string email;
    string prov;
    string address;
    string location;
    cout<<"Inorder to Contact you what is your email address"<<endl;
    cin>>email;
    cout<<"\n"<<endl;

    cout<<"Which Province do you live in?"<<endl;
    cin>>prov;
    cout<<"\n"<<endl;

    if (T>=50)
    {
        cout<<"What is the Address which the car will be delivered at / pickup?"<<endl;
        cin>>address;

    }
    else if (T==0)
    {
        cout<<"Just to confrim which adress will you be picking up and dropping your veichile"<<endl;
        cout<<"|------Location-------|------- City --------|"<<endl;
        cout<<"|Pearson Airport------|---- Mississauga ----|"<<endl;
        cout<<"|Billy Bishop Airport-|------ Toronto ------|"<<endl;
        cout<<"|Niagra Falls---------|---- Niagra Falls ---|"<<endl;
        cout<<"|Blue Mountain--------|--- Blue Mountain ---|"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cin>>location;
    }

    cout<<"\n"<<endl;
    cout<<"To sum up the email address you will be contacted at is "<<email<<endl;
    cout<<"The address and location which will be picked/drop is "<<address<<" "<<location<<endl;
    cout<<"\n"<<endl;


    cout<<"**************************************************"<<endl;
    cout<<"|       _____               _       _             "<<endl;
    cout<<"|      |  __ \\             (_)     | |           "<<endl;
    cout<<"|      | |__) |___  ___ ___ _ _ __ | |_           "<<endl;
    cout<<"|      |  _  // _ \\/ __/ _ \\ | '_ \\| __|       "<<endl;
    cout<<"|      | | \\ \\  __/ (_|  __/ | |_) | |_         "<<endl;
    cout<<"|      |_|  \\_\\___|\\___\\___|_| .__/ \\__|     "<<endl;
    cout<<"|                            | |                  "<<endl;
    cout<<"|                            |_|                  "<<endl;
    cout<<"**************************************************"<<endl;

    double S;
    double ttax;
    double tax;
    cout<<"Lets start from the begining to see all of your totals"<<endl;
    cout<<"\n"<<endl;
    cout<<"Cost of the car ..................................... $"<<carTotal<<endl;
    cout<<"\n"<<endl;
    T= pickTotal-carTotal;
    cout<<"Your Pick up / Delivery cost is ..................... $"<<T<<endl;
    cout<<"\n"<<endl;
    S= totalAddons-pickTotal;
    cout<<"Your add ons have cost .............................. $"<<S<<endl;
    cout<<"\n"<<endl;
    tax = totalAddons*0.13;
    cout<<"The total tax is .................................... $"<<tax<<endl;
    cout<<"\n"<<endl;
    ttax = totalAddons*1.13;
    cout<<"Therefore your grand Total including tax is ......... $"<<ttax<<endl;
    cout<<"_________________________________________________________________"<<endl;
    cout<<"\n"<<endl;

    return ttax;
}



double payment(double total)
{
    int code;
    string pay;
    double money;
    cout<<"Your Total is $"<<total<<endl;
    cout<<"How will you be paying today(credit/debit/cash)"<<endl;
    cin>>pay;
    if (pay=="credit")
    {
    cout<<"Please insert your credit card and enter your 4 digit pin"<<endl;
    cin>>code;
    cout<<"Approved, you may remove your credit card"<<endl;
      cout<<"\n"<<endl;
    cout<<"Thank you for choosing DST Rentals!"<<endl;
      cout<<"\n"<<endl;
    cout<<"Please come again!"<<endl;
    cout<<"Your car keys are below"<<endl;
    }

     else if (pay=="debit")
    {


        cout<<"Please insert your debit card and enter your 4 digit pin"<<endl;
    cin>>code;
    cout<<"Approved, you may remove your debit card"<<endl;
      cout<<"\n"<<endl;
    cout<<"Thank you for choosing DST Rentals!"<<endl;
      cout<<"\n"<<endl;
    cout<<"Please come again!"<<endl;
    cout<<"Your car keys are below"<<endl;
}

    else if (pay=="cash")
    {
  cout<<"Please enter your amount of money"<<endl;
  cin>>money;
  if (money<total)
  {

  while(money<total)
  {
cout<<"You did not pay enough money"<<endl;
total=total-money;
cout<<"You owe $"<<total<<" more"<<endl;
cin>>money;
  }
  }
cout<<"Your change is $"<<money-total<<endl;
cout<<"\n"<<endl;
  cout<<"Thank you for choosing DST Rentals!"<<endl;
  cout<<"\n"<<endl;
    cout<<"Please come again!"<<endl;
      cout<<"\n"<<endl;
    cout<<"Your car keys are below"<<endl;

    }
  else
  {

    cout<<"You did not enter a proper payment method"<<endl;
  }


cout<<"Press any key to restart the program"<<endl;
getch();
system("cls");
}


