#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() 
{
   int d1,d2,d3,sum_old,sum_new,runtime=1;
    char user_guess,dice_key;
    while(runtime==1)
	 {
//        srand(time(NULL));
        d1 = (rand() % 6) + 1;
        d2 = (rand() % 6) + 1;
        d3 = (rand() % 6) + 1;
        sum_old = d1 + d2 + d3;
            cout<<"\n     Press any Key to Roll a Dice: ";
            cin>>dice_key;
            	cout<<"\n\n";
			    cout<<"         _______     _______     _______\n";
				cout<<"        |       |   |       |   |       |\n";
				cout<<"        |   "<<d1<<"   |   |   "<<d2<<"   |   |   "<<d3<<"   |\n";
				cout<<"        |_______|   |_______|   |_______|\n\n\n\n\n";
            cout<<"\n     You have rolled: <"<<d1<<"> <"<<d2<<"> <"<<d3<<">"<<endl;
            cout<<"     Your total is : "<<sum_old;
            cout<<"\n\n     Will your next total be higher, lower or the same (q to quit)? (h/l/s/q): ";


        while(runtime==1) {
        	do{
        		cin>>user_guess;
			}while(user_guess != 'h' && user_guess!='H'&& user_guess != 's' && user_guess!='S'&& user_guess != 'l' && user_guess!='L' && user_guess != 'q' && user_guess!='Q' );
            
//            srand(time(NULL));
            d1 = (rand() % 6) + 1;
            d2 = (rand() % 6) + 1;
            d3 = (rand() % 6) + 1;
            sum_new = d1 + d2 + d3;
            if(user_guess=='q' || user_guess=='Q') {
                
//                  system("cls");
                  cout<<"\n\n     ||===<<Thanks for Playing>>===||";
                  runtime = 0;
                  return 0;
            }
            cout<<"\n     Press any Key to Roll a Dice: ";
            cin>>dice_key;
        	cout<<"\n\n";
		    cout<<"         _______     _______     _______\n";
			cout<<"        |       |   |       |   |       |\n";
			cout<<"        |   "<<d1<<"   |   |   "<<d2<<"   |   |   "<<d3<<"   |\n";
			cout<<"        |_______|   |_______|   |_______|\n\n\n\n\n";
            cout<<"\n     You have rolled: <"<<d1<<"> <"<<d2<<"> <"<<d3<<">"<<endl;
            cout<<"     Your total is : "<<sum_new;
            
            	
			
            if((user_guess == 'h' || user_guess=='H')&& sum_new > sum_old) 
			 {
                cout<<"\n     YOUR PREDICTION WAS CORRECT!!\n";
				}
                
            
            else if((user_guess=='l' || user_guess=='L') && sum_new < sum_old) {
                cout<<"\n     YOUR PREDICTION WAS CORRECT!!\n";
            }
            else if((user_guess=='s' || user_guess=='S') && sum_new == sum_old  ) {
                cout<<"\n     YOUR PREDICTION WAS CORRECT!!\n";
            }
            else {
                cout<<"\n     YOUR PREDICTION WAS WRONG!!\n";//
            }
        }
        
            sum_old = sum_new;
            cout<<"\n\n     Will your next total be higher, lower or the same (q to quit)? (h/l/s/q): ";
        }
    
    cout<<"     Congratulations on completing the game!";
    return 0;
}
