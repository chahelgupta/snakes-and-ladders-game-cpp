#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
using namespace std;
class Snakes_Ladders
{
    public:
    int n,p1,p2,Score;
    char li;
    string name1,name2;

    void DrawLine(int n,char li)
    {
        cout<<"\t\t\t";
        for(int i=0;i<n;i++)
        {
            cout<<li;
        }

    }
    void Board()
    {

        cout<<"\n";
        DrawLine(70,'-');
        cout<<"\n\n\t\t\t\t\t    SNAKES POSITIONS ON THE BOARD\n\n";
        DrawLine(70,'-');
        cout <<"\n\t\t\tFrom 98 to 28";
        cout <<"\n\t\t\tFrom 95 to 24";
        cout <<"\n\t\t\tFrom 92 to 51";
        cout <<"\n\t\t\tFrom 83 to 19";
        cout <<"\n\t\t\tFrom 73 to 1";
        cout <<"\n\t\t\tFrom 69 to 33";
        cout <<"\n\t\t\tFrom 64 to 36";
        cout <<"\n\t\t\tFrom 59 to 17";
        cout <<"\n\t\t\tFrom 55 to 7";
        cout <<"\n\t\t\tFrom 52 to 11";
        cout <<"\n\t\t\tFrom 48 to 9";
        cout <<"\n\t\t\tFrom 46 to 5";
        cout <<"\n\t\t\tFrom 44 to 22\n";
        DrawLine(70,'-');
        cout<<"\n\n\t\t\t\t\t    LADDERS POSITIONS ON THE BOARD\n\n";
        DrawLine(70,'-');
        cout<<"\n\t\t\tFrom 8 to 26";
        cout<<"\n\t\t\tFrom 21 to 82";
        cout<<"\n\t\t\tFrom 43 to 77";
        cout<<"\n\t\t\tFrom 50 to 91";
        cout<<"\n\t\t\tFrom 62 to 96";
        cout<<"\n\t\t\tFrom 66 to 87";
        cout<<"\n\t\t\tFrom 80 to 100\n";
        DrawLine(70,'-');
        cout<<endl;
    }
    void GameScore(string name1,string name2,int p1, int p2)
    {

        cout<<"\n\n";
        DrawLine(70,'.');
        cout<<"\n\n\t\t\t\t\t\t    GAME STATUS\n\n";
        DrawLine(70,'.');
        cout << "\n\n\t\t\t" << name1 << " is at position " << p1 << endl;
        cout << "\n\t\t\t" << name2 << " is at position " << p2 << endl;
        DrawLine(70,'_');
        cout<<endl;

    }
    void PlayDice(int &Score)
    {
        srand(time(0));
        int Dice;
        Dice = (rand()%6) + 1;
        cout << "\n\t\t\tDice Rolled:\t\t" << Dice;
        if(Dice==1)
        {
            cout <<"\n\t\t\t"<<" ----- " << endl;
            cout <<"\t\t\t"<< "|     |" << endl;
            cout <<"\t\t\t"<< "|  O  |" << endl;
            cout <<"\t\t\t"<< "|     |" << endl;
            cout <<"\t\t\t"<< " -----" << endl;
        }
        else if(Dice==2)
        {
            cout <<"\n\t\t\t"<< " -----" << endl;
            cout <<"\t\t\t"<< "|    O|" << endl;
            cout <<"\t\t\t"<< "|     |" << endl;
            cout <<"\t\t\t"<< "|O    |" << endl;
            cout <<"\t\t\t"<< " -----" << endl;
        }
        else if(Dice==3)
        {
            cout <<"\n\t\t\t"<< " -----" << endl;
            cout <<"\t\t\t"<< "|    O|" << endl;
            cout <<"\t\t\t"<< "|  O  |" << endl;
            cout <<"\t\t\t"<< "|O    |" << endl;
            cout <<"\t\t\t"<< " -----" << endl;
        }
        else if(Dice==4)
        {
            cout <<"\n\t\t\t"<< " -----" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<< "|     |" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<< " -----" << endl;
        }
        else if(Dice==5)
        {
            cout <<"\n\t\t\t"<< " -----" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<< "|  O  |" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<< " -----" << endl;
        }
        else if(Dice==6)
        {
            cout <<"\n\t\t\t"<< " -----" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<< "|O   O|" << endl;
            cout <<"\t\t\t"<<  " -----" << endl;
        }
        Score = Score + Dice;
        cout << "\n\t\t\tUpdated Position:\t" << Score;
        switch (Score)
        {
        case 98:
                Score = 28;
                break;
        case 95:
                Score = 24;
                break;
        case 92:
                Score = 51;
                break;
        case 83:
                Score = 19;
                break;
        case 73:
                Score = 1;
                break;
        case 69:
                Score = 33;
                break;
        case 64:
                Score = 36;
                break;
        case 59:
                Score = 17;
                break;
        case 55:
                Score = 7;
                break;
        case 52:
                Score = 11;
                break;
        case 48:
                Score = 9;
                break;
        case 46:
                Score = 5;
                break;
        case 44:
                Score = 22;
                break;
        case 8:
                Score = 26;
                break;
        case 21:
                Score = 82;
                break;
        case 43:
                Score = 77;
                break;
        case 50:
                Score = 91;
                break;
        case 54:
                Score = 93;
                break;
        case 62:
                Score = 96;
                break;
        case 66:
                Score = 87;
                break;
        case 80:
                Score = 100;
    }
}

};

