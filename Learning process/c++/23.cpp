#include<iostream>

using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
        void initcout(void){counter=0;}
        void setprice(void);
        void displayprice(void);

};
void shop ::setprice(void)
{
    cout<<"enr the id"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enr the price"<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;

}
void shop ::displayprice(void)
{for (int i = 0; i < counter; i++)
{
    /* code */cout<<"the price of item is"<<itemid[i]<<"also"<<itemprice[i]<<endl;
}

}
int main(){

    shop g;
    g.initcout();
    g.setprice();
    g.setprice();
    g.setprice();
    g.displayprice();

return 0;
}