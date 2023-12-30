#include <bits/stdc++.h>
using namespace std;
void psquare(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
}
}
void ptriangle(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
void invtriangle(int n){
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void p123triangle(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<=i; j++){
            cout <<j;
        }
        cout << endl;
}
}
void pyramid(int n){
    for(int i=0;i<n;i++){
    //spaces...
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //stars...
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
void dpyramid(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
    }
   cout<<endl;
  }
}
void rhombus(int n){
     for(int i=0;i<n;i++){
    //spaces...
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //stars...
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
    cout<<endl;
    }

}
void binarytriangle(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
    

        for(int j=0;j<i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
        
    }  
}


int main()
{int r=1; 
    
    while(r==1){

    
   
    {cout<<"+-------------------------------+"<<endl;
    cout<<"|      Welcome  to  pattern     |"<<endl;
    cout<<"|       printing function       |"<<endl;
    cout<<"|      (Made by: Himanshu)      |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"+-------------------------------+"<<endl;}   
    int shape, n;
    cout<<"Enter what do you want to print: " << endl;
    cout<<"1.Square   |   2.leftshifted triangle   |   3.1..12..123 triangle   |   4.Pyramid   |   5.Binary Triangle" << endl;
    
   
    
    
    {cout<<"Enter your choice: "<<endl;
    cin >>shape;
    cout << "Enter number of rows: " << endl;
    cin >> n;}

    if (shape == 1)
    {
        psquare(n);
    }
    else if(shape ==2){
        int choice;
        cout<<"1.Inverted"<<endl<<"2.Normal"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            invtriangle(n);
        }
        else if(choice==2){
            ptriangle(n);
        }
        
    }
    else if(shape==3){
        p123triangle(n);
    
    }
    else if(shape==4){
        int choice;
        cout<<"1.upright"<<endl<<"2.downward"<<endl<<"3.Rhombus"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            pyramid(n);
        }
        else if(choice==2){
            dpyramid(n);
        }
        else if(choice==3){
            rhombus(n);
        }
        
    }
    else if(shape==5){
            binarytriangle(n);
        }
    int pressed;
    cout<<"press '1' to use func() again..."<<endl;
    cout<<"or press anykey to terminate the program"<<endl;
    cin>>pressed;
    if(pressed==1){
        r=1;
    }
    else{
        cout<<"Thanks for using function....."<<endl;
        break;
    }

    }
    
}