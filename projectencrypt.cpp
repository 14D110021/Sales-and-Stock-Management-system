#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class grocery
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



class cosmetics
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



class dailyuse
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




int length_str(char *s)

{

    int i = 0;

    while(s[i] != '\0')

	i++;

    return i;

}




void encrypt1(char *password)

{

    int n = length_str(password);

    for(int i = 0; i <= n/3; i++)

    {

        char temp = password[i];

	password[i] = password[n/3-i];

	password[n/3 - i] = temp;

    }




    for(int i = 2*n/3; i < n; i++)

    {

        char temp = password[i];

        password[i] = password[n-i];

        password[n - i] = temp;

    }




    for(int i = 0; i < n; i++)

	password[i] = password[i] - '0' + '2';

}

int main()
{


using namespace std;


int choice,flag=0,choicestart,grocitem=50,grocitem1=50,cositem=50,cositem1=50,dlyitem=50,dlyitem1=50,choicemod,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,choice3;
int choice4,choice5,choice6,choice7,code1,code2,code3,code4,code5,code6,code7,code8,code9,pos,qty1;
char response1='y',response2='y',response3='y',response4='y',response5='y',response6='y',response7='y',response8='y',response9='y';
char custresponse1='y',custresponse2='y',custresponse3='y',password[20],password1[20];
fstream groc,groc2,cosm,cosm2,daily,daily2;
float bill;

    cout<<"Please setup a password:"<<endl;
    cout<<"the password must not be more than 20 characters:"<<endl;
    cin>>password;
    encrypt1(password);


    start:
        cout <<"enter password:"<<endl;
        cin>>password1;
        encrypt1(password1);
        if(strcmp(password,password1)!=0)
        {
            cout<<"wrong password!!"<<endl;
            goto start;
        }

    cout<<"Which interface do you want to enter?"<<endl;
    cout<<"1.shopkeeper:"<<endl;
    cout<<"2.customer:"<<endl;
    cout<<"Enter choice 1 or 2:"<<endl;

    cin>>choice;
    if(choice!=1&&choice!=2)
      {
	cout<<"INVALID ENTRY!! ENTER AGAIN:"<<endl;
	goto start;
      }

    else if(choice==1)
      {
	 if(flag==0)
	   {
	      initialization:

	      cout<<"welcome to initialization:"<<endl;
	      cout<<"Enter the category you want to initialize:"<<endl;
	      cout<<"1.grocery"<<endl;
	      cout<<"2.cosmetics"<<endl;
	      cout<<"3.daily use items"<<endl;

	      cin>>choicestart;

	      switch(choicestart)
		     {

		       case 1:   cout<<"how many items?"<<endl;
				 cin>>grocitem;
				 grocery gcy[100];
				 groc.open("groceryfile",ios::out|ios::binary);
				 for(int i=0;i<grocitem;i++)
				    {
				        cout<<"enter details of item no: "<<i+1<<endl;

				      gcy[i].init();
				      groc.write((char*)&gcy[i],sizeof(gcy[i]));

				     }
				 groc.close();

				 cout<<"grocery initialization complete!"<<endl;
				 flag1++;
				 break;


		       case 2:   cout<<"how many items?"<<endl;
				 cin>>cositem;
				 cosmetics csm[100];
				 cosm.open("cosmeticsfile",ios::out|ios::binary);
				 for(int j=0;j<cositem;j++)
				     {
				         cout<<"enter details of item no: "<<j+1<<endl;

					csm[j].init();
					cosm.write((char*)&csm[j],sizeof(csm[j]));

				      }

				  cosm.close();

				  cout<<"cosmetics initialization complete!"<<endl;
				  flag2++;
				  break;


		       case 3:    cout<<"how many items?"<<endl;
				  cin>>dlyitem;
				  dailyuse dail[100];
				  daily.open("dailyusefile",ios::out|ios::binary);
				  for(int k=0;k<dlyitem;k++)
				      {
				          cout<<"enter details of item no: "<<k+1<<endl;

					dail[k].init();
					daily.write((char*)&dail[k],sizeof(dail[k]));

				       }

				  daily.close();

				  cout<<"daily items initialization complete!"<<endl;
				  flag3++;
				  break;


		       default:   cout<<"wrong choice!"<<endl;
				  goto initialization;
				  break;


		     }



	      if(flag1==0||flag2==0||flag3==0)
		{ goto initialization;
		}
	      else flag++;
	      goto start;


	   }


	 else if(flag!=0)
	       {
	           modification:
		 cout<<"enter the category that you want to modify:"<<endl;
		 cout<<"1.grocery"<<endl;
		 cout<<"2.cosmetics"<<endl;
		 cout<<"3.daily use items"<<endl;

		 cin>>choicemod;

	if(choicemod!=1&&choicemod!=2&&choicemod!=3)
    {
        cout<<"WRONG CHOICE!"<<endl;
        goto modification;
    }

    else if(choicemod==1)
    {

        cout<<"do you want to:"<<endl;
        cout<<"1.add item:"<<endl;
        cout<<"2.delete item:"<<endl;
        cout<<"3.modify item:"<<endl;

        cin>>choice3;

        switch(choice3)
        {
            case 1: {

                    while(response1=='y'||response1=='Y')
                      {



                     groc.open("groceryfile",ios::in|ios::app|ios::binary);
                     cout<<"how many items?"<<endl;
                     cin>>grocitem1;

                     grocery gcy1[100];

                     for(int l=0;l<grocitem1;l++)
                     {
                         cout<<"enter details of item no: "<<l+1<<endl;

                         gcy1[l].init();
                         groc.write((char*)&gcy1[l],sizeof(gcy1[l]));
                     }

                     groc.close();
                     cout<<"want to add more items?"<<endl;
                     cin>>response1;
                      }
                     break;
                     }


            case 2:  while(response2=='y'||response2=='Y')

                     {
                         groc2.open("tempgroc",ios::out);
                         groc.open("groceryfile",ios::in|ios::app|ios::binary);

                         groc.seekg(0);
                         cout<<"enter the code of the item you want to delete:"<<endl;
                         cin>>code1;

                         while(!groc.eof())
                         {
                             grocery gcy2;
                             groc.read((char*)&gcy2,sizeof(gcy2));
                             if(gcy2.getcode()!=code1)
                             {
                                 groc2.write((char*)&gcy2,sizeof(gcy2));
                             }

                         }

                         groc.close();
                         groc2.close();
                         remove("groceryfile");
                         rename("tempgroc","groceryfile");

                         cout<<"want to delete more items(y/n)"<<endl;
                         cin>>response2;
                         break;
                     }




            case 3:  while(response3=='y'||response3=='Y')
                     {
                         cout<<"Enter the code of the item that you want to modify:"<<endl;
                         cin>>code2;
                         groc.open("groceryfile",ios::in|ios::out|ios::binary);
                         while(!groc.eof())
                         {
                             grocery gcy2;
                             pos=groc.tellg();
                             groc.read((char*)&gcy2,sizeof(gcy2));
                             if(gcy2.getcode()==code2)
                             {
                               gcy2.modify();
                               groc.seekg(pos);
                               groc.write((char*)&gcy2,sizeof(gcy2));
                             }

                         }

                         groc.close();
                         cout<<"want to modify more items(y/n)?"<<endl;
                         cin>>response3;
                         break;


                     }




        }



    }


    else if(choicemod==2)
    {
        cout<<"do you want to:"<<endl;
        cout<<"1.add item:"<<endl;
        cout<<"2.delete item:"<<endl;
        cout<<"3.modify item:"<<endl;

        cin>>choice5;

        switch(choice5)
        {
            case 1:  while(response4=='y'||response4=='Y')
                       {



                     cosm.open("cosmeticsfile",ios::in|ios::app|ios::binary);
                     cout<<"how many items?"<<endl;
                     cin>>cositem1;

                     cosmetics csm1[100];

                     for(int l=0;l<cositem1;l++)
                     {
                         cout<<"enter details of item no: "<<l+1<<endl;

                         csm1[l].init();
                         cosm.write((char*)&csm1[l],sizeof(csm1[l]));
                     }

                     cosm.close();
                     cout<<"want to add more items?"<<endl;
                     cin>>response4;
                       }
                     break;


            case 2:  while(response5=='y'||response5=='Y')

                     {
                         cosm2.open("tempcos",ios::out);
                         cosm.open("cosmeticsfile",ios::in|ios::app|ios::binary);

                         cosm.seekg(0);
                         cout<<"enter the code of the item you want to delete:"<<endl;
                         cin>>code3;

                         while(!cosm.eof())
                         {
                             cosmetics csm2;
                             cosm.read((char*)&csm2,sizeof(csm2));
                             if(csm2.getcode()!=code3)
                             {
                                 cosm2.write((char*)&csm2,sizeof(csm2));
                             }

                         }

                         cosm.close();
                         cosm2.close();
                         remove("cosmeticsfile");
                         rename("tempcos","cosmeticsfile");

                         cout<<"want to delete more items(y/n)"<<endl;
                         cin>>response5;
                     }

                     break;


            case 3:  while(response6=='y'||response6=='Y')
                     {
                         cout<<"Enter the code of the item that you want to modify:"<<endl;
                         cin>>code4;
                         cosm.open("cosmeticsfile",ios::in|ios::out|ios::binary);
                         while(!cosm.eof())
                         {
                             cosmetics csm2;
                             pos=cosm.tellg();
                             cosm.read((char*)&csm2,sizeof(csm2));
                             if(csm2.getcode()==code4)
                             {
                               csm2.modify();
                               cosm.seekg(pos);
                               cosm.write((char*)&csm2,sizeof(csm2));
                             }

                         }

                         cosm.close();
                         cout<<"want to modify more items?"<<endl;
                         cin>>response6;


                     }

                     break;


        }

    }


    else if(choicemod==3)
    {
      cout<<"do you want to:"<<endl;
        cout<<"1.add item:"<<endl;
        cout<<"2.delete item:"<<endl;
        cout<<"3.modify item:"<<endl;

        cin>>choice6;

        switch(choice6)
        {
            case 1:  while(response7=='y'||response7=='Y')
                      {


                     daily.open("dailyusefile",ios::in|ios::app|ios::binary);
                     cout<<"how many items?"<<endl;
                     cin>>dlyitem1;

                     dailyuse dail1[100];

                     for(int l=0;l<dlyitem1;l++)
                     {
                         cout<<"enter details of item no: "<<l+1<<endl;

                         dail1[l].init();
                         daily.write((char*)&dail1[l],sizeof(dail1[l]));
                     }

                     daily.close();
                     cout<<"want to add more items(y/n)?"<<endl;
                     cin>>response7;

                      }
                     break;


            case 2:  while(response8=='y'||response8=='Y')

                     {
                         daily2.open("tempdaily",ios::out);
                         daily.open("dailyusefile",ios::in|ios::app|ios::binary);

                         daily.seekg(0);
                         cout<<"enter the code of the item you want to delete:"<<endl;
                         cin>>code5;

                         while(!daily.eof())
                         {
                             dailyuse dail2;
                             daily.read((char*)&dail2,sizeof(dail2));
                             if(dail2.getcode()!=code5)
                             {
                                 daily2.write((char*)&dail2,sizeof(dail2));
                             }

                         }

                         daily.close();
                         daily2.close();
                         remove("dailyusefile");
                         rename("tempdaily","dailyusefile");

                         cout<<"want to delete more items(y/n)"<<endl;
                         cin>>response8;
                     }

                     break;


            case 3:  while(response9=='y'||response9=='Y')
                     {
                         cout<<"Enter the code of the item that you want to modify:"<<endl;
                         cin>>code6;
                         daily.open("dailyuse",ios::in|ios::out|ios::binary);
                         while(!daily.eof())
                         {
                             dailyuse dail2;
                             pos=daily.tellg();
                             daily.read((char*)&dail2,sizeof(dail2));
                             if(dail2.getcode()==code6)
                             {
                               dail2.modify();
                               daily.seekg(pos);
                               daily.write((char*)&dail2,sizeof(dail2));
                             }

                         }

                         daily.close();
                         cout<<"want to modify more items?"<<endl;
                         cin>>response9;


                     }

                     break;


        }

    }



    cout<<"want to do more modification(y/n)?"<<endl;
    cin>>choice4;
    if(choice4=='y'||choice4=='Y')
    {
        goto modification;
    }

    else goto start;


	       }

      }



      else if(choice==2)
      {


      if(flag==0)
      {
          cout<<"please initialize first!!"<<endl;
          goto start;
      }

      else
      {
          customermenu:

          cout<<"enter the category:"<<endl;
          cout<<"1.grocery"<<endl;
          cout<<"2.cosmetics"<<endl;
          cout<<"3.daily use items"<<endl;
          cout<<"4.print bill"<<endl;
          cout<<"5.main menu"<<endl;

          cin>>choice7;

          if(choice7!=1&&choice7!=2&&choice7!=3&&choice7!=4&&choice7!=5)
          {
              cout<<"INVALID CHOICE!"<<endl;
              goto customermenu;
          }

       else if(choice7==1)
       {
           while(custresponse1=='y'||custresponse1=='Y')
           {
               cout<<"the list of grocery items is:"<<endl;
               groc.open("groceryfile",ios::in|ios::out|ios::binary);
               while(!groc.eof())
               {
                   grocery gcy2;
                   groc.read((char*)&gcy2,sizeof(gcy2));
                   gcy2.print();
               }

               cout<<"enter the code of the item you want:"<<endl;
               cin>>code7;
               groc.seekg(0);
               cout<<"enter the quantity"<<endl;
               cin>>qty1;
               while(!groc.eof())
               {
                   grocery gcy2;
                   groc.read((char*)&gcy2,sizeof(gcy2));
                   if(gcy2.getcode()==code7)
                   {
                    if(gcy2.getqty()>=qty1)
                   {
                       bill=bill+(qty1*gcy2.getprice());
                       flag4++;
                       break;
                   }

                   else cout<<"stock not avilable"<<endl;
                   }
               }
               cout<<"want to buy more items(y/n)?"<<endl;
               cin>>custresponse1;
               groc.close();

           }
           goto customermenu;


       }

       else if(choice7==2)
       {
           while(custresponse2=='y'||custresponse2=='Y')
           {
               cosmetics csm2;
               cout<<"the list of cosmetics items is:"<<endl;
               cosm.open("cosmeticsfile",ios::in|ios::out|ios::binary);
               while(!cosm.eof())
               {
                   cosm.read((char*)&csm2,sizeof(csm2));
                   csm2.print();
               }

               cout<<"enter the code of the item you want:"<<endl;
               cin>>code8;
               cosm.seekg(0);
               cout<<"enter the quantity"<<endl;
               cin>>qty1;
               while(!cosm.eof())
               {
                   cosm.read((char*)&csm2,sizeof(csm2));
                   if(csm2.getcode()==code8)
                   {
                    if(csm2.getqty()>=qty1)
                   {
                       bill=bill+(qty1*csm2.getprice());
                       flag5++;
                       break;
                   }

                   else cout<<"stock not avilable"<<endl;
                   }
               }
               cout<<"want to buy more items(y/n)?"<<endl;
               cin>>custresponse2;

           }
           goto customermenu;


       }

       else if(choice7==3)
       {
          while(custresponse3=='y'||custresponse3=='Y')
           {
               dailyuse dail2;
               cout<<"the list of dailyuse items is:"<<endl;
               daily.open("dailyusefile",ios::in|ios::out|ios::binary);
               while(!daily.eof())
               {
                   daily.read((char*)&dail2,sizeof(dail2));
                   dail2.print();
               }

               cout<<"enter the code of the item you want:"<<endl;
               cin>>code9;
               daily.seekg(0);
               cout<<"enter the quantity"<<endl;
               cin>>qty1;
               while(!daily.eof())
               {
                   daily.read((char*)&dail2,sizeof(dail2));
                   if(dail2.getcode()==code9)
                   {
                    if(dail2.getqty()>=qty1)
                   {

                       bill=bill+(qty1*dail2.getprice());
                       flag6++;
                       break;
                   }

                   else cout<<"stock not avilable"<<endl;
                   }
               }
               cout<<"want to buy more items(y/n)?"<<endl;
               cin>>custresponse3;

           }
           goto customermenu;


       }

       else if(choice7==4)
       {
           if(flag4>0||flag5>0||flag6>0)
           {
               cout<<"the total bill is"<<bill<<endl;
               cout<<"Thankyou for shopping with us!"<<endl;
               goto start;
           }
           else
           {
               cout<<"you did not buy anything!!"<<endl;
               goto customermenu;
           }
       }


       else if(choice7==5)
       {
           goto start;
       }



           }
      }

   return 0;
       }





