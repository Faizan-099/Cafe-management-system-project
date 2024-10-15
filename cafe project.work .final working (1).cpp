#include<iostream>
#include<fstream>
using namespace std;

 class menu{
	private:
		int legbroast=400,chickentikka=400,
			  chickenbotti=480,
			  hotdog=250,chickenburger=270,
		  	clubsandwich=400,chickenfriedrice=400,
			  chickengarlicrice=350,cheseroll=250,
			  pizzacrispyroll=250,beefroll=250,
		  	chickenpasta=450,paratha=65,raita=65,
			  regulerfries=250,mineralwater=70,
			  coffee=170,drink=100,cake=100;
		int select; 
		public:
     int totall=0;
			void show()
			{
			
						  	system("cls");
					cout<<"\n\n\t\t\t\t____Select your order_____ "<<endl;
			cout<<"\n\t\t\t\t. 1=Leg broast=400Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 2=Chicken tikka=400Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 3=Chicken boti=480Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 4=Hot dog=250Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 5=Chicken burger=270Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 6=Club sandwich=400Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 7=Chicken fried rice=400Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 8=Chicken garlic rice=350Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 9=Chese roll=250Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 10=Pizza crispy roll=250Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 11=Beef roll=250Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 12=Chicken pasta=450Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 13=Paratha=65Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 14=Raita=65Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 15=Reguler fries=250=Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 16=Mineral water=70Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 17=coffee=170Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 18=Drink=100Rs"<<endl;
		  	cout<<"\n\t\t\t\t. 19=Cake=100Rs"<<endl;
		  	
			cout<<"\n\n\t\tAfer selecting please! Enter 20:"<<endl;
			
			do{
		  		cout<<"\n\t\t\t=> Please enter your choice:";
		  		cin>>select;
		  		switch(select){
				  
		  			case 1:
		  			
		  			totall=totall+legbroast;
		  			break;
		  			case 2:
					  
					  totall=totall+chickentikka;
					  break;
					  case 3:
					
					  	totall=totall+chickenbotti;
					  	break;
					  	case 4:
					
					  	totall=totall+hotdog;
					  	break;
					  	case 5:
					
					  	totall=totall+chickenburger;
					  	break;
					  	case 6:
		  	            
		  	            totall=totall+clubsandwich;
		  	            break;
		  	            case 7:
			    
			            totall=totall+chickenfriedrice;
			        break;
			        case 8:
			        	
			        	totall=totall+chickengarlicrice;
			        	break;
			        	case 9:
						
						totall=totall+cheseroll;
						break;
						case 10:
			          
			          totall=totall+pizzacrispyroll;
			          break;
			         case 11:
			         
			         totall=totall+beefroll;
			         break;
			         case 12:
		  	         
		  	         totall=totall+chickenpasta;
		  	         break;
		  	         case 13:
					   
					   totall=totall+paratha;
					   break;
					   case 14:
					   
					   totall=totall+raita;
					   break;
					   case 15:
			          
			          totall=totall+regulerfries;
			          break;
			          case 16:
			        
			          totall=totall+mineralwater;
			          break;
			          case 17:
			        
			          totall=totall+coffee;
			          break;
			          case 18:
			        
			          totall=totall+drink;
			          break;
			          
			          case 19:
			        
			          totall=totall+cake;
			          break;
			           case 20:
			          	
			          	system("cls");
			        
			          	cout<<endl;
			          	cout<<endl;
		  	            cout<<"\t\t\t\ttotall="<<totall<<"Rs"<<endl;
		  	            cout<<endl;	  	            
			          
}
}
while(select!=20);
}
 
    


};


class payment:public menu{
	private:
	int slec;
    	string account_number;
		long pin;
    
    	
	public:
	void input()
	{
	
	cout<<"\t\t---There are some payment methods for order:---\n"<<endl;
	cout<<"\t\t\t\tPlease choice one:-"<<endl;
	cout<<endl;
	cout<<"\n\t\t\t\t. 1=Cash:"<<endl;
	   cout<<"\n\t\t\t\t. 2=HBL Bank:"<<endl;
		 cout<<"\n\t\t\t\t. 3=Eaisy paisa"<<endl;
		 cout<<"\n\t\t\t\t. 4=jazz cash:"<<endl;
		 cout<<"\n\t\t\t\t. 5=pay pall:"<<endl;
		 
		 
		 cout<<"\n\t\t\t\t. :";
    	cin>>slec;
    	switch (slec){
    		case 1:
		cout<<"\t\t\t\tGave cash:";
		cin>>account_number;
		cout<<"\t\t\t\tyour payment is confirmed:"<<endl;
		cout<<endl;
		cout<<endl;
		break;
	case 2:
		
	
		cout<<"\t\t\t\tEnter  Accout Number:";
		cin>>account_number;
		cout<<"\t\t\t\tEnter the password:";
		cin>>pin;
		cout<<"\t\t\t\tyour payment is confirmed:"<<endl;
		cout<<endl;
		
		cout<<endl;
		break;
	case 3:
		
		cout<<"\t\t\t\tEnter  Accout Number:";
		cin>>account_number;
		cout<<"\t\t\t\tEnter the password:";
		cin>>pin;
		cout<<"\t\t\t\tyour payment is confirmed:"<<endl;
		cout<<endl;
		
		cout<<endl;
		break;
		
		case 4:
		
		cout<<"\t\t\t\tEnter  Accout Number:";
		cin>>account_number;
		cout<<"\t\t\t\tEnter the password:";
		cin>>pin;
		cout<<"\t\t\t\tyour payment is confirmed:"<<endl;
		cout<<endl;
		
		cout<<endl;
		break;
		case 5:
		
		cout<<"\t\t\t\tEnter  Accout Number:";
		cin>>account_number;
		cout<<"\t\t\t\tEnter the password:";
		cin>>pin;
		cout<<"\t\t\t\tyour payment is confirmed:"<<endl;
		cout<<endl;
		
		cout<<endl;
		break; 	
}
	
}

};



