//            Question Paper -2020

// Q1:

// #include <iostream>
// using namespace std;

// int calculate(int arr[]){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     int sum=0;
// for(int z=4;z>1;z--){
//     sum+=arr[z];

// }
// int result=sum/3;
// return result;

// }

// int grade(int x){
//     if(x>=80 && x<=100){
//         cout<<"A";
//     }
//     else if(x>=60&&x<80){
//         cout<<"B";
//     }
//     else if(x>=40&&x<60){
//         cout<<"B";
//     }
//     else if(x<40){
//         cout<<"D";
//     }

// }

// int main(){

//     int marks[5];
//     for(int i=0;i<5;i++){
//         cout<<"Enter marks of Sub_"<<i+1<<endl;
//         cin>>marks[i];
//     }

//     int percent=calculate(marks);
//     grade(percent);

//     return 0;
// }

// -----------------------------------------------
// testing text palindrome
// Q2:

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     string x = "naman";
//     int s = x.length();

//     bool check = true;
//     for (int i = 0; i < floor(s / 2); i++)
//     {
//         if (x[i] != x[s - 1 - i])
//         {
//             check = false;
//             break;
//         }
//     }
//         if (check)
//         {
//             cout << "Yes, it is a palindrome." << endl;
            
//         }
//         else
//         {
//             cout << "Not a palindrome.." << endl;
           
//         }
    

//     return 0;
// }

// ---------------------------------------------
// Q3:

// #include <iostream>
// #include<cmath>
// using namespace std;

// int main(){

//     cout<<floor(123.50000001);

//     return 0;
// }

// --------------------------------------------

// Q4:

// #include <iostream>
// using namespace std;

// class Array{
//     public:
//     int *arr;
//     int size;

//     // Parametrized Contructor
//     Array(int arrin[],int s){
//         size=s;
//         arr=new int[size];

//         for(int i=0;i<s;i++){
//             arr[i]=arrin[i];
//         }
//     }

//     // // Copy Contructor
//     // Array(Array &a){
//     //     size=a.size;
//     //     arr=new int[size];
//     //     for(int i=0;i<size;i++){
//     //         arr[i]=a.arr[i];
//     //     }
//     // }

//     Array sumary(Array a1,Array a2){

//         Array a3(arr,size);
//         for(int i=0;i<size;i++){
//             a3.arr[i]=a1.arr[i]+a2.arr[i];
//         }
//         for(int i=0;i<size;i++){
//             cout<<a3.arr[i]<<" ";
//         }

//     }

//     // Array sumarray(Array &a1,Array &a2){
//     //     Array a3(a1.arr,a1.size);

//     //     for(int i=0;i<a1.size;i++){
//     //         a3.arr[i]=a1.arr[i]+a2.arr[i];

//     //     }
//     //     return a3;

//     void display(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;

//     }

// };

// int main(){
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={2,4,6,8,10};
//     int arr3[]={0,0,0,0,0};

//     Array array1(arr1,5);
//     Array array2(arr2,5);
//     Array array3(arr3,5);

//     array1.display();
//     cout<<"+"<<endl;
//     array2.display();
//     cout<<"-------------------"<<endl;
//     array3.sumary(array1,array2);

//     return 0;
// }

// -------------------------------------------

// Q6

// #include <iostream>
// #include<cstring>
// using namespace std;
// void countupper(string x){
//     int count=0;
//     for(int i=0;i<x.length();i++){
//         if(isupper(x[i])){
//             count++;
//         }
//         else{
//             continue;
//         }
//     }
//     cout<<count;
// }

// int main(){
//     countupper("HimanshUDkariya");

//     return 0;
// }

// ----------------------------------------
// b)

// #include <iostream>
// #include<string>
// using namespace std;

// void togstr(string &x){
//     for(int i=0;i<x.length();i++){
//         if(isupper(x[i])){
//             x[i]=tolower(x[i]);
//         }
//         else{
//             x[i]=toupper(x[i]);
//         }
//     }
// }

// int main(){
//     string y="iashIMANSHUdKARIYA";
//     togstr(y);
//     cout<<y;

//     return 0;
// }

// ---------------------------------------

// c)
// #include <iostream>
// #include <cmath>
// using namespace std;

// void middlestr(string y){
//     string x=y;
//     int count=0;
//     for(int i:x){
//         count++;

//     }
//     int mid=0;
//     if(count%2!=0){
//         mid=floor(count/2);
//         cout<<x[mid];
//     }
//     else{
//         mid=count/2;

//         cout<<x[mid-1]<<x[mid];

//     }
// }

