#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>
#include<array>

using namespace std;

void meanucard()
{
	cout << "\n";
	cout << "\n";
	cout << '\t' << "*************************************************************** ";
	cout << "\n\t\tMENUE CARD";
	cout << "\n\t*************************************************************** ";
	cout << "\n"; cout << "\n";
	cout << "\t\t" << "I- CHINESE CUISINE \n";
	cout << "\t\t" << "__________________ \n";
	cout << "\t\t" << "1- Fried Rice \n";
	cout << "\t\t" << "2- Chicken Shashlik \n";
	cout << "\t\t" << "3- Thai Soup \n";
	cout << "\t\t" << "4- Noodles \n";
	cout << "\t\t" << "5- Snacks \n";
	cout << "\n"; "\t***************************************************************\n\n";

	cout << "\n";
	cout << "\n";
	cout << '\t' << " *************************************************************** ";
	cout << "\n"; cout << "\n";
	cout << "\t\t" << "II- BAR B-Q \n";
	cout << "\t\t" << "__________ \n";
	cout << "\n";


	cout << "\t\t" << "6- Chicken Tikka \n";
	cout << "\t\t" << "7- Kata Kut \n";



	cout << "\t\t" << "8- Rashmi Kabab \n";
	cout << "\n";
	cout << "\t***************************************************************\n\n";

	cout << "\n";
	cout << "\n";
	cout << '\t' << " *************************************************************** ";
	cout << "\n"; cout << "\n";
	cout << "\t\t" << "III- PAKISTANIS CUISINE \n";
	cout << "\t\t" << "_______________________ \n";



	cout << "\t\t" << "9- Chicken Kerhai \n";



	cout << "\t\t" << "10- Biryani \n";



	cout << "\t\t" << "11- Qourma \n";



	cout << "\t\t" << "12- Nan \n";



	cout << "\t\t" << "13- Taftan \n";
	cout << "\n";
	"\t***************************************************************\n\n";

	cout << "\n";
	cout << "\n";
	cout << '\t' << " *************************************************************** ";
	cout << "\n"; cout << "\n";
	cout << "\t\t" << "IV- BEVERAGES \n";
	cout << "\t\t" << "_____________ \n";
	cout << "\n";


	cout << "\t\t" << "14- Coke \n";



	cout << "\t\t" << "15- 7-Up \n";



	cout << "\t\t" << "16- Coffee \n";



	cout << "\t\t" << "17- Tea \n";
	cout << "\n";
	"\t***************************************************************\n\n";

}
class order {
public:
	int room;
	int friedrice = 0;
	int chickenshashlik = 0;
	int thaisoup = 0;
	int noodles = 0;
	int snacks = 0;
	int chickentikka = 0;
	int katakut = 0;
	int rashmikabab = 0;
	int chickenkerhai = 0;
	int biryani = 0;
	int quorma = 0;
	int nan = 0;
	int taftan = 0;
	int coke = 0;
	int sevenup = 0;
	int coffee = 0;
	int tea = 0;

	void display_order() {
		cout << '\t' << "Room " << room << " ORDERED FOLLOWING FOODS : \n";
		cout << "\n"; cout << "\n";
		cout << '\t' << " *************************************************************** ";
		cout << "\n"; cout << "\n";


		cout << '\t' << "01- Fried Rice :" " " << friedrice << "\n"; cout << "\n";
		cout << '\t' << "02- Chicken Shashlik :" " " << chickenshashlik << "\n"; cout << "\n";
		cout << '\t' << "03- Thai Soup :" " " << thaisoup << "\n"; cout << "\n";
		cout << '\t' << "04- Noodles :" " " << noodles << "\n"; cout << "\n";
		cout << '\t' << "05- Snacks :" " " << snacks << "\n"; cout << "\n";
		cout << '\t' << "06- Chicken Tikka :" " " << chickentikka << "\n"; cout << "\n";
		cout << '\t' << "07- Kata Kut :" " " << katakut << "\n"; cout << "\n";
		cout << '\t' << "08- Rashmi Kabab :" " " << rashmikabab << "\n"; cout << "\n";
		cout << '\t' << "09- Chicken Kerhai :" << chickenkerhai << "\n"; cout << "\n";
		cout << '\t' << "10- Biryani :" " " << biryani << "\n"; cout << "\n";
		cout << '\t' << "11- Qourma :" " " << quorma << "\n"; cout << "\n";
		cout << '\t' << "12- Nan :" " " << nan << "\n"; cout << "\n";
		cout << '\t' << "13- Taftan :" " " << taftan << "\n"; cout << "\n";
		cout << '\t' << "14- Coke : " " " << coke << "\n"; cout << "\n";
		cout << '\t' << "15- 7-Up : " " " << sevenup << "\n"; cout << "\n";
		cout << '\t' << "16- Coffee :" " " << coffee << "\n"; cout << "\n";
		cout << '\t' << "17- Tea : " " " << tea << "\n"; cout << "\n";
		cout << '\t' << " *************************************************************** ";
		cout << "\n"; cout << "\n";

	}
};
class Rooms
{
public:
	int room_number;
	char name[30];
	char cnic[50];
	char phone[15];
	int bill;
	bool occupied = false;


public:

	void add_customer()
	{

		cin.ignore();
		fflush(stdout);
		cout << "\nEnter The Customer's name: ";
		cin.getline(name, 30);
		cout << "\nEnter The Customer's CNIC: ";
		cin.getline(cnic, 50);
		cout << "\nEnter The Customer's phone #: ";
		cin.getline(phone, 10);
		cout << "\t\t\n\nCustomer added Successfully...";
		occupied = true;
	}

	void show_customer()
	{
		cout << "\nRoom Number: " << room_number;
		cout << "\nCustomer's Name: " << name;
		cout << "\nCustomer's Phone: " << phone;
		cout << "\nCustomer's CNIC: " << cnic;
	}

	void modify_customer_record()
	{
		cin.ignore();
		fflush(stdout);
		cout << "\nModify Customer's Name : ";
		cin.getline(cnic, 50);
		cout << "\nModify Customer's phone #: ";
		cin.getline(phone, 10);
		cin.getline(name, 30);
		cout << "\nModify Customer's CNIC: ";
	}
	void Checkout_customer_Room()
	{
		this->occupied = false;
		memset(name, 0, 30 * (sizeof name[0]));
		memset(cnic, 0, 50 * (sizeof name[0]));
		memset(phone, 0, 10 * (sizeof name[0]));
		bill = 0;

	}

	int getRoomNumber()
	{
		return room_number;
	}
	char* getName()
	{
		return name;
	}
	char* getAddress()
	{
		return cnic;
	}

	char* getPhone()
	{
		return phone;
	}
	void report()
	{
		cout << room_number << setw(10) << name << setw(20) << cnic << setw(20) << phone << endl;
	}
};
class Hotel {
public:
	Rooms room[10];  // Array Data Structure is used as the rooms re Fixed !
	order queue[100];
	int n = 100, front = -1, rear = -1;  //Queue data structure is used to entertain orders
	int count = 0;
public:
	void book_room() {	//Assumption : rooms are booked only for 24 hours 
		bool check = false;
		for (int i = 0; i < 10; i++)
		{
			if (room[i].occupied == false)
			{
				cout << "\n\nRoom Number : " << i;
				room[i].room_number = i;
				room[i].add_customer();
				check = true;
				break;
			}
		}
		if (check == false)
		{
			cout << "==================================================================\n";
			cout << "Sorry All Rooms Are Booked ..." << "\n==================================================================\n";
		}

	}

	void display_list() {
		cout << "\n\n\t\tCUSTOMER LIST\n\n";
		cout << "==================================================================\n";
		for (int i = 0; i < 10; i++)
		{
			if (room[i].occupied == true) {
				room[i].show_customer();
				cout << "\n\n==================================================================\n";
			}
		}
	}

	void show_customer()
	{
		int Rno = 1000;
		while (Rno < 0 || Rno>9) {
			cout << "\n Enter Room Number to show customer Details (0-9) :";
			cin >> Rno;
			if (Rno < 0 || Rno>9)

			{
				cout << "\n\tNo Such Room Exixts !!!\n\n ";
			}
			else {
				if (room[Rno].occupied == true) room[Rno].show_customer();
				else cout << "\nThe Room is Not booked Customer Not Found !!!\n";
			}
		}

	}