class Rating{
	public:
	void star()
	{
		cout<<endl<<endl;
		for(int c=0;c<14;c++){
	
	cout<<"________________________";
	}
		cout<<"\n\n\n\t\t\t\t\t\tPlease sir rate us our service:-"<<endl;
		int n;
	            cout<<endl;
				cout<<"\n\t\t\t\t\t=>Rate us with no. of stars between 1 to 5:-\t";			
				cin>>n;
				
				if(n==1||n==2||n==3||n==4||n==5)
				{	
						cout<<endl;
							system("cls");
						for(int i=1;i<=n;i++)
					
						{
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\t*";
				
				
			}
			
			cout<<endl;
			for(int c=0;c<14;c++){
	
	cout<<"____________";
	}
				}
			cout << "\n\n\n\t\t\t\t\t****THANKS FOR RATING****" << endl;
					for(int c=0;c<14;c++){
	
	cout<<"____________";
	}
	}
};


int main()
{
	int d,m,y,t;
    string name,phno;	

	
int confirm;
	int choice;
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"________________________________________________________________________________________________________________________________________________________________________"<<endl;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t";
	
	cout<<"==========CAFE MANAGEMENT SYSTEM==========\n\n\n"<<endl;
		cout<<"________________________________________________________________________________________________________________________________________________________________________"<<endl;
	system("pause");
						  	system("cls");
						  		cout<<"\n\n\t\t\t\t\t\t\t\tEnter Today Date \n\n\n\n\n\n"<<endl;
				cout<<"\n\tEnter dd:-";
				cin>>d;
				cout<<"\n\tEnter mm:-";
				cin>>m;
				cout<<"\n\tEnter yyyy:-";
				cin>>y;
				cout<<"\n\n\t\t\t\t\t\t\t\tEnter your name:-";
				cin>>name;
				cout<<"\n\t\tEnter your phone no:-";
				cin>>phno;
	system("pause");
						  	system("cls");
						  	
	cout<<"\n\n";
	 for(int c=0;c<14;c++){
	
	cout<<"________________________";}
	
	
	for(int c=1;c<5;c--){
	
	
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tWELCOME "<<endl;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t--- VIEW OUR MENU METHOD--- :"<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t=>1.Menu & Order system"<<endl;
	cout<<"\t\t\t\t\t\t\t\t=>2.Rating"<<endl;
	cout<<"\t\t\t\t\t\t\t\t=>3.Show data"<<endl;
	cout<<"\t\t\t\t\t\t\t\t=>4.Exit"<<endl;
	for(int n=0;n<14;n++){
	
	cout<<"________________________";}
	cout<<"\n\n\n\t\t\t\t\t\t\t\t******Choose any option******"<<endl;
	cin>>choice;
	if(choice==1)
	{
			{
				system("cls");
			menu obj;
			obj.show();	
			
			for(int n=1;n<2;n--)
			{
				
			for(int c=0;c<14;c++){
	cout<<"________________________";}
	
	
		cout<<"\n\n\n\t\t____Are you sure, your order is confirm :____"<<endl;
		  	            cout<<"\n\n\t\t\t1. NO"<<endl;
		  	            cout<<"\t\t\t2.YES"<<endl;
		  	            cin>>confirm;
		  	            
						  
		  	            if(confirm==1){
		  	            	system("cls");
		  	            	obj.menu::show();
		  	            	
						  }
						   else if(confirm==2)
						  {
						  	cout<<"\t\t\t\tyour order has confirmed:\n"<<endl;
						  	system("pause");
						  	system("cls");
						  	payment p;
			            	p.input();
			            	system("pause");
					    	system("cls");
			cout<<"\n\n\n\n\t\t\t\tPlease Enter total bill you paid:-";
				cin>>t;
					cout<<"\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________"<<endl;
				cout << "\n\n\n\t\t\t\t\t****THANKS FOR ORDERING****" << endl;
				cout<<"________________________________________________________________________________________________________________________________________________________________________"<<endl;
		system("pause");
						system("cls");  	
						  	break;
						  }
						  
						  else {
					cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t*****Please choose right option*****";
					system("pause");
						  	system("cls");
				}
						   }
						   
						   }
						   
						   }
						  	    
						  else if(choice==2)
						  {
						  	system("pause");
						system("cls");
						  	Rating obj1;
	                        obj1.star();
	                        	system("pause");
						system("cls");
								}
		
					if(choice==3){
					
				ofstream myn;
	myn.open("E:\\faizan.txt",ios::app);  //append mode use for write data in file
	myn<<"Date:-"<<d<<"/"<<m<<"/"<<y<<"\n";
	myn<<"Name:-"<<name<<"\n";
	myn<<"phone No:-"<<phno<<"\n";
	myn<<"Total Bill you paid:-"<<t<<"\n";
	myn<<"---------------------------------------------------------------------------------------------------------------------"<<"\n";
	system("pause");
						system("cls");
	cout<<"\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________"<<endl;
	cout<<"Date:-"<<d<<"/"<<m<<"/"<<y<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Phone no:-"<<phno<<endl;
	cout<<"total bill:-"<<t;
    cout<<"\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________"<<endl;
	system("pause");
						system("cls");
		myn.close();
		}
		else if(choice==4)
		{
			
		cout<<"\n\n\n\t\t\tThanks for visting"<<endl;
		break;	
		}
		
		}

		
}
									

		


