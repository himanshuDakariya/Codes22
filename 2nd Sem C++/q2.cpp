// // #include <iostream>
// // #include<vector>
// // using namespace std;

// // int count(vector <int> &v,int size,int x){
// //     int c=0;
// //     for(int i=0;i<size;i++){
// //         if(v[i]==x){
// //             c++;
// //         }
// //     }
// //     return c;
// // }
// // int main(){

// //     int arr[]={1,2,3,3,4,4,4,4,4,3,2,2,2,2,1,1,12};
// //     vector<int> v1;
// //     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
// //         if(count(v1,v1.size(),arr[i])==0){
// //             v1.push_back(arr[i]);
// //         }
// //         else{
// //             continue;
// //         }
// //     }
// //     for(int i=0;i<v1.size();i++){
// //         std::cout<<v1[i]<<" ";
// //     }

// //     return 0;
// // }

// // ------------------------------------------------------------------------
// //      practice questions:

// // #include <iostream>
// // using namespace std;

// // void replacewithspace(string &x,char y){
// //     for(int i=0;i<x.length();i++){
// //         if(x[i]==y){
// //             x[i]=' ';
// //         }
// //     }
// // }

// // int main(){

// //     string s="aabbccddeeff";
// //     for(int i=0;i<s.length();i++){
// //         if(s[i]==' '){
// //                 continue;
// //             }
// //         int count=0;
// //         for(int j=0;j<s.length();j++){

// //             if(s[i]==s[j]){
// //                 count++;

// //             }

// //         }
// //         cout<<s[i]<<" comes "<<count<<" times"<<endl;
// //         replacewithspace(s,s[i]);
// //     }

// //     return 0;
// // }

// // -----------------------------------------------------------------

// // #include <iostream>
// // using namespace std;

// // int main(){

// //     char *p;
// //     p=new char[3];
// //     for(int i=0;i<3;i++){
// //         cin>>*p;
// //         p++;
// //     }
// //     for(int i=0;i<3;i++){
// //         cout<<*p;
// //         p++;
// //     }

// //     return 0;
// // }

// // ---------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){

//     while(true){
//         for(int i=0;i<10;i++){
//         for(int s=0;s<10-i-1;s++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
//     for(int i=9;i>=0;i--){
//         for(int s=0;s<10-i-1;s++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
//     }

//     return 0;
// }

// -------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int x='b';
//     switch(x){
//         case 'A': case 'a':
//             cout<<"one ya hundred";
//             break;
//         case 'B':case 'b':
//             cout<<"two ya two hundr.";
//             break;
//         case 3: case 300:
//             cout<<"three ya three hundr.";
//             break;
//         case 5: case 500:
//             cout<<"five ya five hundr.";
//             break;

//         default:
//             cout<<"Kya batau ab";
//             break;
//     }

//     return 0;
// }

// --------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     string x="apple";

//     for(char c:x){
//         cout<<c;
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------

// #include <iostream>
// #include <cmath>
// using namespace std;

// class points{
// public:
//     int x;
//     int y;

//     points(int a,int b){
//         x=a;
//         y=b;
//     }
//     static points ADD(points p1,points p2){
//         points p3(0,0);
//         p3.x=p1.x+p2.x;
//         p3.y=p1.y+p2.y;
//         p3.showpoints();
//         cout<<endl;

//     }

//     static points distance(points p4,points p5){
//         float distance=0;
//         distance=pow(pow((p5.x-p4.x),2)+pow((p5.y-p4.y),2),0.5);
//         cout<<distance;

//     }
//     void showpoints(){
//         cout<<"("<<x<<","<<y<<")";
//     }

// };

// int main(){
//     points pa(2,3);
//     points pb(1,4);
//     points::ADD(pa,pb);
//     points::distance(pa,pb);

//     return 0;
// }

// -----------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int m=80;
// int main(){
//     int m=40;
//     for(int i=0;i<1;i++){
//         int m=20;
//         cout<<"hie"<<endl;
//         cout<<m<<endl;
//         cout<<::m<<endl;
//     }
//     cout<<"hie"<<endl;
//     cout<<m<<endl;
//     cout<<::m<<endl;

//     return 0;
// }

// -------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int fact(int x){

//     if(x==0){
//         return 1;
//     }
//     else{
//         return x*fact(x-1);

//     }

// }

// int main(){

//     cout<<fact(5);

//     return 0;
// }

// -----------------------------------------------------

// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
//     A(int x){
//         a=x;
//     }
//     void display(){
//         cout<<"The number associated is "<<a<<endl;
//     }
//     A(A &a1){
//         a=a1.a;
//     }
// };

// int main(){

//     A a(410);
//     A a3(a);
//     a3.display();

