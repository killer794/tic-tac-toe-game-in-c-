#include <iostream>
using namespace std;
int selection () {
    int temp;
    cout<<" Your turn :-";
    cin>>temp;
    switch(temp) {
        case 1 : return 1; break;
        case 2 : return 2; break;
        case 3 : return 3; break;
        case 4 : return 4; break;
        case 5 : return 5; break;
        case 6 : return 6; break;
        case 7 : return 7; break;
        case 8 : return 8; break;
        case 9 : return 9; break;
        default : break;
    }
}
void chance (char arr[],int value,char temp) {
    printf("\e[1;1H\e[2J");
    arr[value-1]=(char)temp;
    cout<<"\t\t1    |2    |3    "<<"\n";
    cout<<"\t\t  "<<arr[0]<<"  |  "<<arr[1]<<"  |  "<<arr[2]<<"  "<<"\n";
    cout<<"\t\t_____|_____|_____"<<"\n";
    cout<<"\t\t4    |5    |6    "<<"\n";
    cout<<"\t\t  "<<arr[3]<<"  |  "<<arr[4]<<"  |  "<<arr[5]<<"  "<<"\n";
    cout<<"\t\t_____|_____|_____"<<"\n";
    cout<<"\t\t7    |8    |9    "<<"\n";
    cout<<"\t\t  "<<arr[6]<<"  |  "<<arr[7]<<"  |  "<<arr[8]<<"  "<<"\n";
    cout<<"\t\t     |     |     "<<"\n";
    cout<<"\n";

}

int main() {

    int i=0,value;
    char arr[9]={'-','-','-','-','-','-','-','-','-'};
    cout<<"\n\n\n\t\t****INSTRUCTIONS****\n\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  1  |  2  |  3  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  4  |  5  |  6  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  7  |  8  |  9  \n";
    cout<<"\t\t     |     |     \n";
    cout<<"Enter 1 to 9 TO have your character(X & O) placed at there position \n ";
    cout<<"\n";

    while (i<9) {
        if(i%2==0) {
            cout<<"\t\tPLAYER - X";
            value=selection();
            chance(arr,value,'X');
        }
        else {
            cout<<"\t\tPLAYER - O";
            value=selection();
            chance(arr,value,'O');
        }
        ++i;
    }
    cout<<"\t\t\n**********THE END**********\n";
    return 0;
}
