#include<iostream>
using namespace std;
int main(){
        char color1,color2;
        cout<<"available primary colors :r,b and y"<<endl;
        //r- red // p- purpel
        //b-blue // o- orange
        //y-yellow //y -yellow
        cout<<"enter the first color r/b/y"<<endl;
        cin>>color1;

        cout<<"enter the second color r/b/y"<<endl;
        cin>>color2;

        char secondarycolor;
            switch (color1) {
        case 'r':
            if (color2 == 'b') {
                secondarycolor = 'p';
            } else if (color2 == 'y') {
                secondarycolor = 'o'; 
            } else {
                cout << "Invalid combination of colors." <<endl;
            
            }
            break;
        case 'b':
            if (color2 == 'r') {
                secondarycolor = 'p';
            } else if (color2 == 'y') {
                secondarycolor = 'g';
            } else {
                cout << "Invalid combination of colors." <<endl;
               
            }
            break;
        case 'y':
            if (color2 == 'r') {
                secondarycolor = 'o';
            } else if (color2 == 'b') {
                secondarycolor = 'g';
            } else {
                cout << "Invalid combination of colors." <<endl;
            }
            break;
        default:
            cout << "Invalid color choice." <<endl;
    }

   cout << "colors produced after mixing:="<<endl;

    switch (secondarycolor) {
        case 'p':
            cout << "purple"<<endl;
            break;
        case 'o':
            cout << "orange"<<endl;
            break;
        case 'g':
            cout << "green"<<endl;
            break;
    }

    return 0;
}

        
        