//     return 0;
// }

// -------------------------------------------

// #include <iostream>
// using namespace std;
// class Array{
//     int size;
//     int *p;
// public:
//     Array(int s){
//         size =s;
//         p=new int[size];
//     }
//     void input(){
//         for(int i=0;i<size;i++){
//             cout<<"Enter a"<<i<<endl;
//             cin>>p[i];
//         }
//     }
//     void output(){
//         cout<<"[";
//         for(int i=0;i<size;i++){
//             cout<<p[i]<<',';
//         }
//         cout<<"]";
//     }
// };
// int main(){

//     Array a1(5);
//     a1.input();
//     a1.output();

//     return 0;
// }

// ----------------------------------------------------

// #include <iostream>
// using namespace std;

// class B{
//     int a;
// public:
// int x=5;
//     void greet(){
//         cout<<"Hello himanshu, I am base1 "<<endl;
//     }
// };
// class Derived1:public virtual B{
//     public:

// };
// class Derived2: public virtual B{
//     public:

// };

// class Fderived :public Derived1,public Derived2{

// };
// int main(){

//     Fderived f;
//     f.greet();
//     cout<<f.x;

//     return 0;
// }

// --------------------------------------------------------

// #include <iostream>
// using namespace std;

// template<class T>
// class abc{
//     public:
//     T a;
//     T b;
//     abc(T x, T y){
//         a=x;
//         b=y;
//     }
// };

// int main(){

//     abc<string> a1("I.A.S", "Himanshu Dakariya");
//     cout<<a1.a;
//     cout<<endl;
//     cout<<a1.b;

//     return 0;
// }

// ----------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){

//     int x=5;
//     int *p=&x;
//     int **q=&p;

//     cout<<(*p);
//     cout<<(**q);

//     return 0;
// }

// ------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int a[]={1,3,4,9,8,10};
//     int *aptr=&a[0];

//     for(int i=0;i<6;i++){
//         if(*aptr%2==0){
//             cout<<*aptr;
//         }
//     aptr++;
//     }
//     return 0;
// }

// --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){

//     int s[]={10,20,30};
//     int *inar[3];

//     for(int i=0;i<3;i++){
//         inar[i]=&s[i];
//     }
//     cout<<"--------------------"<<endl;
//     for(int j=0;j<3;j++){
//         cout<<inar[j]<<"  ";
//     }cout<<endl;
//     cout<<"--------------------"<<endl;
//     for(int k=0;k<3;k++){
//         cout<<*inar[k];
//     }
//     return 0;
// }

// -------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Students{
// protected:
//     int roll;
// public:
//     void setroll(int r){
//         roll=r;
//     }
//     void getroll(){
//         cout<<"Roll: "<<roll<<endl;
//     }
// };
// class Exams:public Students{
// protected:
//     float mathsmrk;
// public:
//     void setmarks(float m){
//         mathsmrk=m;
//     }
//     void getmarks(){
//         cout<<"Marks in maths: "<<mathsmrk<<endl;
//     }

// };
// class Result:public Exams{
// public:
//     void display(){
//         cout<<"Roll: "<<roll<<endl
//             <<"Marks: "<<mathsmrk<<endl
//             <<"Percentage: "<<mathsmrk<<" %"<<endl;
//     }
// };

// int main(){
//     Result Anshu;
//     Anshu.setroll(22523);
//     Anshu.setmarks(99.99);
//     Anshu.display();

//     return 0;
// }

// ----------------------------------------------------------------------

// #include <iostream>
// using namespace std;
// void sum(int x,int y){
//     cout<<"x+y ="<<x+y;
// }
// void display(void (*fptr)(int,int)){
//     (fptr)(4,5);
// }

// int main(){
//     display(&sum);

//     return 0;
// }

/*---------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int greets(string x){
//     cout<<"Goodmorning "<<x<<endl;
// }

// int main(){

//     int (*fptr)(string);
//     fptr=&greets;
//     fptr("Himanshu sir" );

//     return 0;
// }

//----------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int size=5;
//     int *arr=new int[size];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];

//     }
//     for(int j=0;j<5;j++){
//         cout<<arr[j]<<" ";

//     }

//     return 0;
// }

// ------------------------------------------

// #include <iostream>
// using namespace std;

// class Students{
//     int roll;
//     int marks;
// public:
//     void setroll(int r){
//         roll=r;
//     }
//     void setmarks(int m){
//         marks=m;
//     }
// };

// int main(){
//     Students ansh;
//     Students *a=&ansh;
//     a->setmarks(100);

//     return 0;
// }

// -----------------------------------------

/*VERY IMPORTANT EXAMPLE !!  !!  !!  !!  !!  */

