#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;
	 
void drawLine(int n, char symbol);
void rules();
 
int main()
	{
    int bettingAmount,guess,casino_dice,total;
	long amount; 
    char casino_choice;
 
    srand(time(0)); 

    drawLine(65,'_');
    cout << "\n\n\n\n\t\t||<<<===CASINO GAME===>>>||\n\n\n\n";
    drawLine(65,'_');
 
    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;
	    
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << amount << "\n";
		
		
        do
        {
            cout <<"Enter money to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);
 
		
        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10);
 
        casino_dice = rand()%10 + 1; 
    
        if(casino_dice == guess)
        {
        	total = bettingAmount * 10;
            cout << "\n\nGood Luck!! You won Rs." << total;
            amount = amount + total;
        }
        else
        {
            cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }
 
        cout << "\nThe winning number was : " << casino_dice <<"\n";
        cout << "\nYou have $ " << amount << " remaining.\n";
        if(amount == 0)
        {
            cout << "You have no money to play! ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";		
        cin >> casino_choice;
    }while(casino_choice =='Y'|| casino_choice=='y');
    
    cout << "\n\n\n";
    drawLine(80,'=');
    cout << "\n\n\tThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    drawLine(80,'=');
 
    return 0;
	}
	 
	void drawLine(int n, char symbol)
	{
	    for(int i=0; i<n; i++)
	        cout << symbol;
	    
	}
	 
	void rules()
	{
	    system("cls");
	    cout << "\n\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	    cout << "\t\t\t <<RULES OF THE GAME>>\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	    cout << "\t 1. Choose any number between 1 to 10.\n";
	    cout << "\t 2. If you win, you will get 10 times of money you bet.\n";
	    cout << "\t 3. If you bet on wrong number you will lose your betting amount.\n\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	}
	 