	void modify_customer()
	{
		int Rno = 1000;
		cout << "==================================================================\n";
		cout << "---------------Modify Customer Information------------------------" << endl;
		cout << "==================================================================\n";
		while (Rno < 0 || Rno>9) {
			cout << "\n\n\tEnter Room Number (0-9) of Customer :";
			cin >> Rno;
			if (Rno < 0 || Rno>9)
			{
				cout << "\n\tNo Such Room Exixts !!! ";
			}
			else {
				if (room[Rno].occupied == true)
				{
					cout << "Previous Data ==> \n\n" << endl;
					room[Rno].show_customer();
					room[Rno].modify_customer_record();
					cout << "\nCustomer Information Of Room " << Rno << " Is Modified Successfully !!!";
				}
				else cout << "\nThe Room is Not booked Customer Not Found !!!";
			}
		}

	}

	void Checkout_customer()
	{
		int Rno = 1000;
		cout << "==================================================================\n";
		cout << "-----------------------Check Out Customer-------------------------" << endl;
		cout << "==================================================================\n";
		cout << " ";

		while (Rno < 0 || Rno>9) {
			cout << "\n\n\tEnter Room Number (0-9) of Customer :";
			cin >> Rno;
			if (Rno < 0 || Rno>9)
			{
				cout << "\n\tNo Such Room Exixts !!! ";
			}
			else {
				if (room[Rno].occupied == true)
				{
					cout << "\nCustomer Record ==> " << endl;
					room[Rno].show_customer();
					cout << "\n==================================================================\n";

					cout << "\n==================================================================\n";
					cout << "---------------Check Out Successfully-----------------------------" << endl;
					cout << "==================================================================\n";
					cout << "\tRoom Rent : " << 5000 << endl;
					cout << "\tOrder Bills : " << room[Rno].bill << endl;
					cout << "\tCustomer Total Bill : " << room[Rno].bill + 5000;
					room[Rno].Checkout_customer_Room();

				}
				else cout << "\nThe Room is Not booked Customer Not Found !!!\n";
			}
		}

	}