// int main(){

//     middlestr("anshumn");

//     return 0;
// }

// --------------------------------------------

// d)

// #include <iostream>
// #include<cmath>
// using namespace std;
// int factorial(int x){
//     int fact=1;
//     for(int i=x;i>0;i--){
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter 'n': "<<endl;
//     cin>>n;
//     float res=0;
//     for(int i=1;i<=n;i++){
//         res+=(i*(pow(1,i))/factorial(i));

//     }
//     cout<<res;

//     return 0;
// }

// --------------------------------------------

// Q5)

// #include <iostream>
// using namespace std;

// class ThreeDpoints{
//     public:
//         int x,y,z;

//     void getpoints(int a,int b,int c){
//         x=a;
//         y=b;
//         z=c;
//     }
//     void compare(ThreeDpoints p1,ThreeDpoints p2){
//         if(p1.x!=p2.x){
//             if(p1.x>p2.x){
//                 cout<<"p1 > p2"<<endl;
//             }
//             else{
//                 cout<<"p1 < p2"<<endl;
//             }
//         }
//         else if(p1.y!=p2.y){
//             if(p1.y>p2.y){
//                 cout<<"p1 > p2"<<endl;
//             }
//             else{
//                 cout<<"p1 < p2"<<endl;
//             }

//         }
//         else if(p1.z!=p2.z){
//             if(p1.z>p2.z){
//                 cout<<"p1 > p2"<<endl;
//             }
//             else{
//                 cout<<"p1 < p2"<<endl;
//             }

//         }

//     }

// };

// int main(){

//     ThreeDpoints p1;
//     ThreeDpoints p2;

//     p1.getpoints(1,1,2);
//     p2.getpoints(1,1,0);

//     p1.compare(p1,p2);

//     return 0;
// }












// ----------------------------------------------

            // 2021

// Q6


// #include <iostream>
// using namespace std;

// void convertdate(int d,int m,int y){
//     if(m==1){
//         cout<<"January "<<d<<" "<<y<<endl;
//     }
//     else if(m==2){
//         cout<<"February "<<d<<" "<<y<<endl;
//     }
//     else if(m==3){
//         cout<<"March "<<d<<" "<<y<<endl;
//     }
//     else if(m==4){
//         cout<<"April "<<d<<" "<<y<<endl;
//     }
//     else if(m==5){
//         cout<<"May "<<d<<" "<<y<<endl;
//     }
//     else if(m==6){
//         cout<<"June "<<d<<" "<<y<<endl;
//     }
//     else if(m==7){
//         cout<<"July "<<d<<" "<<y<<endl;
//     }
//     else if(m==8){
//         cout<<"August "<<d<<" "<<y<<endl;
//     }
//     else if(m==9){
//         cout<<"September "<<d<<" "<<y<<endl;
//     }
//     else if(m==10){
//         cout<<"October "<<d<<" "<<y<<endl;
//     }
//     else if(m==11){
//         cout<<"November "<<d<<" "<<y<<endl;
//     }
//     else if(m==12){
//         cout<<"December "<<d<<" "<<y<<endl;
//     }
// }
// bool leapcheck(int Y){
//     if(Y % 4==0){
//         if(Y % 100==0){
//             if(Y % 400==0){
//                 return true;
//             }                   //condition is
//                                 // if year is divisible by 400 or divisible by 4 but not by 100
//             else{
//                 return false;
//             }
//         }
//         else{
//             return true;
//         }
//     }
//     else{
//         return false;
//     }


// }

// int main(){
//     int date,month,year;
//     try{cout<<"Enter Date(DD-MM-YYYY) : "<<endl;
//     cout<<"Day date.."<<endl;
//     cin>>date;
//     if(date<1||date>31){
//         throw(date);
//     }
//     cout<<"Month.."<<endl;
//     cin>>month;
//     if(month<1||month>12){
//         throw(month);
//     }
//     cout<<"Year.."<<endl;
//     cin>>year;
//     if(leapcheck(year)==false&&date>28&&month==2){
//         throw(year);


//     }
//     }
//     catch(...){
//         cout<<"Exception caught";
        
//     }
//     convertdate(date,month,year);

    

    
    
//     return 0;
// }



// --------------------------------------------

// Q5:


// #include <iostream>
// #include <stdexcept>
// using namespace std;

// class Human{
// public:
//     string name;
//     int age;
//     Human(){};
//     Human(string n,int a){
//         name=n;
//         age=a;
//     }
//     virtual void printdetails()=0;
// };

// class Adult:public Human{
//     public:
//         int voterID;