// #include <iostream>
// #include<cstring>
// using namespace std;

// class Person{
//     char name[30];
//     int age;
// public:

//     Person(char *s,int a){
//         strcpy(name,s);
//         age=a;

//     }
//     Person &greater (Person &x){
//         if(x.age>age){
//             return x;
//         }
//         else{
//             return *this;
//         }

//     }
//     void display(){
//         cout<<"Name: "<<name<<endl
//             <<"Age: "<<age<<endl;

//     }

// };

// int main(){

//     Person p1("Anshu",18);
//     Person p2("Vasoo",19);
//     Person p=p1.greater(p2);

//     p.display();

//     return 0;
// }

// --------------------------------------------

// #include <iostream>
// using namespace std;

// template<class T>
// void bsort(T arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             T temp;
//             if(arr[j]>arr[i]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     cout<<"Your Sorted Array []"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){

//     float ary[]={89.5,2.5,9.4,100,4.2};
//     bsort <float> (ary,5);

//     return 0;
// }

// -------------------------------------------

// #include <iostream>
// #include <cstring>

// using namespace std;

// void permute(string str,string ch){

//     if(str.length()==0){
//         cout<<ch<<endl;

//     }

//     for(int i=0;i<str.length();i++){
//         char t=str[i];
//         string rlprt=str.substr(0,i)+str.substr(i+1);
//         permute(rlprt,ch+t);
//     };

// }

// int main(){
//     string str="abcd";
//     permute(str,"");
//     int fact=1;
//         for(int i=str.length();i>0;i--){
//             fact*=i;
//         }
//         cout<<"No. of permutation: "<<fact;

//         return 0;
// }

// _______________________________________________

// #include <iostream>
// #include <cstring>

// using namespace std;

// void permute(string str,string ch){

//     if(str.length()==0){
//         cout<<ch<<endl;

//     }

//     for(int i=0;i<str.length();i++){
//         char t=str[i];
//         string rlprt=str.substr(0,i)+str.substr(i+1);
//         permute(rlprt,ch+t);
//     };

// }

// int main(){

//     string str=to_string(123);
//     permute(str,"");
//     int fact=1;
//         for(int i=str.length();i>0;i--){
//             fact*=i;
//         }
//         cout<<"No. of permutations: "<<fact;

//         return 0;
// }

// -------------------------------

// #include <iostream>
// using namespace std;

// class du{
//     private:
//         ;
//     public:
//         void ~du(void);
// }

// int main(){

//     return 0;
// }

// --------------------------

//               not completed

// #include <iostream>
// #include<fstream>
// using namespace std;

// int main(){

//     ifstream fin("parc.txt");
//     while(!fin.eof()){
//         string x;
//         fin>>x;

//         cout<<x;
//     }

//     return 0;
// }

// --------------------------------------

// #include <iostream>
// using namespace std;

// int sum(int x,int r){

//     if(x<=11){

//         r+=x;
//         sum(x+1,r);

//     }
//     else{
//         cout<<r;

//     }

// }

// int main(){
//     int res=0;
//     sum(1,res);

//     return 0;
// }

// -----------------------------

// #include <iostream>
// using namespace std;

// class Twodim{
// public:
//     int x,y;
//     Twodim(){
//         x=0;
//         y=0;
//     }
//     Twodim(int a,int b){
//         x=a;
//         y=b;
//     }
//     void print(){
//         cout<<'('<<x<<","<<y<<')'<<endl;
//     }
// };

// int main(){

//     Twodim p1(5,6);
//     p1.print();

//     return 0;
// }

// ---------------------------------

// #include <iostream>
// using namespace std;
// int x=2,y;

// int main(){
//     cout<<"x="<<x;
//     cout<<"y="<<y;
//     func();
//     cout<<"x="<<x;
//     cout<<"y="<<y;

//     return 0;
// }

// void func(){
//     int x=7;
//     y=11;
//     cout<<"x="<<x;
//     cout<<"y="<<y;
// }

// --------------------------------

/*destructor*/

// #include <iostream>
// using namespace std;

// class A{
// public:
//     A(){
//         cout<<"A constructed"<<endl;
//     }
//     ~A(){
//         cout<<"A Destroyed"<<endl;
//     }

// };
// class B:public A {
// public:
//     B(){
//         cout<<"B constructed"<<endl;
//     }
//     ~B(){

//     cout<<"B Destroyed"<<endl;
//     }

// };
// class C:public B{
// public:
//     C(){
//         cout<<"C constructed"<<endl;
//     }
//     ~C(){

//     cout<<"C Destroyed"<<endl;
//     }

// };
// class D:public C{
// public:
//     D(){
//         cout<<"D contructed"<<endl;
//     }
//     ~D(){

