//                          pointer to pointer in depth.

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 5;
//     int *p = &x;
//     int **q = &p;
//     int ***r = &q;

//     cout << "Address x: " << p << " = " << &x << endl;
//     cout << "Address p: " << q << " = " << &p << endl;
//     cout << "Address q: " << r << " = " << &q << endl;
//     cout << "Address r: " << &r << " = " << &r << endl;

//     cout<<*p<<"="<<**q<<"="<<***r<<endl;
//     cout<<p<<"="<<*q<<"="<<**r<<endl;

//     return 0;
// }

// -------------------------------------------------------------------------------------------

 
// *********************************Pointer and array**************************************

// #include <iostream>
// using namespace std;

// int main(){
//     int a[]={1,2,3,6,5};

//     int* aptr;
//     aptr=&a[0];

//     cout<<*aptr;
//     aptr++;
//     cout<<*aptr;
//     aptr++;
//     cout<<*aptr;
//     aptr++;
//     cout<<*aptr;
//     aptr++;
//     cout<<*aptr;

//     return 0;
// }

// -----------------------------------------------------------------
// -------------------Sum of even number using pointers-----------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int s;
//     cout<<"Enter size: "<<endl;
//     cin>>s;
//     int a[s];

//     for(int i=0;i<s;i++){
//         cin>>a[i];
//     }

//     int *aptr=&a[0];
//     int sum=0;

//     for(int i=0;i<s;i++){
//         if(*aptr%2==0){
//             sum+=*aptr;
//         }
//         aptr++;
//     }
//     cout<<"Sum of even number :"<<sum<<endl;
//     return 0;
// }

// ----------------------------------------------------------------------

// Array of pointer //

// #include <iostream>
// using namespace std;

// int main(){
//     int s[]={10,20,30,40,50};
//     int *inarr[5];

//     for(int i=0;i<5;i++){
//         inarr[i]=&s[i];

//     }
//     cout<<"Addresses strored in inarr[]: "<<endl;
//     for(int j=0;j<5;j++){
//         cout<<inarr[j]<<' ';

//     }
//     cout<<' '<<endl;
//     cout<<"Value to which they are pointing : "<<endl;
//     for(int k=0;k<5;k++){
//         cout<<*inarr[k]<<' ';
//     }
//     return 0;
// }

// -------------------------------------------------------------------
//                    callback function

// #include <iostream>
// using namespace std;

// void sum(int x, int y){
//     cout<<"Sum: "<< x+y<<endl;
// }
// void sub(int x, int y){
//     cout<<"Sub: "<< x-y<<endl;
// }
// void display(void (*fptr)(int, int)){
//     (fptr)(5,6);
// }

// int main(){

//     display(&sum);
//     display(&sub);

// -----------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void sum(int x,int y){
//     cout<<"sum :"<<x+y<<endl;
// }
// void sub(int i,int j ){
//     cout<<"sub :"<<i-j<<endl;
// }
// int main(){

//     void (*fptr[2])(int,int)={&sum,&sub};
//     (*fptr[1])(5,6);
//     return 0;
// }

// ----------------------------------------------------------

//                      new keyword/operator

// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"enter size: "<<endl;
//     cin>>size;

//     int *arr = new int[size];

//     for(int i=0;i<size;i++){
//         cin>>*(arr+i);

//     }

//     for(int i=0;i<size;i++){
//         cout<<*(arr+i);

//     }
// }

