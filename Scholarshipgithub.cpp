#include<iostream>
 #include<stdio.h> 
 #include<string.h> 
 #include<fstream>
 
  using namespace std;
  
   class scholar 
   {
    public: 
   char name[30],father[30]; 
   int lpunest;
float board;
 static long id_no;
 int p; 
 static int q; 
 int month;
 int d,e,f,g,d1,e1,f1,g1;
 char state[30];
 
 
 public:
void in() 
{ 
cout<<endl<<"Enter Details For Student("<<q++<<") :-"; 
cout<<endl<<"Name of the student-"; 
cin>>name; 
cout<<endl<<"His/Her Father's name-";
 cin>>father; 
 cout<<endl<<"Lpunest marks-"; 
 cin>>lpunest;
 cout<<endl<<"From which state are you from?" ;
 cin>>state;
 
 if(lpunest>360||lpunest<0)
  {
   cout<<endl<<"Your marks are not valid"; 
   cout<<endl<<"Do you want to proceed?"<<endl<<"(Press 1 Or 2)";
    cout<<endl<<"1.YES"<<endl<<"2.NO"<<endl; 
	int y; 
	cin>>y;
	 if(y!=1&&y!=2) 
	{ 
	cout<<endl<<"Invalid Choice"; 
	cout<<endl<<" Please press 1 Or 2"<<endl;
	 int z;
	  cin>>z;
	   if(z==1) 
	   y=1;
	    else if(z==2)
		 y=2;
		  else 
		  exit(0);
		   } 
		   if(y==2) 
		   { 
		   cout<<endl<<"End!"; 
		   exit(0);
		    } 
			else if(y==1)
			 { 
			 cout<<endl<<"Your LPUNEST Marks Are not Counted as entered lpunest marks are not valid"<<endl; 
			 }
			  }
			   cout<<endl<<" Enter your 12th board marks:-"; 
			   cin>>board; 
			   if(board>100||board<0) 
{ 
cout<<endl<<"Your 12th Board Marks Are Invalid";
 cout<<"Your 12th Board marks are not counted";
} 
cout<<endl<<"Have You played any National Level sport?";
 cout<<endl<<"Press 1 Or 2:"; 
 cout<<endl<<"1. YES"<<endl<<"2. NO"<<endl; 
 int a;
  cin>>a;
   if(a!=1&&a!=2)
    { 
	cout<<endl<<"Invalid Choice";
	 cout<<endl<<"Please Press 1 Or 2"<<endl;
	  int b;
	   cin>>b;
	    if(b==1)
		 a=1; 
		 else if(b==2) 
		 a=2; 
		 else
		  exit(0);
		   } 
		   if(a==1) 
		   { 
		   cout<<endl<<"Name Of the Sport that you have played at national level"<<endl; 
		      char c[30];
			   cin>>c;
		cout<<endl<<"Which medal have you received?"<<endl; 
		cout<<"1. GOLD"<<endl<<"2. SILVER"<<endl<<"3. BRONZE"<<endl; 
				cin>>p; 
	if(p!=1&&p!=2&&p!=3) 
	cout<<endl<<"Invalid Choice";
				 } 
	else if(a==2)
				  {
				  p; 
				  } 
	 cout<<endl<<"Thanku for your information!"<<endl;
				  if(board<40) 
				   { 
				   cout<<endl<<endl<<"You Are Failed In Your 12th Standard"<<endl;
				    cout<<endl<<"Try Next Year for LPU";
}
if(board<65) 
{
cout<<endl<<"You Are Passed In Your 12th Standard"<<endl; 
cout<<endl<<"But Your Percentage Are Not Sufficient To Take Admission In B.Tech"<<endl; 
cout<<endl<<"Try Next Year"<<endl;
}
}
void out()
 {
cout<<endl<<"Your SCHOLARSHIP details:-"<<endl;
 if(lpunest>-1&&lpunest<361) 
 { 
if(lpunest>99&&lpunest<201)
 { 
 d=30000;
  cout<<endl<<"Scholarship Based On LPUNEST:-"<<d<<"Rs/- Per Sem";
   }
    else if(lpunest>200&&lpunest<301)
	 { 
	 d=40000;
	  cout<<endl<<"Scholarship Based On LPUNEST:-"<<d<<"Rs/- Per Sem";
	   } 
	   else if(lpunest>300&&lpunest<361) 
	   { 
	   d=50000;
	    cout<<endl<<"Scholarship Based On LPUNEST:-"<<d<<"Rs/- Per Sem"; 
		}
		 else if(lpunest>-1&&lpunest<100) 
		 {
		  d=0;
		   cout<<"(No Scholarship for marks less than 100 in LPUNEST)";
     } 
	 else d=0;
	  } 
	   
	   if(board>64&&board<101) 
	    { 
		 if(d==50000)  
		 {  
		  e=0; 
		   cout<<endl<<"Scholarship Based On 12th Board Marks:- N.A";  
		   cout<<endl<<"(You Have Maximum Scholarship Already)"; 
		   } 
		   else if(d==40000)  
		   
		      { 
			  if(board>89)
				  {                    
		  e=10000; 
				     cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem"; 
					 } 
		 else if(board>69&&board<90)
					  { 
 e=5000;
 cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem";     
					     } 
			 else if(board>64&&board<70)   
			{
			 e=0;   
			 cout<<endl<<"(No Scholarship For Percentage Less Than 70)";
			 
			  } 
			  } 
			  else if(d==30000)
			   { 
			   if(board>89)
			    {                    
				 e=10000;
				  cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem"; 
				  } 
				  else if(board>69&&board<90)
{
 e=5000;
cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem"; 

        }
        
else if
(board>64&&board<70)
 { 
   e=0;        
   cout<<endl<<"(No Scholarship For Percentage Less Than 70)";
    }
	 }
	  else if(d==0) 
	  {       
	   if(board>89)       
	    {
                        e=30000;
   cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem";

} 
else if(board>79&&board<90)
 {  
  e=25000;  
   cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem"; 

        }       
		 else if(board>69&&board<80) 
		 { 
		   e=20000;  
		    cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e<<"Rs/- Per Sem";

}
 else if(board>64&&board<70) 
{  
 e=0;    
cout<<endl<<"(No Scholarship For Percentage Less Than 70)"; 
}
 }
  }

 if (p==1||p==2||p==3)
  {
if(p==1)
{
 f=84500;
  cout<<endl<<"You Are Going To Get 100% Scholarship On Tuition Fee On The Basis Of Sports Scholarship As You Are Gold Medalist";
   } 
   else if(p==2)
    {
	 f=42250; 
	 cout<<endl<<"You Are Going To Get 50% Scholarship On Tuition Fee On The Basis Of Sports Scholarship As You Are Silver Medalist";
	 
} 
else if(p==3)
 { 
 f=21125; 
 cout<<endl<<"You Are Going To Get 25% Scholarship On Tuition Fee On The Basis Of Sports Scholarship As You Are Bronze Medalist";

}
} 
else f=0;

 if(p==1||p==2||p==3) 
 { 
 cout<<endl<<"1. Total Academic Scholarship:-"<<d+e<<"Rs/- Per Sem";

cout<<endl<<"2. Total Sports Scholarship:-"<<f<<"Rs/- Per Sem"<<endl<<endl;

if((d+e)>f)
 {
  cout<<"You Will Get Academic Scholarship:-"<<(g=d+e)<<"Rs/- Per Sem";

}
 else
  cout<<"You Will Get Sports Scholarship:-"<<(g=f)<<"/- Per Sem";
  
} 
else cout<<endl<<"Total Scholarship:-"<<(g=d+e)<<"/- Per Sem";


}

void out1()
 {
cout<<endl<<endl<<"Your SCHOLARSHIP Details:-"<<endl;
 
 if(lpunest>-1&&lpunest<361)
  {
   if(lpunest>99&&lpunest<201)
   { 
   d1=25000;
    cout<<endl<<"Scholarship Based On LPUNEST:-"<<d1<<"Rs/- Per Sem";
	 } 
	 else if(lpunest>200&&lpunest<301)
	  { 
	  d1=35000;
	   cout<<endl<<"Scholarship Based On LPUNEST:-"<<d1<<"Rs/- Per Sem"; 
	  }
else if(lpunest>300&&lpunest<361) 
{ 
d1=45000;
 cout<<endl<<"Scholarship Based On LPUNEST:-"<<d1<<"Rs/- Per Sem";
  } 
  else if(lpunest>-1&&lpunest<100)
   {
    d1=0; 
	cout<<"(No Scholarship For Marks Less Than 100)";
	cout<<"Try any other option for the scholarship";
     } 
	 }
	  else d1=0; 
	  
	    if(board>64&&board<101)  
		{  
		if(d1==45000) 
		 {  
		  e1=0;
		   cout<<endl<<"Scholarship Based On 12th Board Marks:- N.A"<<endl; 
		    cout<<endl<<"(You Have Maximum Scholarship Already)"; 
			}
			 else if(d1==35000)   
			      { 
				  if(board>89) 
				  {                   
				   e1=5000 ; 
				  cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem"; 
				  } 
				  else if(board>69&&board<90)
				   { 
				   e1=2500; 
				   cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem";    
				       } 
					   else if(board>64&&board<70) 
					           {
		e1=0; 
							     cout<<endl<<"(No Scholarship For Percentage Less Than 70)"; 
								 }
								  }
								   else if(d1==25000) 
								   { 
								   if(board>89)
								    {  
						 e1=5000;
				  cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem";
				   }
				    else if(board>69&&board<90)
					 { 
					 e1=2500; 
					 cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem"; 
					        } 
							else if(board>64&&board<70)
							 {   
							 e1=0;  
				cout<<endl<<"(No Scholarship For Percentage Less Than 70)"; 
				} 
				}
else if(d1==0)
 {       
  if(board>89)       
   {
                        e1=25000;
   cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem";

}
 else if(board>79&&board<90)
  {  
   e1=20000;  
    cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem";

        }        
		else if(board>69&&board<80)
		 {   
		 e1=15000; 
		   cout<<endl<<"Scholarship Based On 12th Board Marks:-"<<e1<<"Rs/- Per Sem";

} 
else if(board>64&&board<70) 
{  
 e1=0;   
        cout<<endl<<"(No Scholarship For Percentage Less Than 70)";
		 }
		  }
		   }

 if (p==1||p==2||p==3)
  {
if(p==1)
{ 
f1=74500; 
cout<<endl<<"You Are Going To Get 100% Scholarship On Tuition Fee On The Basis Of Sports Scholarship As You Are Gold Medalist";
 } 
 else if(p==2)
  { 
  f1=32250;
   cout<<endl<<endl<<"You Are Going To Get 50% Scholarship On Tuition Fee On The Basis Of Sports Scholarship As You Are Silver Medalist";
   
} 
else if(p==3) 
{
 f1=11125;
 cout<<endl<<endl<<"You Are Going To Get 25% Scholarship On Tuition Fee On The Basis Of Sports Scholarship As You Are Bronze Medalist";
}
} 
else f1=0;
 if(p==1||p==2||p==3) 
 { cout<<endl<<endl<<"1. Total Academic Scholarship:-"<<d1+e1<<"Rs/- Per Sem"; 

cout<<endl<<"2. Total Sports Scholarship:-"<<f1<<"/- Per Sem"<<endl<<endl;

if((d1+e1)>f1)
 { 
 cout<<"You Will Get Academic Scholarship:-"<<(g1=d1+e1)<<"Rs/- Per Sem"; 

} 
else cout<<"You Will Get Sports Scholarship:-"<<(g1=f1)<<"Rs/- Per Sem";

}
 else cout<<endl<<endl<<"Total Scholarship:-"<<(g1=d1+e1)<<"Rs/- Per Sem";
 


	 }
void phase() 
{ 
cout<<"Enter the month in which you have given lpunest"<<endl; 
cin>>month;
 if(month>=3&&month<=5)
  { cout<<"You are eligible for admission under phase 1"<<endl; 
  out();
  fstream f2; 
f2.open("Scholarship Details.cpp",ios::out|ios::app); 
f2<<"Scholarship Details For Student :-";
f2<<endl<<"Name:-"<<name; 
f2<<endl<<"Father's Name:-"<<father; 
f2<<endl<<"ID Number:-"<<id_no++;
f2<<endl<<"LPUNEST MARKS:-"<<lpunest<<"/360"; 
f2<<endl<<"12th Board Marks:-"<<board<<"%";
f2<<endl<<endl<<"Total Scholarship:-"<<d+e<<"Rs/- Per Sem";  
f2<<endl<<"Sports Scholarship:-"<<f<<"Rs/- Per Sem";
f2<<endl<<endl<<"(TERMS:- Maximum Scholarship Among Academic Or Sports Will Be Considered";

    f2<<endl<<endl<<"Total Scholarship:- "<<g<<"Rs/- Per Sem"; 
	f2.close();
   }
else if(month>=6&&month<=8) 
{
 cout<<"You are eligible for admission under phase 2"<<endl;
  out1();
  fstream f2; 
f2.open("Scholarship Details.cpp",ios::out|ios::app);
 f2<<"Scholarship Details For Student :-";
  f2<<endl<<"Name:-"<<name; 
  f2<<endl<<"Father's Name:-"<<father;
   f2<<endl<<"ID Number:-"<<id_no++; 
   f2<<endl<<"LPUNEST MARKS:-"<<lpunest<<"/360"; 
   f2<<endl<<"12th Board Marks:-"<<board<<"%"; 
   f2<<endl<<endl<<"Total Scholarship:-"<<d1+e1<<"Rs/- Per Sem"; 
      f2<<endl<<"Sports Scholarship:-"<<f1<<"Rs/- Per Sem"; 
	  f2<<endl<<endl<<"(TERMS:- Maximum Scholarship Among Academic Or Sports Will Be Considered)";

    f2<<endl<<endl<<"Total Scholarship:- "<<g1<<"Rs/- Per Sem"<<endl;
	 f2.close();
   } 
   else
    { 
	cout<<"Admissions are over"<<endl;
	 cout<<"Try Next Year!"<<endl; 
	} 
	}
void	show()
	{  
	cout<<name;
	}
};
 long scholar::id_no=11717801;
  int scholar::q=1; 

  
