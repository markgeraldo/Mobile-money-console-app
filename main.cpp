#include <iostream>
 using namespace std;
/*
 */
 
 // declaring global varibles
 
 int a=1;
 int b=2;
 int c=3;
 int d=4;
 float remain;
 int balance=5000;
 string code="*170#";
 string codeIn;
 string pin="1234";
 string myNumber="0266555270";
 string userName="Sylvester Amegashie";
 string location="Lapaz";
 
 
 void airtime(){
 	string number;
 	string reference;
 	float amount;
 	string confirm;
 	string pinIn;
 	
 	
 	
 	cout<<"*******SEND AIRTIME TO ALL NETWORKS*******"<<endl<<endl;
 	cout<<"Enter Recipient Number"<<endl;
 	cin>>number;
 		cout<<"Repeat Number"<<endl;
 	cin>>confirm;
 	
 	if(number!= confirm){
 		cout<<"number doesnt Match!!,Check again."<<endl;
 		
 		
	 }
 	cout<<"Enter Amount(Ghs) "<<endl;
 	cin>>amount;
 	
 	cout<<"Ghs"<<amount<<"Airtime  will be sent to "<<number<<"Enter PIN to send"<<endl;
 	
 	cin>>pinIn;
 
 
 	
 	//processing pin & balance
 	
 	if(pinIn==pin){
 		
 		remain=balance-amount;
 		
 		
 		
 		
 	cout<<"Airtime succefully sent,remaining Balance is = "<<remain<<endl;
 	
    
 	
 
	 }
	 
	 

	 
	else if (pinIn!=pin){
	 
	 cout<<"WRONG PIN!!!"<<endl;
	 
	 
	 }
	 
 	
 	
 }
 
 
 void account(){
 	
 	
 	string pinIn;
 	
 	
 	cout<<"Enter PIN to view Information"<<endl;
 	
 	cin>>pinIn;
 
 
 	
 	//processing pin 
 	
 	if(pinIn==pin){
 	
 	cout<<"Username = "<<" "<<userName<<endl;
 	cout<<"User Number = "<<" "<<myNumber<<endl;
 	cout<<"User PIN = "<<" "<<pin<<endl;
 	cout<<"Location = "<<" "<<location<<endl;
 	}
 	
 		else if (pinIn!=pin){
	 
	 cout<<"WRONG pIN!!!"<<endl;
	 
	 
	 }
	 
 }
 
 
 void withdraw(){
 	
 	int out;
 	
 		cout<<"ALLOW CASH OUT"<<endl;
 	
 	cout<<"PRESS (1) TO ALLOW CASH OUT"<<endl;
 	cin>>out;
 	
 	if(out==1)
 	{
 		cout<<"Cash Out Sucesseful"<<endl;
 		
 	
	 }
 	
 	
 	
 }
 
 
 void data(){
 	string number;
 	string reference;
 	float amount;
 	float data;
 	string confirm;
 	float giga;
 	string pinIn;
 	
 	
 	
 	cout<<"*******SEND DATA  TO ALL NETWORKS*******"<<endl<<endl;
 	cout<<"Enter Recipient Number"<<endl;
 	cin>>number;
 		cout<<"Repeat Number"<<endl;
 	cin>>confirm;
 	
 	if(number!= confirm){
 		cout<<"number doesnt Match!!,Check again."<<endl;
 		
 		
	 }
 	cout<<"Enter Amount(Ghs)=amount*50(mb) "<<endl;
 	cin>>amount;
 	
 	//counverting amount to gigabytes
 	
 	data=amount*50;
 	giga=data/1000;
 	
 	cout<<giga<<" "<<"Gigabyte  will be sent to "<<number<<"Enter PIN to send"<<endl;
 	
 	cin>>pinIn;
 
 
 	
 	//processing pin & balance
 	
 	if(pinIn==pin){
 		
 		remain=balance-amount;
 		
 		
 		
 		
 	cout<<"Data succefully sent,remaining Balance is= "<<remain<<endl;
 	
    
 	
 
	 }
	 
	 

	 
	else if (pinIn!=pin){
	 
	 cout<<"WRONG pIN!!!"<<endl;
	 
	 
	 }
	 
 	
 	
 }
 
 
 
 void Money()
 {
 	string number;
 	string reference;
 	string confirm;
 	float amount;
 	string pinIn;
 	
 	
 	
 	cout<<"*******SEND MONEY TO ALL NETWORKS*******"<<endl<<endl;
 	cout<<"Enter Recipient Number"<<endl;
 	cin>>number;
 	cout<<"Repeat Number"<<endl;
 	cin>>confirm;
 	
 	if(number!= confirm){
 		cout<<"number doesnt Match!!,Check again."<<endl;
 		
 		Money();
	 }
 	
 	cout<<"Enter Reference"<<endl;
 	cin>>reference;
 	cout<<"Enter Amount(Ghs) "<<endl;
 	cin>>amount;
 	cout<<"Ghs "<<" "<<amount<<" "<< " is about to be Sent to "<<number<<"."<<"Reference"<<reference<< " Enter pin To confirm Transaction or Press (2)  to Cancle"  <<endl;
 	cin>>pinIn;
 
 
 	
 	//processing pin & balance
 	
 	if(pinIn==pin){
 	
 		
 		remain=balance-amount;
 		
 		
 		
 		
 	cout<<"Amount succefully sent,remaining Balance is= "<<remain<<endl;
	 }
	 
	 

	 
	else if (pinIn!=pin){
	 
	 cout<<"WRONG pIN!!!"<<endl;
	 
	 	Money();
	 }
	 
 	
 	
 	
 	
 }

 
 
 
 void Menu(){
 	
 	 int menu;
 	
 	cout<<"************MENU***************"<<endl<<endl;
 	cout<<"(1)Send Money"<<endl;
	cout<<"(2)Buy Data "<<endl;
 	cout<<"(3)Withdraw cash"<<endl;
 	cout<<"(4)Account information"<<endl;
 	cout<<"(5)Buy Airtime "<<endl;
 	cout<<"ENTER A VALID NUMBER"<<endl;
 	
 	cin>>menu;
 	
 	
 	
 	//options
 	
		 if(menu==1)
		 {
		 	Money();
		 }
		 
		 
		 if(menu==2)
		 {
		 	data();
		 }
		 
		 if(menu==3)
		 {
		 	withdraw();
		 }
		 
		 if(menu==4)
		 {
		    account();
		 }
		 if(menu==5)
		 {
		    airtime();
		 }
 	
 	
 }
 
 

int main(int argc, char** argv) {
	 
	 cout<<"****************DIAL (*170#)******************"<<endl ;
	 
	 cin>>codeIn;
	 
	 if(code==codeIn){
	 	Menu();
	 }
	 
	 else if(code!=codeIn){ 
	  cout<<"!!!!WRONG CODE!!!!!!"<<endl;
	  
	 
	 }
	 
	return 0;
}