// ---------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,7,4,6,3};
//     int sortarr[6];
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len;i++){
//         bool c=true;
//         int temp=arr[i];
//         for(int j=0;j<len;j++){
//             if(temp<=arr[j]){

//             }
//             else{
//             }
//         }
//         if(c==true){
//             sortarr[i]=temp;
//         }

//     }

//     for(int i=0;i<len;i++){
//         cout<<sortarr[i];

//     }
//     return 0;
// }

// --------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int i,j;

//     char x[]="Anshu";
//     char *sstr;
//     sstr=new char[5];
//     cout<<"Enter substring: "<<endl;
//     cin>>sstr;

//     for(int i=0;i<5;i++){
//         int k=i;
//         for(int j=0;j<2;j++){
//             if(x[k]==sstr[j]){
//                 if(j==1){
//                     cout<<"Substring is present in main string "<<endl;
//                     exit(0);
//                 }
//                 k++;
//             }
//             else{
//                 break;
//             }
//         }
//         if(i==5){
//         cout<<"not present";}
//     }

//     return 0;
// }
// ******************************************************************************

// #include <iostream>
// #include<cstring>
// using namespace std;

// int main() {
//     int i, j;

//     char str[] = "Anshu";
//     int len=strlen(str);

//     char* sstr;
//     sstr = new char[5];

//     cout << "Enter substring: " << endl;
//     cin >> sstr;
//     int len2=strlen(sstr);
//     for (i = 0; i < len; i++) {
//         int k = i;                                                      //Anshu
//         for (j = 0; j < len2; j++) {                                       //ns
//             if (str[k] == sstr[j]) {
//                 if (j == 1) {
//                     cout << "Substring is present in the main string." << endl;
//                     delete[] sstr; // Deallocate dynamically allocated memory

//                 }
//                 k++;
//             }
//             else {
//                 break;
//             }
//         }
//     }

//     cout << "Substring is not present in the main string." << endl;
//     delete[] sstr; // Deallocate dynamically allocated memory
//     return 0;
// }


// *************************Array of pointers to object:****************************************





// #include <iostream>
// #include<cstring>
// using namespace std;

// class city{
//     char *name;
//     int len;
// public:
//     city(){
//         len=0;
//         name= new char[len+1];
//     }
//     void setname(){
//         char *s=new char[30];
//         cout<<"Enter city name: "<<endl;
//         cin>>s;
//         len =strlen(s);
//         name =new char[len+1];
//         strcpy(name,s);}
    
//     void display(){

//         cout<<name<<endl;
//     }
// };

// int main(){

//     city *cptr[10];
//     int i=1;
//     int choice;
//     do{
//         cptr[i]=new city;
//         cptr[i]->setname();
//         i++;

//         cout<<"Enter 1/0";
//         cin>>choice;
//         }while (choice);
        
    
// cout<<endl;
//     for(int j=1;j<=i;j++){
//         cptr[j]->display();
//     }

//     return 0;
// }
// -------------------------------------------------------------------------------------------------

// -------------------------this-> pointer--------------------------------------



// #include <iostream>
// using namespace std;

// class A{
//     int a;
    
// public:
//     A& seta(int x){
//         a=x;
//         return *this;
//     }
//     void show(){
//         cout<<a;
//     }
// };

// int main(){

//     A obj;
//     obj.seta(5).show();
    
    
//     return 0;
// }


// ------------------------------------------------------------------------------

// ------------------books pointer example age > -------------------------

// #include <iostream>
// #include <cstring>
// using namespace std;

// class person{
//     char name[20];
//     int age;
// public:
//     person(char *s,int a){
//         strcpy(name,s);
//         age=a;
//     }

//     person& greater(person& x){
//         if(x.age>age){
//             return x;
//         }
//         else{
//             return *this;
//         }
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;

//     }
//     };


// int main(){
//     person p1("anshu",18);
//     person p2("raj",24);
//     person p3("hari",28);

//     person p=p1.greater(p3);
//     cout<<"Elder is: "<<endl;
//     p.display();

//     p=p1.greater(p2);
//     cout<<"Elder is: "<<endl;
//     p.display();
    

    
//     return 0;
// }



// ----------------------------------------------------------------------

// ------------------------Mechanism of virtual class-----------------------


// #include <iostream>
// using namespace std;

// class B{
//     public:
//         void f1(){
//             cout<<"B f1"<<endl;
//         }
//         virtual void f2(){
//             cout<<"B f2"<<endl;
//         }
//         virtual void f3(){
//             cout<<"B f3"<<endl;
//         }
//         virtual void f4(){
//             cout<<"B f4"<<endl;
//         }
// };
// class A:public B{
//     public:
//         void f1(){
//             cout<<"A f1"<<endl;
//         }
//         void f2(){
//             cout<<"A f2"<<endl;
//         }
//         void f4(int x){
//             cout<<"A f4"<<endl;
//         }
// };

// int main(){
//     B b;
//     A a;
//     B *Aptr;
//     Aptr=&a;
//     Aptr->f1();
//     Aptr->f2();
//     Aptr->f3();
//     Aptr->f4();
    
//     return 0;
// }


// -----------------------------------------------------------
// ----------------------Virtual functions-------------------------



// #include <iostream>
// #include<cstring>
// using namespace std;

// class shop{
// protected:
//     char title[50];
//     int price;
// public:
//     shop(char *s,int p){
//         strcpy(title,s);
//         price=p;
//     }
//     virtual void display(){};
// };
// // ----------------------------------
// class book :public shop{
//     int pages;
// public:
//     book(char *s,int p,int pgs):shop(s,p){
//         pages=pgs;
//     }
//     void display();
// };
// void book::display(){
//     cout<<"Title: "<<title<<endl;
//     cout<<"Pages: "<<pages<<endl;
//     cout<<"Prices: "<<price<<endl;
// }
// // ---------------------------------

// class tape:public shop {
//     float time;
// public:
//     tape(char *s,int p,float t):shop(s,p){
//         time=t;
//     }
//     void display();
// };
// void tape:: display(){
//     cout<<"Title: "<<title<<endl;
//     cout<<"Playtime: "<<time<<endl;
//     cout<<"Price: "<<price<<endl;
// };
// // -----------------------------------


// int main(){
//     char bname[]="balaguruswamy";
//     char tname[]="KK hits";
//     book b(bname,1200,456);
//     tape t(tname,399,5);

//     // sptr=&b;            //shop pointer pointing books
//     // sptr->display();

//     shop *sptr;
//     sptr=&t;            //shop pointer pointing tapes
//     sptr->display();


    
//     return 0;
// }



// -----------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class anshu{
// public:
//     virtual void example()=0;
// };
// class C:public anshu{
// public:
//     void example(){
//         cout<<"textbook1"<<endl;
//     }
// };
// class oops:public anshu{
// public:
//     void example(){
//         cout<<"textbook2"<<endl;
//     }
// };
// int main(){

//     C c1;
//     oops o1;

//     anshu *a;
//     a=&o1;
//     a->example();
//     return 0;
// }



// ---------------------------------------


// #include <iostream>
// using namespace std;

// class Base{
// public:
//     Base(){
//         cout<<"Base contructor"<<endl;
//     }
//     virtual ~Base(){
//         cout<<"Base destructor"<<endl;

//     }
// };
// class Derived:public Base{
// public:
//     Derived(){
//         cout<<"Derived contructor"<<endl;
//     }

//     ~Derived(){
//         cout<<"Derived destructor"<<endl;
//     }
// };


// int main(){
//     Base *b=new Derived();
//     delete b;

    
//     return 0;
// }


// ---------------------------------------------------------------------



// #include <iostream>
// using namespace std;

// int main(){
//     string x="himanshu is a vherry good IAS";
//     int max=0;
//     char c;
//     for(int i=0;i<x.length();i++){
//         int count=0;
//         for (int j=0;j<x.length();j++){
//             if(x[i]==x[j]){
//                 if(x[i]!=' '){
//                     count++;
//                 }
//             }
//             else{
//                 continue;
//             }
//         } 
//         if(count>max){
//             c=x[i];
//             max=count;
//         }
        
//     }

//     cout<<max<<" "<<c;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int count(string arr, int l, char &c) {
//     int max = 0;
//     for (int i = 0; i < l; i++) {
//         int count = 0;
//         for (int j = 0; j < l; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count > max) {
//             c = arr[i];
//             max = count;
//         }
//     }
//     return max;
// }

// int main() {
//     string x = "himmmmmmmmanshu dakammriya is vrrryyyy";
//     string temp;
//     char m;
//     int max1 = 0;
//     int i = 0;

//     while (i < x.length()) {
//         if (x[i] != ' ') {
//             temp += x[i];
//         } else {
//             int wc = count(temp, temp.length(), m);
//             if (wc > max1) {
//                 max1 = wc;
//             }
//             cout << "Most occurred letter in \"" << temp << "\" is: " << m << endl;
//             temp = "";
//         }
//         i++;
//     }

//     cout << "Most occurred letter in the string: " << m << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Air_assist{
//     int flightno;
//     string destination;
//     float distance;
//     float fuel;
//     float fvalue=0;

// public:
//     void FEEDINFO(){
//         cout<<"Enter Flght No. "<<endl;
//         cin>>flightno;
//         cout<<"Enter destination: "<<endl;
//         cin>>destination;
//         cout<<"Enter distance of journey: "<<endl;
//         cin>>distance;
//         fvalue=CALFUEL();

        
        
//     }
//     void SHOWINFO(){
//         cout<<"-----------------------------"<<endl;
//         cout<<"Flight number: "<<flightno<<endl
//             <<"Destination: "<<destination<<endl
//             <<"Distance: "<<distance<<endl
//             <<"Amt. of fuel required: "<<fvalue<<endl;
//     }

    

//     int CALFUEL(){
//         fuel=0;
//         if(distance>0 && distance<=1000){
//             fuel+=500;
//             return fuel;
//         }
//         else if(distance>1000 && distance<=2000){
//             fuel+=1100;
//             return fuel;
//         }
//         else if(distance>2000){
//             fuel+=2200;
//             return fuel;
//         }
//         else{
//             return 0;
//         }

//     }

    
// };
    
// int main(){

//     Air_assist a1;
//     a1.FEEDINFO();
//     a1.SHOWINFO();

    
//     return 0;
// }

// -------------------------------------- Number system -----------------------------------------

// #include <iostream>
// #include<vector>     //here we have used vectors;;
// using namespace std; 

// int main(){
//     int b,x;
//     cout<<"Enter the number: "<<endl;
//     cin>>x;
//     cout<<"Enter the base int which you want to convert: "<<endl;
//     cin>>b;
    
//     int xd=x;
//     vector <int> v1;
//     int i=0;
    
//     while(x!=0){
//         v1.push_back(x%b);
//         x=x/b;
//         i++;
    
//     }
//     cout<<"The Binary notation of "<<xd<<" is :"<<endl;
//     for (int i=v1.size()-1;i>=0;i--){
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }


// ----------------------------------------------------------------------------------

// -----------------------------  b i n a r y  c o n v e r s i o n-------------------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int x[]={1,0,0,1,1};
//     int y[]={1,1,1,0,1};
   
//     int c=0;
//     vector <int> v1;

//     for(int i=4;i>=0;i--){
//         int sum =x[i]+y[i]+c;
//         v1.push_back(sum % 2);
//         c = sum / 2;
//         if(i==0){
//             v1.push_back(c);
//         }
//     }
//     for(int i=v1.size()-1;i>=0;i--){
//         cout<<v1[i];
//     }
//     return 0;
// }


// ----------------------------div algorithm-------------------------------------

// #include <iostream>
// using namespace std;



// int main(){

//     int a=13;
//     int r=a;
//     int d=2;
//     int i=0;

//     while(r>d){
//         r=r-d;
//         i++;
//     if(a<0 && r>0){
//         r=d-r;
//         i=-(i+1);
//     }

//     }
//     cout<<i<<" "<<r;
    
//     return 0;
// }
// -----------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;
// template <class T>
// class vec{
//     T *v;
//     int size;
// public:
//     vec(int m){
//         size=m;
//         v=new T[size];
//     }
//     T& operator[](int index) {
//         return v[index];
//     }
//     int dot(vec &v){
//         T d=0;
//         for(int i=0;i<size;i++){
//             d+=this->v[i]*v[i];
            