//     Adult(string aname,int aage,int avot):Human(aname, aage){
        
//         voterID=avot;
//         if(aage<18){
//             throw this->age;
            
//         }
//     }
//     void printdetails(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Age: "<<age<<endl;
//             cout<<"Voter ID: "<<voterID;
//         }
// };
// class Child:public Human{
//     public:
//         string schoolname;
//     Child(string cname,int cage,string scname):Human(cname, cage){
//         if(cage<0||cage>18){
//             throw this->age;
//         }
//         else{
//             age=cage;
//         }
//         schoolname=scname;
//     }
    

//     void printdetails(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Schoolname: "<<schoolname;

//     }

// };
// int main(){

//     try{Adult A1("anshu",2,4567);
//     Child C1("kanishk",5,"rdpublic");
//     A1.printdetails();
//     }catch(int x){
//         cout<<"Issue with age, age="<<x<<endl;
//     }
    


    
//     return 0;
// }


// -------------------------------------------------

//Q3


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){

//     ofstream fout("pyqtext.txt");
//     fout<<"apple is a fruit but 2 apples are randomly distributed in 6 red boxes";
//     fout.close();

//     ifstream fin("pyqtext.txt");
//     string str;
//     while(!fin.eof()){
//         fin>>str;
//         if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'){
//             ofstream fout("vowwords.txt",ios::app);
//             fout<<str<<" ";
//             fout.close();


//         }
//         else if(str[0]=='1'||str[0]=='2'||str[0]=='3'||str[0]=='4'||str[0]=='5'||str[0]=='6'||str[0]=='7'||str[0]=='8'||str[0]=='9'||str[0]=='0'){
//             ofstream fout("digitext.txt",ios::app);
//             fout<<str<<" ";
//             fout.close();
//         }
//         else{
//             ofstream fout("remain.txt",ios::app);
//             fout<<str<<" ";
//             fout.close();
//         }

//     }
    
    
//     return 0;
// }

// --------------------------------------------
// Q2:


// #include <iostream>
// using namespace std;

// void setarray(int arr[100][100],int r,int c){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<"Enter a"<<i<<j<<" ";
//             cin>>arr[i][j];
//         }
//     }
// }
// void printarrdata(int arr[100][100],int r,int c){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
            
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// float avgarr(int arr[100][100],int r,int c){
//     float sum=0;
//     float count=0;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
            
//             sum+=arr[i][j];
//             count++;
//         }
//     }

//     float avg=sum/count;
//     return avg;

// }
// int greatfcol(int arr[100][100],int r,int c){
//     int max=0;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }

//         }
//     }
//     return max;

// }

// int main(){
//     int rows,cols; 
//     cout<<"Enter rows>>cols"<<endl;
//     cin>>rows>>cols;
    
//     int twodarray[100][100];

//     setarray(twodarray,rows,cols);
//     printarrdata(twodarray,rows,cols);
//     float avgr=avgarr(twodarray,rows,cols);
//     cout<<"average is :"<<avgr<<endl;
//     int garr=greatfcol(twodarray,rows,cols);
//     cout<<"greatest element : "<<garr<<endl;return 0;
// }

// --------------------------------------------

// Q1:


// #include <iostream>
// #include<cmath>
// using namespace std;

// class Newfloat{
// public:
//     float floatdata;

//     Newfloat(float f){
//         floatdata=f;
//     }
//     inline void printdata(){
//         cout<<"Float data is "<<floatdata<<endl;
//     }

//     void decidata(){
//         float decipart=0;
//         float before=0;
//         before=floor(floatdata);
//         decipart=floatdata-before;
//         cout<<decipart;
//     };

// };

// int main(){

//     Newfloat nf(123.461);
//     nf.printdata();
//     nf.decidata();
//     return 0;
// }




// ----------------------------------------------


//          permutation program try try . . ..
// before that we will do binary search



// #include <iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int s=15;
//     int x[]={1,2,4,6,15,23,59,60,70,99,304};
//     int temp=0;
//     int mid=floor(sizeof(x)/sizeof(x[0])/2);
//     while(x[mid]!=s){
        
//         if(x[mid]>s){
//             mid=mid/2;
//             temp=mid;
            
//         }
//         else if(x[mid]<s){
            
//             mid=(mid+temp)/2;
//             temp=mid;


//         }
//     }
//     cout<<x[mid];
    
//     return 0;
// }






// --------------------------------------------



//              2016 qp




// #include <iostream>
// using namespace std;

// int main(){
    
//     float x=30;
//     float y;
//     try{
//         cout<<"Enter divisor :"<<endl;
//         cin>>y;
//         if(y==0){
//             throw(y);
//         }
//         else{
//             cout<<x/y;
//         }
//     }
//     catch(...){
//         cout<<"Divide by zeroerror :::"<<y<<endl;
//     }
//     return 0;
// }
// --------------------------------------------





// #include <iostream>
// using namespace std;

// class Shape{
// public:
//     int length=3, breadth=4;
//     virtual int area(){
//         cout<<"basearea"<<endl;

//     }
// };
// class rect:public Shape{
// public:
//     int area(){
//         cout<<length*breadth;
//     }

// };

// int main(){

//     Shape *p;
//     Shape s1;
//     rect r1;
//     p=&r1;
//     p->area();

    
//     return 0;
// }

// -------------------------------------------

//                  CALCULATE STRING LENGTH USING COMMAND LINE ARGUMENT




// #include <iostream>
// using namespace std;

// int countv(string x){
//     int c=0;
//     for(int i=0;i<x.length();i++){
//         c++;
//     }
//     return c;
// }

// int main(int argc,char*argv[]){
//     int count =0;
//     for(int i=1;i<argc;i++){
//         count +=countv(argv[i]);
//     }
//     cout<<"length of string is : "<<count;
    
//     return 0;
//  }


// -------------------------------------------------------------


// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     string x;
//     int count=0;
//     ifstream fin("new.txt");
//     while(!fin.eof()){
//         fin>>x;
        
//         for(int i:x){
//             count++;

//         }
//     }
//     cout<<"There are "<<count<<" characters"<<endl;
    
//     return 0;
// }




// -------------------------------------------



// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter 'n'";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ------------------------------------------




// #include <iostream>
// using namespace std;

// class Circle{
// public:
//     float radius;

//     Circle(){
//         radius=0;
//     }
//     Circle(int r){
//         radius =r;
//     }
//     void Area(){
//         cout<<"Area is "<<3.14*radius*radius;
//     }

// };

// int main(){

//     Circle c1;
//     Circle c2(2);
//     c2.Area();
    
//     return 0;
// }



// ------------------------------------




// #include <iostream>
// using namespace std;

// int main(){

//     int x=5;
//     int y=10;
//     int *px=&x;
//     int *py=&y;
    
//     int temp=*px;
//     *px=*py;
//     *py=temp;

//     cout<<x<<endl<<y;

    


//     return 0;
// }



// -----------------------------------------



// #include <iostream>
// using namespace std;

// class A{
// public:
//     static void sum(int a=2,int b=2){
//     cout<<a+b;
// }

// };



// int main(){
//     A::sum();
    
    
//     return 0;
// }



// -----------------------------------------





// #include <iostream>
// using namespace std;

// inline void sum(int x,int y){
//     int res=x+y;
//     cout<<res;
// }

// int main(){

//     int x=6,y=7;
//     sum(x,y);

    

//     return 0;
// }



// -------------------------------------------





// #include <iostream>
// using namespace std;

// int palindrome(int &x){
//     int org=x;
//     int rev=0;
//     while(x!=0){
//         rev=(rev*10)+(x%10);
//         x=x/10;
//     }
//     if(org==rev){
//         return 0;

//     }
//     else{
//         return 1;
//     }
// }

// int main(){

//     int x=1221654;

//     int ch=palindrome(x);
//     cout<<ch;


    
    
//     return 0;
// }




// --------------------------------------------





// #include <iostream>
// using namespace std;


// int ptr(int arr[],char x){
//     int i=10;
//     int *ptr;
//     ptr=&i;
//     return *ptr;
// }

// int main(){
// char ch;
//     int *p;
//     p=new int [10];

//     cout<<ptr(p,ch);
    
//     return 0;
// }




// ------------------------------------------





// #include <iostream>
// using namespace std;

// int main(){
//     int n,k=5;
    
//     n=(100%k?k+1:k-1);
//     cout<<n<<endl<<k;

//     return 0;
// }


// -------------------------------------------





// #include <iostream>
// using namespace std;

// int main(){

//     int list[]={2,4,-5,6,7,0,-1,6};
//     bool pos =true;
//     int i=0;

//     while(pos&&list[i]!=0){
//         pos=(list[i++]>0);
//     }
//     cout<<"pos "<<pos<<" i "<<i;
//     return 0;
// }





// -------------------------------------------

// #include <iostream>
// using namespace std;

// int f(int *aa,int &bb){
//     &bb=8;
//     aa[1]=bb[2];
//     aa[0]=bb;
// }

// int main(){
    
    
//     return 0;
// }