//     cout<<"D Destroyed"<<endl;
//     }

// };

// int main(){
//     A a;
//     B b;
//     C c;
//     D d;

//     return 0;
// }

// -------------------------------

// #include <iostream>
// using namespace std;

// int main(){

//         int x=5;
//         int y=6;
//         int * px=&x;
//         int * py=&y;
//         int temp;
//         temp=*px;
//         *px=*py;
//         *py=temp;
//         cout<<x<<endl<<y;

//         return 0;
// }

// -------------------------------

/*                  2018*/

// #include <iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     float a=2,b=2,c=0;

//     c=( pow((pow(a,2)+pow(b,2)),0.5))/(4*a);

//     cout<<c;

//     return 0;

// }

// ------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//         int x=1,y=0,z=1;
//         if(x>y&&x>z){
//                 y=x;
//                 z=x+1;
//         }
//         else if(x+y>=z){
//                 ++x;
//                 z=x+1;
//         }
//         else y=z+x;

// cout<<"X:"<<x<<"y: "<<y<<"z: "<<z;
// }
// -------------------------------
// #include <iostream>
// using namespace std;

// int main(){
//         int num=10;
//         int *val=&num;

//         cout<<*val;
//         cout<<(*val+1)*2;
//         return 0;
// }


// ------------------------------
// #include <iostream>
// using namespace std;

// int main(){
//         string s1="Hello",s2="Beautiful world!!! ";
//         string s3="Be happy";
//         string s=s1+" "+s2+" "+s3;
//         s.append(5,'!');
//         cout<<s<<endl;
//         cout<<s.rfind("Be");
//         return 0;
// }


// -----------------------------

// #include <iostream>
// using namespace std;

// int main(){
//         int val=1;
//         do{
//                 val++;
//                 ++val;
//         }while(val++>25);
//         cout<<val;

//         return 0;
// }

// 
// -------------------------------


// #include <iostream>
// using namespace std;

// int main(){
//         int x=0,y=0,z=1;
//         if(z<x|| y>=z&&z==1)
//                 if(z&&y)
//                         y=1;
//                 else    
//                         x=1;
//                 cout<<x<<" "<<y<<" "<<z;
//         return 0;
// }

// ------------------------------

// #include <iostream>
// using namespace std;

// class Base{
//         public:
//                 void print(){
//                         cout<<"Base print"<<endl;
//                 }
//                 virtual void show()=0;
// };
// class Derived:public Base{
//         public:
//                 void print(){
//                         cout<<"Print Derived "<<endl;
//                 }
//                 void show(){
//                         cout<<"Show derived"<<endl;
//                 }
// };

// int main(){
//         Base *bptr;
//         Derived d;
//         bptr=&d;
//         bptr->print();
//         bptr->show();

//         return 0;
// }

// ---------------------------

// #include <iostream>
// using namespace std;
// int func1(int *aa,int &bb){
//         &bb=8;       /*ERROR! ERRORRROR*/
//         aa[0]=bb;
// }

// int main(){

//         return 0;
// }

// ---------------------------------------

/*copy constructor*/

// #include <iostream>
// using namespace std;

// class student{
//         int rol;
//         int fees;
// public:
//         student(int r,int f){
//                 rol=r;
//                 fees=f;
//         }
//         student(student &obj){
//                 rol=obj.rol;
//                 fees=obj.fees;
//         }
//         void display(){
//                 cout<<"ROll :"<<rol<<endl;
//                 cout<<"FEES :"<<fees<<endl;
//         }
// }
// ;
// int main(){

//         student s(56,5000);
//         s.display();
//         student t(s);
//         t.display();

//         return 0;
// }
// --------------------------

// #include <iostream>
// using namespace std;
// class base{
// public:
//         int x;
//         int y;
// };
// class derived:private base{
//         void a(){
//                 x=5;
//                 cout<<x;
//         }
// }
// ;
// int main(){
//         base d;
//         d.x;

        
//         return 0;
// }

// ------------------------------------
// #include <iostream>
// using namespace std;
// string replace(string s){
//         for(int i=0;i<s.length();i++){
//                 if(islower(s[i])){
//                         s[i]=toupper(s[i]);
//                 }
//                 else{
//                         continue;
//                 }
//         }
//         cout<<s;
// }
// int main(){

//         string x="Hello World!!!";
//         replace(x);
        
//         return 0;
// }


// --------------------------------------

// #include <iostream>
// #include <cmath>

// using namespace std;

// float summation(int n){
//         float sum=0;
//         for(float i=1;i<=n;i++){
//                 sum+=2/(pow(i,2));

//         }
//         cout<<sum;
// }