//         }
//         cout<<d;
//     }
// };

// int main(){

//     vec<float> vr(3);
//     vr[0]=2;
//     vr[1]=2;
//     vr[2]=0;

//     vec<float> vrr(3);
//     vrr[0]=1.5;
//     vrr[1]=3;
//     vrr[2]=6;

//     vr.dot(vrr);
//     return 0;
// }
    
 
// =========================================================================

// ------------------------  Template class ------------------------------

// #include <iostream>
// using namespace std;
// template<class T1=char,class T2=char>
// class A{
//     public:
//         T1 a;
//         T2 b;
//         A(T1 x,T2 y){
//             a=x;
//             b=y;

//         }
//         void display(){
//             cout<<a<<" "<<b;
//         }
        
// };

// int main(){
//     A<int,float > a(10,50.4);
//     a.display();
// cout<<"    ";
//     A<float , int> b(4.5,10);
//     b.display();
    
//     return 0;
// }
    

// ---------------------------------------------------------------------

// ---------------function template----------------------------


// #include <iostream>
// using namespace std;
// template<class T>
// void small(T a[],int l){
//     T min=a[0];
//     for(int i=1;i<l;i++){
//         if(min>a[i]){
//             min=a[i];
//         }
//     }
//     T c =min;
//     cout<<c;

