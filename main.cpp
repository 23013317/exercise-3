
#include <iostream>
  using namespace std;

int main (){

    cout<< "*MENU*"<<endl;

cout<<"1. Add"<< endl;
cout<<"2. Subtraction"<< endl;
cout<<"3.Multiply"<< endl;
cout<<"4.Divide"<<endl;

     int choiceNumber;
cout<<"Enter your choice(1-4):"<< endl;
cin>> choiceNumber;

      int num1, num2, Sum, Difference, Product, Division;
      char choice;
cout<<"Enter integer number 1:"<<endl;
cin>>num1;
cout<<"Enter integer number 2:"<<endl;
cin>>num2;

        do{
          Sum =  num1+ num2;
        cout<<"num1+num2="<< Sum <<endl;
        break;
        } while(choiceNumber==1);



        do{
         Difference =  num1 - num2;
        cout<<"num1-num2="<< Difference<< endl;

        break;
        } while (choiceNumber==2);


       do{
        Product =  num1*num2;
        cout<<"num1*num2="<< Product<< endl;
        break;

       } while(choiceNumber==3);

       do{
         Division = num1/num2;
        cout<<"num1/num2"<<Division <<endl;
        break;

       } while(choiceNumber==4);

       do{




      cout << "Do you want to continue? (y/n): ";
    cin >> choice;


        } while (choice == 'y' || choice == 'Y');

    cout << "Program exited. Goodbye!" <<endl;



return 0;
}