// int main(){
//         summation(2);
        
        
//         return 0;
// }
// --------------------------------------


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//         float num=22/7;

//         cout<<setw(10)<<setprecision(60)<<num;

//         return 0;
// }
// ----------------------------------


// #include <iostream>
// using namespace std;

// int fact(int num){
//         long long int f=1;
//         for(int i=num;i>0;i--){
//                 f*=i;
//         }
//         cout<<"Factorial of "<<num<<" is "<<f;
// }

// int main(){
//         int n;
//         cout<<"Enter the value of 'n'"<<endl;
//         cin>>n;
//         int count=1;
//         int i=2;
//         while(count<=n){
//                 if(i%2==0){
//                         fact(i);
//                         cout<<endl;
//                         count++;
//                         i++;
//                 }
//                 else{
//                         i++;
//                 }

//         }
        
//         return 0;
// }




// ------------------------------------
//

// #include <iostream>
// using namespace std;

// int main(){
//         for(int i=10;i>=0;i--){
//                 cout<<endl;
//                 for(int j=i;j>=0;j--){
//                         cout<<j;
//                         if(j==5){
//                                 break;
//                         }
//                 }
//         }
//         return 0;
// }



// ----------------------------------


// #include <iostream>
// using namespace std;
// class Matrix{
// public:
//         int **mat;
//         int rows,cols;
//         Matrix(int m,int n){
//                 rows=m;
//                 cols=n;
//                 mat=new int*[rows];
//                 for(int i=0;i<rows;i++){
//                         mat[i]=new int[cols];
//                 }
//         }
//         void setelements(){
//                 for(int i=0;i<rows;i++){
//                         for(int j=0;j<cols;j++){
//                                 cout<<"Enter a"<<i<<j<<endl;
//                                 cin>>mat[i][j];
//                         }
//                 }

//         }
//         void display(){
//                 for(int i=0;i<rows;i++){
//                         for(int j=0;j<cols;j++){
//                                 cout<<mat[i][j]<<" ";
//                         }
//                         cout<<endl;
//                 }

//         }
//         friend void matml();

//         friend void transpose();

        
        
// };
// void matml(Matrix m1,Matrix m2){
//                 if(m1.cols!=m2.rows){
//                         cout<<"Multiplication not possible!"<<endl;
//                         exit(0);  
//                 }
//                 else{
//                         Matrix m3(m1.rows,m2.cols);
//                         for(int i=0;i<m1.rows;i++){
//                                 for(int k=0;k<m2.cols;k++){
//                                         int elmnt=0;
//                                         for(int j=0;j<m2.cols;j++){
//                                                 elmnt+=m1.mat[i][j]*m2.mat[j][k];
                                                
//                                 }
//                                 m3.mat[i][k]=elmnt;
                                
//                         }
                                
                                
//                         }
//                         cout<<"Product"<<endl;
//                         for(int i=0;i<m3.rows;i++){
//                                 for(int j=0;j<m3.cols;j++){
//                                         cout<<m3.mat[i][j]<<" ";
//                                 }
//                                 cout<<endl;
//                         }
//                 }
//         }
//         void transpose(Matrix m){
//                 Matrix m4(m.rows,m.cols);
//                 for(int i=0;i<m4.rows;i++){
//                         for(int j=0;j<m4.cols;j++){
//                                 m4.mat[i][j]=m.mat[j][i];
//                         }
//                 }
//                 for(int i=0;i<m4.rows;i++){
//                         for(int j=0;j<m4.cols;j++){
//                                 cout<<m4.mat[i][j]<<" ";
//                         }
//                         cout<<endl;
//                 }

//         }
// int main(){
//         int t;
//         cout<<"Press 1 for multiplication ..."<<endl
//         << "Press 2 for transpose ..."<<endl;
//         cin>>t;

//         if(t==1){
//                 int r1,c1;
//                 cout<<"Enter rows & cols of m1"<<endl;
//                 cin>>r1>>c1;
//                 Matrix m1(r1,c1);
//                 m1.setelements();


//                 int r2,c2;
//                 cout<<"Enter rows & cols of m2"<<endl;
//                 cin>>r2>>c2;
//                 Matrix m2(r2,c2);
//                 m2.setelements();
//                 Matrix m3(r1,c2);
        
//                 matml(m1,m2);
//         }
//         else if(t==2){
//                 int r1,c1;
//                 cout<<"Enter rows & cols of m1"<<endl;
//                 cin>>r1>>c1;
//                 Matrix mt(r1,c1);
//                 mt.setelements();

//                 transpose(mt);













//         }
       
        
        

// }


// -----------------------------------------



// #include <iostream>
// using namespace std;

// void main(){

