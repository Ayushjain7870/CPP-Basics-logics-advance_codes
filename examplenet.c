#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
const size=3;
class item
{
    private:
      char name[25];
      int qty;
      float rate,amount;
    public:
      void getdata()
      {
        cout<<endl<<"Enter the item name:";
        cin>>name;
        cout<<"\nEnter the Rate:";
        cin>>rate;
        cout<<"\nEnter the Quantity:";
        cin>>qty;
      }
      void printdata()
      {
         cout<<setw(5)<<name;
         cout<<setw(5)<<rate;
         cout<<setw(5)<<qty;
         amount=rate*qty;
         cout<<setw(8)<<amount<<endl;
      }
};
void main()
{
   item shop[size];
   clrscr();
   for(int i=0;i<size;i++)
   shop[i].getdata();
   cout<<"Shopping List"<<endl;
   cout<<"Name Quantity Rate Amount\n";
   for(i=0;i<size;i++)
   shop[i].printdata();
   system("pause");
}