	void Insert_order() {

		int Rno = 1000;
		while (Rno < 0 || Rno>9) {
			cout << "\n Enter Room Number to show customer Details (0-9) :";
			cin >> Rno;
			if (Rno < 0 || Rno>9)
			{
				cout << "\n\tNo Such Room Exixts !!!\n\n ";
			}
			else {
				if (room[Rno].occupied == true)
				{
					int val;
					if (rear == n - 1)
						cout << "Order Completed" << endl;
					else {
						if (front == -1)
							front = 0;
						cout << "Insert the element in queue : " << endl;


						int submenu;
						submenu = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18);
						int bill = 0;
						string order = "";
						int friedrice = 0;
						int chickenshashlik = 0;
						int thaisoup = 0;
						int noodles = 0;
						int snacks = 0;
						int chickentikka = 0;
						int katakut = 0;
						int rashmikabab = 0;
						int chickenkerhai = 0;
						int biryani = 0;
						int quorma = 0;
						int nan = 0;
						int taftan = 0;
						int coke = 0;
						int sevenup = 0;
						int coffee = 0;
						int tea = 0;



						meanucard();
						while (1)
						{
							// INSTRUCTION FOR SUB-MENU CARD, RETURN BACK TO MAIN MENU OR INSTRUCTION TO EXIT / PRINT ORDER

							cout << "\t\t" << "PRESS ( 18 ) TO EXIT AND PRINT YOUR ORDER \n";
							cout << "\n";


							cout << "\t\t" << "PLEASE PLACE YOUR ORDER HERE : ";
							cin >> submenu;
							cout << "\n"; cout << "\n";


							if (submenu == 1)
							{
								friedrice++;
								bill = bill + 150;
								order = order + "	friedrice (1) ";
							}


							else if (submenu == 2)
							{
								chickenshashlik++;
								bill = bill + 200;
								order = order + "	chickenshashlik (1) ";
							}


							else if (submenu == 3)
							{
								thaisoup++;
								bill = bill + 270;
								order = order + " + thaisoup (1) ";
							}


							if (submenu == 4)
							{
								noodles++;
								bill = bill + 300;
								order = order + " + noodles (1) ";
							}


							else if (submenu == 5)
							{
								snacks++;
								bill = bill + 120;
								order = order + " + snaks (1) ";
							}


							else if (submenu == 6)
							{
								chickentikka++;
								bill = bill + 270;
								order = order + " + chickentikka (1) ";
							}


							else if (submenu == 7)
							{
								katakut++;
								bill = bill + 300;
								order = order + " + katakut (1) ";
							}


							else if (submenu == 8)
							{
								rashmikabab++;
								bill = bill + 250;
								order = order + " + sahmikabab (1) ";
							}


							else if (submenu == 9)
							{
								chickenkerhai++;
								bill = bill + 1200;
								order = order + " + chickenkerhai (1) ";
							}


							else if (submenu == 10)
							{
								biryani++;
								bill = bill + 350;
								order = order + " + biryani (1) ";
							}


							else if (submenu == 11)
							{
								quorma++;
								bill = bill + 150;
								order = order + " + qourma (1) ";
							}


							else if (submenu == 12)
							{
								nan++;
								bill = bill + 20;
								order = order + " + nan (1) ";
							}


							else if (submenu == 13)
							{
								taftan++;
								bill = bill + 50;
								order = order + " + taftan (1) ";
							}


							else if (submenu == 14)
							{
								coke++;
								bill = bill + 100;
								order = order + " + coke (1) ";
							}


							else if (submenu == 15)
							{
								sevenup++;
								bill = bill + 100;
								order = order + " + sevenup (1) ";
							}


							else if (submenu == 16)
							{
								coffee++;
								bill = bill + 100;
								order = order + " + coffee (1) ";
							}


							else if (submenu == 17)
							{
								tea++;
								bill = bill + 100;
								order = order + " +	tea (1) ";
							}


							// REVALIDATE THE PROGRAM IF USER INPUT WRONG VALUE GREATER THAN 17


							else if (submenu > 18)
							{
								cout << "\n";
								cout << "\t\t" << "YOU ENTERED WRONG VALUE ... PLEASE TRY AGAIN : ";
								cin >> submenu;
								cout << "\n"; cout << "\n";
							}


							// IF INPUT = 18, EXIT AND PRINT ORDER


							else if (submenu == 18)
							{
								cout << "\n";
								cout << "\n";
								cout << "\t*************************************************************** ";
								cout << "\n"; cout << "\n"; cout << "\n";
								cout << '\t' << "Room " << Rno << " ORDERED FOLLOWING FOODS : \n";
								cout << "\n"; cout << "\n";
								cout << "\t*************************************************************** ";
								cout << "\n"; cout << "\n";


								cout << '\t' << "01- Fried Rice :" " " << friedrice << "\n"; cout << "\n";
								cout << '\t' << "02- Chicken Shashlik :" " " << chickenshashlik << "\n"; cout << "\n";
								cout << '\t' << "03- Thai Soup :" " " << thaisoup << "\n"; cout << "\n";
								cout << '\t' << "04- Noodles :" " " << noodles << "\n"; cout << "\n";
								cout << '\t' << "05- Snacks :" " " << snacks << "\n"; cout << "\n";
								cout << '\t' << "06- Chicken Tikka :" " " << chickentikka << "\n"; cout << "\n";
								cout << '\t' << "07- Kata Kut :" " " << katakut << "\n"; cout << "\n";
								cout << '\t' << "08- Rashmi Kabab :" " " << rashmikabab << "\n"; cout << "\n";
								cout << '\t' << "09- Chicken Kerhai :" << chickenkerhai << "\n"; cout << "\n";
								cout << '\t' << "10- Biryani :" " " << biryani << "\n"; cout << "\n";
								cout << '\t' << "11- Qourma :" " " << quorma << "\n"; cout << "\n";
								cout << '\t' << "12- Nan :" " " << nan << "\n"; cout << "\n";
								cout << '\t' << "13- Taftan :" " " << taftan << "\n"; cout << "\n";
								cout << '\t' << "14- Coke : " " " << coke << "\n"; cout << "\n";
								cout << '\t' << "15- 7-Up : " " " << sevenup << "\n"; cout << "\n";
								cout << '\t' << "16- Coffee :" " " << coffee << "\n"; cout << "\n";
								cout << '\t' << "17- Tea : " " " << tea << "\n"; cout << "\n";
								cout << '\t' << " *************************************************************** ";
								cout << "\n"; cout << "\n";


								// THANKS MESSAGE

								cout << '\t' << "THANK YOU FOR YOUR ORDER - WE WILL DELIVER IT TO YOU SOON \n";
								cout << "\tYour Payable Bill : " << bill;

								cout << "\n"; cout << "\n";


								break;
							}


						}


						rear++;
						queue[rear].biryani = biryani;
						queue[rear].chickenkerhai = chickenkerhai;
						queue[rear].chickenshashlik = chickenshashlik;
						queue[rear].chickentikka = chickentikka;
						queue[rear].coffee = coffee;
						queue[rear].coke = coke;
						queue[rear].friedrice = friedrice;
						queue[rear].katakut = katakut;
						queue[rear].nan = nan;
						queue[rear].noodles = noodles;
						queue[rear].quorma = quorma;
						queue[rear].rashmikabab = rashmikabab;
						queue[rear].sevenup = sevenup;
						queue[rear].snacks = snacks;
						queue[rear].taftan = taftan;
						queue[rear].tea = tea;
						queue[rear].thaisoup = thaisoup;
						queue[rear].thaisoup = thaisoup;
						queue[rear].room = Rno;
						room[Rno].bill = bill;
					}
				}
				else cout << "\nThe Room is Not booked Customer Not Found !!!\n";
			}
		}


	}
	void Delete() {
		if (front == -1 || front > rear) {
			cout << "Queue Underflow ";
			return;
		}
		else {
			cout << '\t' << " *************************************************************** ";
			cout << "\t\t\t FOLLOW ORDER HAS HIGHEST PREORITY! ";
			cout << '\t' << " *************************************************************** ";
			queue[front].display_order();
			front++;;
		}
	}

	void Display_All() {
		if (front == -1)
			cout << "No Order in the Queue" << endl;
		else {
			cout << '\t' << " *************************************************************** ";
			cout << "\t\t\tFOLLOWING ORDERS ARE IN THE QUEUE! ";
			cout << '\t' << " *************************************************************** ";
			for (int i = front; i <= rear; i++) {
				queue[i].display_order();
				cout << "\n";
			}
			cout << endl;
		}
	}

};