//         int arr[]={1,2,3,4,5,6,7,8,9};
//         int *ptr1,*ptr2;
//         ptr1=arr;
//         ptr2=ptr1+2;
//         cout<<ptr2-ptr1;
        
       
// }

// --------------------------------


// #include <iostream>
// using namespace std;

// class X{
// private:
//         int i,j;
//         X(){i=1;j=1;}
//         virtual void show()=0;
// public:
//         void print(){
//                 cout<<i<<j;
//         } 
// };
// class Y:public X {
//         int k;
// public:
//         void print(){
//                 cout<<k;
//         }
//         Y(){i=j=k=2;}
// };


// void main(){
//         Y w;
//         w.print();
// }

// -------------------------------------




// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//         ifstream fin("new.txt");
//         char x;

//         char vowel[]={'a','e','i','o','u'};
//         int vc=0;
//         while(!fin.eof()){
//                 fin>>x;
//                 for(int i=0;i<5;i++){
                        
//                         if(vowel[i]==tolower(x)){
//                                 vc++;
//                         }
//                         else{
//                                 continue;
//                         }
//                 }
                
                
                
//         }
//         cout<<vc;
        
//         return 0;
// }

// -------------------------------------




// #include <iostream>
// using namespace std;
// class polygon{
// protected:
//         int w,h;
// public:
//         void setval(int a,int b){
//                 w=a;h=b;
//         } 
// };
// class output1{
// public:
//         void output(int i){
//                 cout<<i<<endl;
//         }
// };
// class rect:public polygon,public output1{
// public:
//         int area(){
//                 return(w*h);
//         }
// };
// class triangle:public polygon,public output1{
// public:
//         int area(){
//                 return (w*h/2);
//         }
// } ;

// int main(){

//         rect r;
//         triangle t;
//         r.setval(4,5);
//         t.setval(4,5);
//         r.output(r.area());
//         t.output(t.area());
        
//         return 0;
// }

// ------------------------------



// #include <iostream>
// using namespace std;
// class Person{
// public:
//         string name;
//         int code;
//         Person(string n,int c){
//                 name =n;
//                 code=c;
//         }
//         virtual void display(){
//                 cout<<"elo base";
//         };
// };
// class Account:public Person{
// public:
//         int pay;
//         Account(string naam,int c,int p):Person(naam,c){
//                 pay=p;
//         }
// };
// class Employee:public Account{
// public:
//         Employee(string nem,int kode,int pey):Account(nem,kode,pey){
                
//         }
//         void display(){
//                         cout<<"Name :"<<name<<endl
//                             <<"Code :"<<code<<endl
//                             <<"Payment :"<<pay;

//                 }
// };

// int main(){
//         Person *a;
//         Employee anshu("rihu rj",456,56000);
//         a=&anshu;

//         a->display();

        
//         return 0;;
// }
// ----------------------------

// #include <iostream>
// using namespace std;

// int main(){
//         char x='a';
//         cout.put(x);
//         cin.get(x);
//         return 0;
// }

// ------------------------------


// #include <iostream>
// using namespace std;
// int mysqr(int n){
        
//                 if(n<0){
//                         throw n;
//                 }
//                 else{
//                         cout<<n*n;
//                 }
        
// };

// int main(){
        
//         try{
//             mysqr(-3);
//         }catch(int n){
//                 cout<<n<<" is negative!!!";
//         }
//         return 0;
// }


// -----------------------------




// #include <iostream>
// using namespace std;

// int func1(float &f,string s,int arr[]){
//         char *ptr=new char('a');
//         return *ptr;

// }

// int main(){
//         int arr[3][4];
//         for(int i=0;i<3;i++){
//                 for(int j=0;j<4;j++){
//                         arr[i][j]=0;
//                 }
//         }
        
        
//         return 0;
// }






// ---------------------------------
// #include <iostream>
// using namespace std;

// int counter(int ar[],int s,int x){
//         int count=0;
//         for(int i=0;i<s;i++){
//                 if(ar[i]==x){
//                         count++;
//                 }
//                 else{
//                         continue;
//                 }

//         }
//         return count;

// }

// int main(){
//         int s;
//         cout<<"Enter the size:"<<endl;
//         cin>>s;
//         int arr[s];
//         cout<<"Enter the element: "<<endl;
//         for(int i=0;i<s;i++){
//                 cin>>arr[i];
//         }

//         int arr2[s];
//         for(int i=0;i<s;i++){
//                 arr2[i]=0;
//         }
//         for(int i=0;i<s;i++){
//                 if(counter(arr2,s,arr[i])==0){
//                         arr2[i]=arr[i];
//                 }
//                 else{
//                         continue;
//                 }