int main() 
{ 
scholar *v1;
system("color 05");
 
cout<<"\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"; 
cout<<endl<<"\t  WELCOME TO THE SCHOLARSHIP CALCULATION FOR FRESHMEN"<<endl;
cout<<"\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"\t SCHOLARSHIP SCHEME FOR PHASE-1 FRESHMEN"<<endl;
cout<<"\t___________________________________________________________________\n";
cout<<"\t|LPUNEST(99-201) & >89% in 12th         |  Rs.40000              |\n";
cout<<"\t|LPUNEST(99-201) & 69% to 89% in 12th   |  Rs.35000              |\n";
cout<<"\t|LPUNEST(200-301) & >89% in 12th        |  Rs.50000              |\n";
cout<<"\t|LPUNEST(200-301) &  69% to 89% in 12th |  Rs.45000              |\n";
cout<<"\t|LPUNEST(300-360)                       |  Rs.50000              |\n";
cout<<"\t|Gold Medalist                          |  Rs.84500              |\n";
cout<<"\t|Silver Medalist                        |  Rs.42250              |\n";
cout<<"\t|Bronze Medalist                        |  Rs.21125              |\n";
cout<<"\t___________________________________________________________________\n"<<endl<<endl;

cout<<"\t SCHOLARSHIP SCHEME FOR PHASE-2 FRESHMEN"<<endl;
cout<<"\t___________________________________________________________________\n";
cout<<"\t|LPUNEST(99-201) & >89% in 12th         |  Rs.30000              |\n";
cout<<"\t|LPUNEST(99-201) & 69% to 89% in 12th   |  Rs.27500              |\n";
cout<<"\t|LPUNEST(200-301) & >89% in 12th        |  Rs.40000              |\n";
cout<<"\t|LPUNEST(200-301) &  69% to 89% in 12th |  Rs.37500              |\n";
cout<<"\t|LPUNEST(300-360)                       |  Rs.45000              |\n";
cout<<"\t|Gold Medalist                          |  Rs.74500              |\n";
cout<<"\t|Silver Medalist                        |  Rs.32250              |\n";
cout<<"\t|Bronze Medalist                        |  Rs.11125              |\n";
cout<<"\t___________________________________________________________________\n"<<endl;
x: cout<<"\nENTER 1.TO WRITE STUDENT DATA\n";
cout<<"\nENTER 2.TO READ STUDENT DATA\n";
cout<<"\nENTER 3.TO SEARCH THE STUDENT DETAIL BY REGISTRATION NUMBER PROGRAM\n";
cout<<"\nENTER 4.TO EXIT\n";
int n1;
cin>>n1;
while(1)
{
	if(n1==1)
	{
cout<<endl<<" \nFor How Many students you want to calculate scholarship ?\n";
 int n,i;
  cin>>n; 
  
   v1=new scholar[n];
    for(i=0;i<n;i++) 
	{ 
(v1+i)->in();
	(v1+i)->phase();
	 }
	 delete []v1;
	 goto x;
	  }
	  else if(n1==2)
	  {
	   ifstream f1;
     char ch;
     f1.open("Scholarship Details.cpp",ios::in);
     
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
	  	goto x;
	  }
	  else if(n1==3)
	  {
	   ifstream f1;
     f1.open("Scholarship Details.cpp",ios::in);
    
     v1=new scholar;
    long int reg;
    int t2=0;
        cout<<"\nENTER THE REGISTRATION NUMBER TO BE  SEARCHED\n";
        cin>>reg;
        f1.read((char*)(v1),sizeof(*(v1)));
        if(reg==(v1)->id_no)
        {
        	t2++;
        	(v1)->show();
        	
		}
		if(t2==0)
		{
			cout<<"\n file not found\n";
		}
	  	goto x;
}
	  else if(n1==4)
	  {
	  	exit(0);
	  }
}
}