// }

// int main(){
//     char arr[]={'x','z','t','e'};
//     small<char>(arr,4);
    
//     return 0;
// }


// --------------------------------------------------------

//              Char and int array sorting

// #include <iostream>
// using namespace std;

// template <class T>
// void bubble(T arr[],int n){
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]<arr[j]){
//                 T temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;

//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
    
    
    
//     char arr[]={'a','z','e','b'};
//     int arri[]={1,9,4,3,6,8,2};
    
    

//     bubble(arr,4);

//     cout<<"   "<<endl;
  
//     bubble(arri,7);


//     return 0;
// }



// ----------------------------------------------------
//                    Non type Argument 







// #include <iostream>
// using namespace std;

// template<class T ,int s>
// class Array {
    
//     T a[s];
// public:
//     void getElements() {
//         for (int i = 0; i <s;i++){

//             cin >> a[i];
//         }
//     }
//     void show(){
//         for(int i=0;i<s;i++){
//             cout<<a[i]<<" ";
//         }
//     }
// };

// int main() {
//     Array<int,10> a1;
//     a1.getElements();
//     a1.show();


//     return 0;
// }

// --------------------------------------------------------

// -------  opening & wrting file using constructor--------


// #include <iostream>
// #include<fstream>
// using namespace std;
// int main(){
    
//     ofstream fout("new1.txt");
//     fout<<"hello anshu";
    
//     fout.close();
//     ifstream fin("new1.txt");
//     string st;
//     getline(fin,st);
//     cout<<st;
    
//     return 0;
// }


// ----------------------------------------------------


// #include <iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     string name;
//     int roll;
    
//     ofstream fout("new1.txt");
    
//     cout<<"Enter name: "<<endl;
//     cin>>name;
    
//     cout<<"Enter roll no. "<<endl;
//     cin>>roll;
    
//     fout<<name<<endl;               //writing in seperate lines.
//     fout<<roll<<endl;

//     fout.close();

//     ifstream fin("new1.txt");
//     fin>>name;                                    //reading from each lines;
//     fin>>roll;
//     cout<<"------------"<<endl;
//     cout<<"Name: "<<name<<endl;
//     cout<<"Roll no: "<<roll;

//     return 0;
// }

// ----------------------------------------------------------------

//                                   Odd even 


// #include <iostream>
// #include<fstream>
// using namespace std;

// int main(){

//     ifstream fin("new1.txt");
//     ofstream fodd("odd.txt");
//     ofstream feven("even.txt");
//     int count=1;
//     while(!fin.eof()){
//         if(count%2==0){
//             string str;
//             getline(fin,str);
//             feven<<str<<endl;
//             count++;
            

//         }
//         else{
//             string str;
//             getline(fin,str);
//             fodd<<str<<endl;
//             count++;
             
//         }

//     }


//     return 0;
// }
// --------------------------------------------------------

// #include <iostream>
// #include<fstream>
// using namespace std;

// int main(){
    
//     ifstream fin;
//     fin.open("Countries.txt");
    
//     string str;

//     while(!fin.eof()){
//         getline(fin,str);
//         cout<<str<<endl;
//     }
//     fin.close();
//     cout<<"________________________________"<<endl;

//     fin.open("Cities.txt");
   

//     while(!fin.eof()){
//         getline(fin,str);
//         cout<<str<<endl;
//     }
//     fin.close();
    
    

    
//     return 0;
// }





// ------------------------------------------------------------------

// #include <iostream>
// using namespace std;
// class Matrix{
//     public:
//     int row;
//     int col;
    
//     Matrix(int r,int c){
//         row=r;
//         col=c;
//         int arr[row][col];
//     }

//     void getelement(Matrix &m1){
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cin>>[i][j];
//             }
//         }
//     }

// };

// int main(){
//     Matrix m1;
//     m1.getelement(2,2);
    
//     return 0;
// }


// ------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class Matrix{
//     int rows;
//     int cols;

// public:
//     Matrix(int r,int c){
//         rows=r;
//         cols=c;
//         int arr[rows][cols];
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 cout<<"Enter:"<<endl;
//                 int x;
//                 cin>>x;
//                 arr[i][j]=x;
//             }
//         }
//     }
//     int extract(int p,int q,){
//         return 

//     }
    
// };

// int main(){
//     Matrix m1(2,2);

    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

//     int x=24;
    
//     while((x/2)!=0){
//         if((x/2)%2==0){
//             cout<<0;
//             x=(x/2);
//         }
//         else{
//             cout<<1;
//             x=(x/2);
//         }
//     }
//     return 0;
// }



























// PERMUtATION CoDe;;









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





// -----------------------------------




// #include <iostream>
// #include<string>
// using namespace std;
// class Matrix{
//     int rows,cols;
//     int **mat;
// public:

//     Matrix(int r, int c){
//         rows=r;
//         cols=c;
//         mat=new int* [rows];
//         for(int i=0;i<rows;i++){
//             mat[i]=new int[cols];
//         }
        
//     }
//     void getelements(){
//         cout<<"Enter elements  .   .  . .."<<endl;
        
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin>> mat[i][j];
//         }
//     } 
//     }
   

//     void summat(Matrix m2,Matrix m3){
//         Matrix m4(rows,cols);
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 m4.mat[i][j]=m2.mat[i][j]+m3.mat[i][j];            
//                 }
//         }
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 cout<<m4.mat[i][j]<<" ";            
//                 }cout<<endl;
//         }
        

        
//     }

    
//     void prod(Matrix m5,Matrix m6){
        
//          if(m5.cols!=m6.rows){
            
//              throw(m5.cols,m6.rows);}
         
//         else{
//             Matrix m7(m5.rows,m6.cols);
//             for (int i = 0; i <rows; i++){
//         for (int k = 0 ; k < cols ; k ++){
//             int ele = 0;
//         for (int j = 0; j<cols; j++){
//             ele += m5.mat[i][j] * m6.mat[j][i];
//         }
//         m7.mat[i][k] = ele;
//         }
//     }
//     for (int i = 0; i < 2 ; i ++){
//         for (int j =0; j <2; j++){
//             cout<<m7.mat[i][j]<<" ";
//         }
//         cout<<endl;
//         }
//       }
//     }


// };

// int main(){

//     Matrix m1(2,2);
//     m1.getelements();
    
//     Matrix m2(2,2);
//     m2.getelements();
//     int x;
//     cout<<"Enter your choice: "<<endl;
//     cout<<"1. Sum"<<endl;
//     cout<<"2. Product"<<endl;

//     cin>>x;

//     if(x==1){
//         Matrix m3(2,2);
//         m3.summat(m1,m2);
//     }
//     else if(x==2){
//         Matrix m4(2,2);
//         try 
//         {m4.prod(m1,m2);}
//         catch(int y){
//             cout<<"No. of rows of first matrix is"<<endl<<"NOT equal to no. of cols in second matrix, Which are";
//         }
//     }



//     void Transpose(int arr,int len){

//     }




//     return 0;

// }




// #include <iostream>
// using namespace std;

// int main(){
//     int r=2;
//     int c=3;

//     int arr[r][c];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
        
//     }
// }
// for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
        
//     }
//     cout<<endl;
// }
//     int nrr[c][r];
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             nrr[i][j]=arr[j][i];
//         }
//     }

//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             cout<<nrr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
 
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void sortdsc(int arr[],int s){
//     for(int i=0;i<s;i++){
//         for(int j=0;j<s;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
// }
// }


// int main(){
//     int degseq[]={2,2,2,2};
    
//     int x=0;
//     int c=1;
//     while(x==0){
//         sortdsc(degseq,sizeof(degseq)/sizeof(degseq[0]));
//         int i=c;
//         while(i<=degseq[c-1]){
//         degseq[i]--;
//         if(degseq[i]<0){
//             cout<<"Invalid! degree! sequence!"<<endl;
//             x=1;
//         }
//         c++;
//     }
    
//     }
//     if(x==0){
//             cout<<"Valid degree sequence :)";
//         }
    
//     return 0;
// }


// -----------------------------------------------



// #include <iostream>
// #include<fstream>
// using namespace std;

// int main(int argc,char *argv[]){

//     string x="";
//     if(argc==1){
//         cout<<"Enter string (unable to get from cmd line. . .)"<<endl;
//         cin>>x;
//     }
//     else{
//         for(int i=1;i<argc;i++){
//         x+=argv[i];
//     }

//     }
    
    

//     int mids=x.length()/2;
//     int ck=1;

//     for(int i=0;i<mids;i++){
//         if(x[i]==x[x.length()-i-1]){
//             ck*=1;

//         }
//         else{
//             ck*=0;
//             break;
//         }
//     }



//     if(ck==1){
//         cout<<"Yes,"<<x<<" is a pallindrome"<<endl;
//         ofstream fout("new.txt");
//         fout<<x<<endl;


//     }
//     else if(ck==0){
//         cout<<"NO!!"<<endl;
//     }
    
    
//     return 0;
// }


//--------------------------------------



// #include<iostream>

// using namespace std;
// class Array{
// public: 
//     int size;
//     int *arr;

//     Array(int ar[],int s){
//         size=s;
//         arr=new int[size];
//         for(int i=0;i<s;i++){
//             arr[i]=ar[i];
//         }
//     }
//     Array(Array &a1){
//         size=a1.size;
//         arr=new int[size];
//         for(int i=0;i<a1.size;i++){
//             arr[i]=a1.arr[i];
//         }

//     }

//     Array sum(Array a2,Array a3){
//         size=max(a2.size,a3.size);
//         arr =new int[size];
//         for(int i=0;i<size;i++){
//             arr[i]=a2.arr[i]+a3.arr[i];
//         }

//     }

//     void display(){
        
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){

//     int d1[]={1,1,1,1,1};
//     int d2[]={2,2,2,2,2};
//     int z[]={0,0,0,0,0};
    
//     Array a(d1,5);
//     Array b(d2,5);
//     Array c(z,5);
//     a.display();
//     b.display();
//     c.sum(a,b);
//     c.display();
    

//     return 0;
// }





// ------------------------------------------




// #include <iostream>
// using namespace std;
// class Threepoints{
//     int x, y, z;
// public:
//     void getpoints(){
//         cout<<"Enter x"<<endl;
//         cin>>x;
//         cout<<"Enter y"<<endl;
//         cin>>y;
//         cout<<"Enter z"<<endl;
//         cin>>z;
//     }

//     void display(){
//         cout<<"("<<x<<","<<y<<","<<z<<")";
//     }
//     Threepoints cmpoints(Threepoints p1,Threepoints p2){
//         int chk=1;
//         if(p1.x<=p2.x){
//             if(p1.x==p2.x){
//                 if(p1.y<=p2.y){
//                     if(p1.y==p2.y){
//                         if(p1.z<=p2.z){
//                             if(p1.z==p2.z){
//                                 p1.display();
//                                 cout<<" = ";
//                                 p2.display();
//                             }
//                             else{chk*=0;};
                            
                            
//                         }
//                     }
//                 else{chk*=0;};
//             }

//             }
//             else{chk*=0;};

            
//         }
//         if(chk==1){
//             p1.display();
//             cout<<" > ";
//             p2.display();

//         }
//         else if(chk==0){
//             p1.display();
//             cout<<" < ";
//             p2.display();
//         }
        

        


//     }
// }
// ;
// int main(){

//     Threepoints p,q,r;
//     p.getpoints();
//     q.getpoints();

//     r.cmpoints(p,q);



    
//     return 0;
// }







// ------------------------------------------


// #include <iostream>
// #include<cstring>
// using namespace std;
// string midstring(string x){
//     int s=x.length()/2;
//     if(x.length()%2!=0){
//         return string(1,x[s]);
//     }
//     else{
        
//         return(x.substr(s-1,2));
//     }
// }

// int main(){
//     string e="appxle";
//     cout<<midstring(e);
    

    
//     return 0;
// }




// ----------------------------------------





// #include <iostream>
// #include <iomanip>
// using namespace std;

// int fact(int x){
//         int f=1;
//         for(int i=x;i>0;i--){
//             f*=i;
//         }
//         return f;

//     }
// void printTerm(int n){
//     float sum=0;
//     for(float i=1;i<=n;i++){
//         sum+=i/fact(i);
//     }
//     cout<<sum;


// }

// int main(){

//     printTerm(3);
    
    
//     return 0;
// }




// ------------------------------------


// #include <iostream>
// using namespace std;
// const int m=3;
// const int n=3;

// void setdata(int arr[m][n]){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<"Enter "<<i<<j<<endl;
//             cin>>arr[i][j];
//         }
//     }
// };
// void getdata(int arr[m][n]){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// };

// void getavg(int arr[m][n],int m, int n){
//     int sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//     }
//     int avg=sum/(m*n);
//     cout<<"Average is {"<<avg<<"}"<<endl;

// };

// void getmax(int arr[m][n],int m,int n){
//     for(int i=0;i<m;i++){
//         int max=0;
//         for(int j=0;j<n;j++){
//             if(arr[j][i]>=max){
//                 max=arr[j][i];
                
//             }
//             else{
//                 continue;
//             }
            

//         }
//         cout<<"Max of "<<i<<"th column :"<<max<<endl;
        
//     }
// };
// int main(){
//     int arr[m][n];

//     setdata(arr);
//     getdata(arr);
//     getavg(arr,m,n);
//     getmax(arr,m,n);

    
//     return 0;
// }



// ---------------------------


// #include <iostream>
// #include <fstream>

// using namespace std;


// int main(){
//   ofstream fout("new.txt",ios::ate);
//   fout.seekp(1);
//   fout<<"Helo";
//   fout.close();


//   return 0;
// }