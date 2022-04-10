#include <iostream>
#include <conio.h>>

using namespace std;



  int main(){

    int  points=0;
    char first;
    char second;
    char third;
    char fourth;
    char fifth;
    char sixth;
    char seventh;
    char eighth;
    char ninth;
    char tenth;



     cout<<"\t\t\t||       ||     ||=======     ||            ||          ||=======||"<<endl;
     cout<<"\t\t\t||       ||     ||            ||            ||          ||       ||"<<endl;
     cout<<"\t\t\t||       ||     ||            ||            ||          ||       ||"<<endl;
     cout<<"\t\t\t||=======||     ||=======     ||            ||          ||       ||"<<endl;
     cout<<"\t\t\t||       ||     ||            ||            ||          ||       ||"<<endl;
     cout<<"\t\t\t||       ||     ||            ||            ||          ||       ||"<<endl;
     cout<<"\t\t\t||       ||     ||=======     ||=======     ||=====     ||=======||"<<endl<<endl<<endl;


     cout<<" HOW GOOD ARE YOU IN GEOGRAPHY?"<<endl<<endl;
     cout<<"  - This quiz contains 10 questions."<<endl;
     cout<<"  - Every correct question is worth 2 points."<<endl;
     cout<<"  - Every wrong question is worth -1 point."<<endl;
     cout<<"  - To answer the question just type the letter near your answer."<<endl;
     cout<<"  - Play until the end to see your results!"<<endl<<endl;
     cout<<"                GOOD LUCK"<<endl<<endl;
     cout<<"  *Press ENTER to start"<<endl;

     getch();
     system("cls");


     cout<<" 1. How many continents are there?"<<endl<<endl;
     cout<<"    A. 5      \t\t    B. 7"<<endl<<endl;
     cout<<"    C. 6      \t\t    D. 8"<<endl<<endl;

     cin >> first;

     cout<<endl;



 if(first=='b' || first=='B'){
      points+=2;
      cout<<"CORRECT!"<<endl;
 }

 else if(first!='b' || first!='B'){
        points-=1;
      cout<<"INCCORECT!    The correct answer is:  7 "<<endl;
 }

    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 2. What is the largest continent on Earth?"<<endl<<endl;
    cout<<"    A. Asia           \t\t      B. Africa"<<endl<<endl;
    cout<<"    C. North America  \t\t      D. Europe"<<endl<<endl;

    cin >> second;
    cout<<endl;



 if(second=='a' || second=='A'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(second!='a' || second!='A'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is:  Asia "<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 3. Which country has the most population in the world?"<<endl<<endl;
    cout<<"    A. India      \t\t      B. Indonesia"<<endl<<endl;
    cout<<"    C. Russia     \t\t      D. China"<<endl<<endl;

    cin >> third;
    cout<<endl;



 if(third=='d' || third=='D'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(third!='d' || third!='D'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is:  China "<<endl;
 }

    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 4. Which is the longest river in the world?"<<endl<<endl;
    cout<<"    A. Nile      \t\t     B. Volga"<<endl<<endl;
    cout<<"    C. Amazon    \t\t     D. Missouri"<<endl<<endl;

    cin >> fourth;
    cout<<endl;



 if(fourth=='a' || fourth=='A'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(fourth!='a' || fourth!='A'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is:  Nile "<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 5. How many countries are present in Africa?"<<endl<<endl;
    cout<<"    A. 50      \t\t    B. 56"<<endl<<endl;
    cout<<"    C. 54      \t\t    D. 55"<<endl<<endl;

    cin >> fifth;
    cout<<endl;



 if(fifth=='c' || fifth=='C'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(fifth!='c' || fifth!='C'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is:  54 "<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 6. Which is the largest island in the world?"<<endl<<endl;
    cout<<"    A. Madagascar      \t\t          B. Borneo"<<endl<<endl;
    cout<<"    C. Sumatra         \t\t          D. Greenland"<<endl<<endl;

    cin >> sixth;
    cout<<endl;



 if(sixth=='d' || sixth=='D'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(sixth!='d' || sixth!='D'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is: Greenland"<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 7. What is the only country that borders the United Kingdom?"<<endl<<endl;
    cout<<"    A. Romania      \t\t    B. Russia"<<endl<<endl;
    cout<<"    C. Ireland      \t\t    D. Germany"<<endl<<endl;

    cin >> seventh;
    cout<<endl;



 if(seventh=='c' || seventh=='C'){
    points+=2;;
    cout<<"CORRECT!"<<endl;
 }

 else if(seventh!='c' || seventh!='C'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is: Ireland"<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 8. How many total islands does Hawaii have?"<<endl<<endl;
    cout<<"    A. 104      \t\t       B. 132"<<endl<<endl;
    cout<<"    C. 127      \t\t       D. 119"<<endl<<endl;

    cin >> eighth;
    cout<<endl;



 if(eighth=='b' || eighth=='B'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(eighth!='b' || eighth!='B'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is: 132 "<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");

    cout<<" 9. In what ocean is the Bermuda Triangle located? "<<endl<<endl;
    cout<<"    A. Pacific Ocean      \t\t    B. Arctic Ocean"<<endl<<endl;
    cout<<"    C. Indian ocean       \t\t    D. Atlantic Ocean"<<endl<<endl;

    cin >> ninth;
    cout<<endl;



 if(ninth=='d' || ninth=='D'){
    points+=2;
    cout<<"CORRECT!"<<endl;
 }

 else if(ninth!='d' || ninth!='D'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is: Atlantic Ocean"<<endl;
 }


    cout<<"Press ENTER to continue"<<endl;

    getch();
    system("cls");



    cout<<" 10. What is the name of the flattest state in the US?"<<endl<<endl;
    cout<<"    A. Colorado      \t\t    B. Florida"<<endl<<endl;
    cout<<"    C. Montana       \t\t    D. Nevada"<<endl<<endl;

    cin >> tenth;
    cout<<endl;



 if(tenth=='b' || tenth=='B'){
    points+=2;
    cout<<"CORRECT!"<<endl;
    cout<<"You have: "<<points<<" points"<<endl;
 }

 else if(tenth!='b' || tenth!='B'){
        points-=1;
    cout<<"INCCORECT!    The correct answer is:  Florida"<<endl;
 }
    getch();
    system("cls");


 if(points<0){
    cout<< " TOTAL POINTS: "<<points<<endl<<endl;
    cout<<" You should study more!"<<endl;
 }


 else if(points>=0 && points<=5){
    cout<< " TOTAL POINTS: "<<points<<endl<<endl;
    cout<<" You know something about Geography!"<<endl;
 }


 else if(points>5 && points<=10){
    cout<< " TOTAL POINTS: "<<points<<endl<<endl;
    cout<< " You are good but not enough!  "<<endl;
 }


 else if(points>10 && points<=15){
    cout<< " TOTAL POINTS: "<<points<<endl<<endl;
    cout<< " You are good!"<<endl;
 }


 else {
       cout<< " TOTAL POINTS: "<<points<<endl<<endl;
       cout<<" You are awesome!!! :D"<<endl;
 }


    return 0;
}
