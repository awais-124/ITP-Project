#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<string.h>
using namespace std;
void rules();
void endgame();
void drawLine(int n, char symbol);
int main() 
{
   string color[4]={"RED","GREEN","BLUE","YELLOW"},comp[50],temp[50],pattern_key;
   int a,pattern_choice,run=1,i=1,k=0;
   
   rules();
   cout<<"           Press any key to start the Game: ";
   cin>>pattern_key;
    system("cls");
   while(run==1){
   srand(time(0));
   a=rand()%4;
    cout<<"\tPOP-UP: ";
    cout<<color[a];
    comp[k]=color[a];//
    cout<<"\n\tRED means 0 \n\tGREEN means 1 \n\tBLUE means 2 \n\tYELLOW means 3 \n";
    for(int j=0; j<i;j++){
   	 cout<<"\t==> ";
   	 cin>>pattern_choice;
   	 
   	 temp[j]=color[pattern_choice];
   }
   cout<<endl<<endl;
   	for(int j=0;j<i;j++){
	   if(temp[j]==comp[j])
	   {
   		run=1;
	   }
	   else
	   {
	   	run=0;
	   	j=50;
	   }
   }
   i++;
   k++;
   }
   
    
    endgame();
    return 0;
}
void drawLine(int n, char symbol)
	{
	    for(int i=0; i<n; i++)
	        cout << symbol;
	    
	}
void endgame(){
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t||<<<===YOU LOST THE PATTERN===>>>||";
	cout<<"\n\t\t\t\t\t ||<<<===THANKS FOR PLAYING===>>>||";
	cout<<"\n\n\n";
}
void rules()
	{
	   
	    cout << "\n\n";
	    cout<<"\t|";
	    drawLine(60,'=');
	    cout<<"|\n";
	    cout<<"\t\t   ||<<<===FOLLOW THE PATTERN===>>>||\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	    cout << "\t\t\t <<RULES OF THE GAME>>\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n\n";
	    cout << "\t 1. There are 4 colors in this game.\n";
	    cout << "\t 2. Every color denotes a number.\n";
	    cout << "\t 3. At the start a pop-up will appear showing a color and \n\t    you have to enter number which that color denotes.\n";
	    cout << "\t 4. You have to follow the patterns of pop-ups,if u fail to,\n\t    the game will end.\n\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	}
