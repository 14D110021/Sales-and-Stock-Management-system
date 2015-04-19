class cosmetics                         //class for the cosmetics item.contains all same functions as class grocery.
{

char name[30];
float price;
int code,qty;

public:
    void init(void)
    {



    cout<<"enter the name of product"<<endl;
    cin>>name;

    cout<<"enter the code of product"<<endl;
    cin>>code;

    cout<<"enter the price of product"<<endl;
    cin>>price;

    cout<<"enter the quantity of product"<<endl;
    cin>>qty;
    }

        void modify(void)
        {
        char nm[30];

        cout<<"enter new name"<<endl;
        cout<<"if no change press  '.'  "<<endl;
        cin>>nm;

        if(strcmp(nm," . ")!=0)
        {
            strcpy(name,nm);
        }

        int newcode;
        cout<<"enter new code"<<endl;
        cout<<"if no change in code press 0 "<<endl;
        cin>>newcode;

        if(newcode!=0)
        {
          code=newcode;
        }

         float newprice;
         cout<<"enter new price"<<endl;
         cout<<"if no change in price press 0 "<<endl;
         cin>>newprice;

        if(newprice!=0)
        {
          price=newprice;
        }

         int newqty;
         cout<<"enter new quantity"<<endl;
         cout<<"if no change in quantity press 0 "<<endl;
         cin>>newqty;

         if(newqty!=0)
        {
          qty=newqty;
        }

        }

        int getcode(void)
        {
            return code;
        }

        int getqty(void)
        {
            return qty;
        }

        float getprice(void)
        {
            return price;
        }

void print(void)
{
  cout<<"product name:"<<name<<endl;
  cout<<"product code:"<<code<<endl;
  cout<<"price:"<<price<<endl;
  cout<<"product stock available:"<<qty<<endl;
}

};