void main_menu()
{
	Hotel obj;
	int option;

	for (;;)
	{

		cout << "\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
		cout << "\n\t\tPress 1 to BOOK A ROOM";
		cout << "\n\t\tPress 2 to DISPLAY ALL ROOMS ALLOTTED";
		cout << "\n\t\tPress 3 to DISPLAY SPECIFIC CUSTOMER RECORD";
		cout << "\n\t\tPress 4 to MODIFY CUSTOMER RECORD";
		cout << "\n\t\tPress 5 to CHECKOUT CUSTOMER RECORD";
		cout << "\n\t\tPress 6 to SEE ORDER MENUE";
		cout << "\n\t\tPress 7 to ADD ORDER IN QUEUE";
		cout << "\n\t\tPress 8 to FETCH ORDER";
		cout << "\n\t\tPress 9 to SEE ALL ORDERS IN QUEUE";
		cout << "\n\t\tPress 10 to Exit";
		cout << "\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout << "\n\t\tOption: ";
		cin >> option;
		switch (option)
		{
		case 1:
			obj.book_room();
			break;
		case 2:
			obj.display_list();
			break;
		case 3:
			obj.show_customer();
			break;
		case 4:
			obj.modify_customer();
			break;
		case 5:
			obj.Checkout_customer();
			break;
		case 6:
			meanucard();
			break;
		case 7:
			obj.Insert_order();
			break;
		case 8:
			obj.Delete();
			break;
		case 9:
			obj.Display_All();
			break;
		case 10: exit(0);
			break;
		default:cout << "\a";
		}
	}

}


bool login()
{
	char id[30] = "usman", pass[30] = "123";
	char cid[30], cpass[30];
	cout << "\t\t\t==================================================================\n";
	cout << "\t\t\t------------------WELCOME TO MY HOTAL MANAGEMENT SYSTEM-----------" << endl;
	cout << "\t\t\t==================================================================\n";
	cout << "\n\nPLEASE LOGIN" << endl;
	cout << "Enter your id :";
	cin.getline(cid, 30);
	cout << "Enter your pass :";
	cin.getline(cpass, 30);
	//id == cid || pass == cpass
	if (strcmp(id, cid) == 0 && strcmp(pass, cpass) == 0) {
		cout << "\n\t\t Login Successfull\n" << endl;
		return true;
	}
	else
	{

		cout << "\n\tLogin Fail\n" << endl;

		return false;
	}
}

int main()
{

	bool check = false;
	while (check != true)
	{
		check = login();
	}
	main_menu();

	system("pause");
	return 0;




}