//         }
//         for(int i=0;i<s;i++){
//                 cout<<arr2[i]<<" ";
//         }
//         cout<<endl<<"Consider '0' as blank"<<endl;

//         return 0;
// }

// ----------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//         int i,j;
//         for(i=10;i>=0;i--){
//                 cout<<endl;
//                 for(j=i;j>=0;j--){
//                         cout<<j;
//                         if(j==5) break;
//                 }
//         }

// };

// -----------------------------

// #include <iostream>
// using namespace std;

// int const r=3;
// int const c=3;

// void setdata(int a[r][c]){
//         for(int i=0;i<3;i++){
//                 for(int j=0;j<3;j++){
//                         cin>>a[i][j];
//                 }
//         }
// }

// void print(int a[r][c]){
//         for(int i=0;i<3;i++){
//                 for(int j=0;j<3;j++){
//                         cout<<a[i][j]<<" ";
//                 }
//                 cout<<endl;
//         }

// }

// int main(){
//         int arr[r][c];
//         setdata(arr);
//         print(arr);

//         return 0;
// }

// ---------------------------------------

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//         float sum=0;
//         for(int i=1;i<3;i++){
//                 sum+=2/(pow(i,2));
//         }

//         cout<<sum;

//         return 0;
// }

// #include <iostream>
// using namespace std;

// int count(string arr,int l,char &c){
//         int max=0;

//         for(int i=0;i<l;i++){
//                 int count=0;
//                 for(int j=0;j<l;j++){
//                         if(arr[i]==arr[j]){
//                                 count++;
//                         }
//                 }
//                 if(count>max){
//                         c=arr[i];
//                         max=count;
//                 }

//         }

//         return max;

// }

// int main()
// {

//         string x = "Print a welcome text in a separate line  ";
//         string temp;
//         char m;
//         string reserve;
//         int max1=0;
//        int i=0;
//        while(i<x.length()){
//                 if(x[i]!=' '){
//                         temp+=x[i];

//                 }

//                 else{

//                         int wc=count(temp,temp.length(),m);
//                         if(wc>max1){
//                            max1=wc;

//                         }

//                         cout<<temp<<" "<<m<<" "<<wc<<endl;
//                         temp="";

//                 }
//        i++;
//        }
//        cout<<"------------------------------------------------"<<endl;
//        cout<<"The "<<max1<<" times occurence is the highest in its respective word";

// ----------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//         int arr[2][3];
//         for (int i = 0; i < 2; i++)
//         {
//                 for (int j = 0; j < 3; j++)
//                 {
//                         cin >> arr[i][j];
//                 }
//         }
//         cout << "# of rows: " << sizeof(arr);
//         cout << "# of cols: " << sizeof(arr[0]);

//         return 0;
// }




/*-----------------------------*/

            /*2019*/


// #include <iostream>
// using namespace std;

// int main(){

//     double z1;
//     double y=56.7;
//     int x=34;
//     if(x){
//         z1=y++;
//         cout<<z1<<endl;
        
        
//     }
//     else{
//         z1=y+x/2;
//         cout<<z1;
//     }

    
//     return 0;
// }



// -------------------------------








// #include <iostream>
// using namespace std;

// int main(){
//     int v;
//     int k=10;
//     v=(150%k ?k+5:++k);
//     cout<<"v="<<v<<"k="<<k;
    
//     return 0;
// }


// -------------------------------



// #include <iostream>
// using namespace std;

// int main(){
//     int i;
//     int b[]={101,120,130,-340,-112,-114};
//     for(i=0;b[i]>0;i++){
//         cout<<i;
//     }
//     return 0;
// }


// ----------------------------
//  * * * * * * * * * * * * * * * 


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     int i=890;
//     double x=4.678;
//     cout<<setw(5)<<i<<endl;
//     cout<<fixed;
//     cout<<setprecision(6);
//     cout<<"x="<<x<<endl;
//     cout<<oct<<"Octal ="<<i;
//     return 0;
// }


//  * * * * * * * * * * * * * * *




// #include <iostream>
// using namespace std;

// int main(){
//     string s="The basic program of C plus plus";
//     int j;
//     int k=0;
//     int count=0;
//     cout<<s.find('u',k);
//     while(j!=-1){
//         count++;
//         j=s.find('u',j+1);
//     }
//     cout<<count;
//     return 0;
// }

// -----------------------------



// #include <iostream>
// using namespace std;
// class base{
// public:
//     base(){
//         cout<<"base"<<endl;
//     }
// };
// class d1:base{
// public:
//     d1(){
//         cout<<"Derived 1"<<endl;;

//     }
// };
// class d2:base{
// public:
//     d2(){
//         cout<<"Derived 2"<<endl;
//     }
// };