int main()
{
    Snakes_Ladders obj;
    int Player_1=0,Player_2=0,LastPosition;
    string Player_1_Name,Player_2_Name;

    int randomize();
    obj.DrawLine(70,'=');
    cout<<"\n\n\n\n\t\t\t\t\t\t  SNAKE LADDER GAME\n\n\t\t\t\t\t     By Chahel Gupta [C049, B2]\n\n\n\n";
    obj.DrawLine(70,'=');
    cout<<"\n\n\t\t\tEnter The Name of Player 1 : ";
    getline(cin,Player_1_Name);
    cout<<"\n\t\t\tEnter The Name of Player 2 : ";
    getline(cin,Player_2_Name);
    obj.Board();
    while(Player_1<=100 && Player_2<=100)
    {

        obj.GameScore(Player_1_Name,Player_2_Name,Player_1,Player_2);

        cout<<"\n\n\t\t\t***"<<Player_1_Name<<"'s Turn!***\n\t\t\tPress Any Key To Play";
        getch();
        LastPosition=Player_1;
        obj.PlayDice(Player_1);

        if(Player_1<LastPosition)
        {
            cout << "\n\a\t\t\tSNAKE ENCOUNTERD!\n";
            cout << "\t\t\t       **    **    **        " << endl;
            cout << "\t\t\t  *   *  *  *  *  *  *       " << endl;
            cout << "\t\t\t   **     **    **    **     " << endl;
            cout << "\t\t\tNew Position: "<< Player_1 << "\n";
        }


        else if(Player_1>LastPosition+6)
        {
            cout << "\n\a\t\t\tLADDER FOUND!\n";
            cout << "\t\t\t-----------------------------" << endl;
            cout << "\t\t\t | | | | | | | | | | | | | | " << endl;
            cout << "\t\t\t-----------------------------" << endl;
            cout << "\t\t\tNew Position: "<< Player_1 << "\n";
        }


        if(Player_1==100)
        {
            break;
        }

        cout<<"\n\n\t\t\t***"<<Player_2_Name<<"'s Turn!***\n\t\t\tPress Any Key To Play";
        getch();
        LastPosition=Player_2;
        obj.PlayDice(Player_2);

        if(Player_2<LastPosition)
        {
            cout << "\n\a\t\t\tSNAKE ENCOUNTERD!\n";
            cout << "\t\t\t       **    **    **        " << endl;
            cout << "\t\t\t  *   *  *  *  *  *  *       " << endl;
            cout << "\t\t\t   **     **    **    **     " << endl;
            cout << "\t\t\tNew Position: "<< Player_2 << "\n";
        }

        else if(Player_2>LastPosition+6)
        {
            cout << "\n\a\t\t\tLADDER FOUND!\n";
            cout << "\t\t\t------------------------------" << endl;
            cout << "\t\t\t | | | | | | | | | | | | | | " << endl;
            cout << "\t\t\t------------------------------" << endl;
            cout << "\t\t\tNew Position: "<< Player_2 << "\n";
        }

        if(Player_2==100)
        {
            break;
        }
    }

        cout<<"\n\n";
        obj.GameScore(Player_1_Name,Player_2_Name,Player_1,Player_2);
        cout<<"\n\n";
        obj.DrawLine(70,'*');
        cout<<"\n\n\t\t\t\t\t\t      RESULT\n\n";
        obj.DrawLine(70,'*');
        cout<<endl;

        cout<<"\n\n";

        if(Player_1 >= Player_2)
            cout <<"\t\t\t"<< Player_1_Name << " IS THE WINNER!\n\n";

        else
            cout <<"\t\t\t"<< Player_2_Name << " IS THE WINNER!\n\n";

        obj.DrawLine(70,'*');
        getch();
}