// int main(){
//     base b;
//     d1 d;
//     d2 x;
    
//     return 0;
// }


// -----------------------------


// #include <iostream>
// using namespace std;

// int main(int argc,char *argv[]){
//     char vowel[]={'a','e','i','o','u'};
//     int c=0;
//     for(int i=1;i<argc;i++){
        
//         for(int j=0;j<5;j++){
//             if(*argv[i]==vowel[j]){
//                 c++;

//             }
//         }

//     }

//     cout<<"Number of vowels: "<<c<<endl;
    
     
//     return 0;
// }



// ------------------------------


// #include <iostream>
// using namespace std;
// void replc(char arr[],int s){
    
//     for(int i=0;i<s;i++){
//         switch(arr[i]){
//             case 'a':
//                 arr[i]='A';
//                 break;
//             case 'b':
//                 arr[i]='B';
//                 break;
//             case 'c':
//                 arr[i]='C';
//                 break;
//             case 'd':
//                 arr[i]='D';
//                 break;
                
                
//         }
//     }
// }

// int main(){

//     char arr[]={'a','b','c'};
//     replc(arr,3);

//     for(int i=0;i<3;i++){
//         cout<<arr[i];
//     }
    
    
//     return 0;
// }

// -----------------------------




// #include <iostream>
// using namespace std;

// int main(){
//     int i;
//     int j=11;
//     int m=6;
//     for(int i=1;i<=m;i++){
//         for(int t=1;t<=j;t++)
//             cout<<t;
//         j=j-2;
//         cout<<endl;
//     }
//     return 0;
// }

// -------------------------------




// #include <iostream>
// using namespace std;

// void uppertriangular(int arr[][100],int n){  
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>j){
//                 arr[i][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }

// int main(){
//     const int n=3;
//     int array[n][100]={{1,2,3},{1,2,3},{1,2,3}};

//     uppertriangular(array,3);

    
//     return 0;
// }



// -------------------------------



// #include <iostream>

// #include <fstream>
// using namespace std;



// int main(){

//     ifstream fin("new.txt");
//     int count=0;
//     while(!fin.eof()){
//         string x;
//         getline(fin,x);
//         count++;
        
//     }
//     cout<<"There are "<<count<<" lines.";
    
//     return 0;
// }


// -----------------------------


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={12,34,56,89};
//     int temp;
//     int size=4;
//     for(int i=0,j=size-1;i<j;i++,j--){
//         temp =arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// --------------------------------


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     int x=10;

//     cout<<setfill('*')<<setw(10)<<x;
    
//     return 0;
// }


// --------------------------------




// #include <iostream>
// using namespace std;
// int *fnc(){
//     int x=5;
//     int *ptr=&x;
//     return ptr;
// }

// int main(){
    
//     cout<<*(fnc());
//     return 0;
// }




// -------------------------------------




// #include <iostream>
// using namespace std;

// class myexception{
// public:    
//     string str;
//     myexception(string p){
//         str=p;
//     }
//     void display(){
//         cout<<str;
//     }
// };

// int main(){
//     int n,m;
//     try{
//         n=5;
//         m=-6;
//         if(n<0)
//             throw myexception("Negative number");
        
//         cout<<n<<endl;

//         if(m<0)
//             throw myexception("Negative number");
            
        
//         cout<<m;
//     }catch(myexception m1){
//         m1.display();
//     }

    

// }



// ---------------------------------------





// #include <iostream>
// #include <cstring>
// using namespace std;

// int main(){

//     string s1="Hello World";
//     string s2="Program in c++";

//     string s="Hello World";
//     string b="Program in C++";
//     cout<<s.compare(0,4,b,11,2)<<endl;
//     cout<<b.substr(6,8);

//     return 0;
// }

// ****************************




// #include <iostream>
// using namespace std;

// class X{
//     int il;
// public:
//     X(){
//         il=15;
//     }
//     void display(){
//         cout<<"il="<<il<<endl;
//     }
// };
// class Y:public X{
//     int jl;
// public:
//     Y(){
//         jl=10;
//     }
//     void display(){
//         cout<<"jl="<<jl<<endl;
//     }

// };
// class Z:public Y{
//     int kl;
// public:
//     Z(){
//         kl=20;
//     }
//     void display(){
//         cout<<"kl="<<kl<<endl;
//     }
// }
// ;
// int main(){
//     X *ptrx;
//     X x;
//     Y *ptry;
//     Y y;
//     Z *ptrz;
//     Z z;


//     ptrx=&x;
//     ptrx->display();
//     ptry=&y;
//     ptry->display();
//     ptrz=&z;
//     ptrz->display();

//     return 0;
// }