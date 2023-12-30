// Question 1:
//          Write a program to compute the sum of the first n terms of the following series:
//          𝑆 = 1 −1/2^2 + 1/3^3 − ⋯ 1/𝑛^𝑛
//          The number of terms n is to be taken from the user through the command line. If the
//          command line argument is not found then prompt the user to enter the value of n.
// ---------------------------------------------------------------

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main( int argc, char * argv[])
// {
//     int numberOfTerms;
//     if (argc == 1){
//         cout<<"Command line input not passed!"<<endl<<"Please Enter the number of terms ";
//         cin>>numberOfTerms;
//     }
//     else
//     {
//         numberOfTerms = stoi(argv[1]);
//     }
    
//     cout<<"Entered number of terms : "<<numberOfTerms<<endl;
//     float sumOfSeries = 0;
//     for (int i = 1 ; i <= numberOfTerms ; i++)
//     {
//         sumOfSeries += pow(-1,i+1)/pow(i,i);
//     }
//     cout<<"Sum of the series till "<<numberOfTerms<<" terms is "<<sumOfSeries;

//     return 0;

// }


// // --------------------------------------------------------------------

//  Question 2:
// Write a program to remove the duplicates from an array
// ---------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int occur(int arr1[], int len, int x){
// 	int count = 0;
//     for (int i = 0; i < len; i++){
// 		if (arr1[i] == x){
// 			count++;
// 		}
//     }
// 	return count;
// };
// int main(){
//     int s;
//     cout<<"Enter size: "<<endl;
//     cin>>s;
//     cout<<endl;
//     int arr[s];
//     for(int i=0;i<s;i++){
//         cin>>arr[i];
//     }
//     int narray[s];
//     for(int i=0;i<s;i++){
//         narray[i]=0;
//     }
//     for(int i=0;i<s;i++){
//         if(occur(narray,s,arr[i])==0){
//             narray[i]=arr[i];
//         }
//         else{
//             continue;

//         }
//     }
//     for(int i=0;i<s;i++){
//         cout<<narray[i]<<" ";
//     }
//     return 0;
// }
// ---------------------------------------------------------------------

//  Question 3:
//  3. Write a program that prints a table indicating the number of
//     occurrences of each alphabet in the text entered as command line arguments.
// ---------------------------------------------------------------------
// #include <iostream>
// #include <string>
// using namespace std;
// int noOfChar(string str, char ch)
// {
//     int count = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (ch == str[i])
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int main(int argc, char *argv[])
// {
    
//     string text = argv[1];
//     string printedChar;
//     cout<<"String : "<<text<<endl;
//     cout<<"| char |occurance |"<<endl;
//     for (int i = 0; i < text.length(); i++)
//     {
//         printedChar += text[i];
        
//         if(noOfChar(printedChar, text[i]) ==1 )
//         {
//             cout<<"|  "<<text[i]<<"   |   "<<noOfChar(text, text[i])<<"      |"<<endl;
//         } 
        
//     }

//     return 0;
// }
// /*
// Terminal output

// PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q3> ./Q3.exe "apple"                                                                       
// String : apple
// | char |occurance |
// |  a   |   1      |
// |  p   |   2      |
// |  l   |   1      |
// |  e   |   1      |
// PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q3>

// */






// #include <iostream>
// using namespace std;
// int count;

// void remove(string &x,char c){
//     for(int i=0;i<x.length();i++){
//         if(x[i]==c){
//             x[i]=' ';
//         }
//     }
// };

// int main(){
//     string x;
//     int count;
//     cout<<"Enter a string: "<<endl;
//     cin>>x;

//     for(int i=0;i<x.length();i++){
        
//         if(x[i]==' '){
//             continue;
//         }
//         count=0;
//         for(int j=0;j<x.length();j++){
//             if(x[i]==x[j]){
//                 count++;
//             }
//         }
//         cout<<"+----+----+"<<endl;
//         cout<<"| "<<x[i]<<"  | "<<count<<" "<<" |"<<endl;
//     remove(x,x[i]);
//     }
//     cout<<"+----+----+"<<endl;
// }













// ---------------------------------------------------------------------

//  Question 4:

// a.	Show address of each character in string
// b.	Concatenate two strings.
// c.	Compare two strings
// d.	Calculate length of the string (use pointers)
// e.	Convert all lowercase characters to uppercase
// f.	Reverse the string
// g.	Insert a string in another string at a user at specified position

// ---------------------------------------------------------------------
// #include<iostream>
// #include<cstring>
// using namespace std;

// void indices(){                          
//         string ind;
//         cout<<"Enter the string: "<<endl;
//         cin>>ind;
        
//         for(int i=0;i<ind.length();i++){
//             cout<<ind[i]<<"'s address  "<<(void *)&ind[i];
//             cout<<endl;
//         }

//     }
    

// void conc(){
//     string x,y,z;
//     cout<<"Enter str1: "<<endl;
//     cin>>x;
//     cout<<"Enter str2: "<<endl;
//     cin>>y;

//     z=x+" "+y;
//     cout<<z;
// }

// void reverse(){
//     string x;
//     cout<<"Enter a string: "<<endl;
//     cin>>x;
//     int temp[x.length()];

//     for(int i=x.length()-1;i>=0;i--){
//         cout<<x[i];
//         }
// }

// void insrt(){
//     string x,y,final;
//     int p;
//     cout<<"Enter the main string: "<<endl;
//     cin>>x;
//     cout<<"Enter string (to be inserted. . .)"<<endl;
//     cin>>y;
//     cout<<"To be inserted at: "<<endl;
//     cin>>p;

//     for(int i=0;i<x.length();i++){
//         if(i==p){
//             final+=y;
//         }
//         final+=x[i];

//     }
//     cout<<final;

// }

// void loup(){
//     string x,final;
//     cout<<"Enter the string: "<<endl;
//     cin>>x;

//     for(int i=0;i<x.length();i++){
        
//         if(islower(x[i])){
//             final+=toupper(x[i]);
//         }
//         else if(isupper(x[i])){
//             final+=toupper(x[i]);
//         }
        
//     }
//     cout<<final;
// }
// // ----------------------------------------------------------


// void compare(){
//     string x,y;
//     cout<<"Enter the string: "<<endl;
//     cin>>x;
//     cout<<"Enter second string: "<<endl;
//     cin>>y;

//     for(int i=0;i<x.length();i++){
//         if(x[i]!=y[i]){

//         if(x[i]>y[i]){
//             cout<<1;
//             break;
//         }
//         else if(x[i]<y[i]){
//             cout<<-1;
//             break;
//         }}
//         else{
//             cout<<"0";
//             break;
//         }
//     }

// }
// // // ----------------------------------------------------------

// void countptr(){
//         string x;
//         cout<<"Enter the string: "<<endl;
//         cin.ignore();
//         getline(cin,x);

//         char *sptr;
//         sptr=&x[0];

//         int count=0;

//         int i=0;
//         while(*sptr!='\0'){
//                 sptr++;
//                 count++;

//         }
//         cout<<"Length of "<<x<<" is "<<count;

// }

// int main(){

//     cout<<"+---------------------------------------------------------+"<<endl;
//     cout<<"|                                                         |"<<endl;
//     cout<<"|1.Show address of each char.                             |"<<endl;
//     cout<<"|2.Concatenate two strings                                |"<<endl;
//     cout<<"|3.compare two strings                                    |"<<endl;
//     cout<<"|4.calculate length of string (using pointer)             |"<<endl;
//     cout<<"|5.convert lcase to ucase                                 |"<<endl;
//     cout<<"|6.reverse the string                                     |"<<endl;
//     cout<<"|7.insrt a str in another str at a user defined position  |"<<endl;
//     cout<<"+---------------------------------------------------------+"<<endl;

//     int c;
//     cout<<"Enter choice .  . .."<<endl;
//     cin>>c;

//     if(c==1){
//         indices();
//     }
//     else if(c==2){
//         conc();

//     }
//     else if(c==3){
//         compare();

//     }
//     else if(c==4){
//         countptr();

//     }
//     else if(c==5){
//         loup();

//     }
//     else if(c==6){
//         reverse();

//     }
//     else if(c==7){
//         insrt();

//     }

// }



















// ---------------------------------------------------------------------

//  Question 5:
// 5. Write a program to merge two ordered arrays to get a single ordered array.
// ---------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void sorter(int arr[],int len){
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             if(arr[j]>arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }


// int main(){

//         int arr1[]={5,10,15,20};
//         int arr2[]={3,6,9,12,15};

//         int l1=(sizeof(arr1)/sizeof(arr1[0]));
//         int l2=(sizeof(arr2)/sizeof(arr2[0]));

//         int comblen=l1+l2;
//         int arrfinal[comblen];

//         for(int i=0;i<l1;i++){
//                 arrfinal[i]=arr1[i];
//         }
//         for(int i=0;i<l2;i++){
//                 arrfinal[i+l1]=arr2[i];
//         }

        
//         sorter(arrfinal,comblen);
//         cout<<"The combined sorted array: "<<endl;
//         for (int i = 0; i < comblen; i++){
//                 cout<<arrfinal[i]<<" ";
//         }

//         return 0;
// }

// *************************************************************
// Question 6:

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[6]={1,3,5,5,4,9},x;
//     cout<<"Enter the number you want to search :"<<endl;
//     cin>>x;

//     for(int i=0;i<6;i++){
//         if(arr[i]==x){
//             cout<<"Number found at index: "<<i;
//         }
//     }
 
//     return 0;
// }

//  Question 7:
// 7. Write a program to calculate GCD of two numbers.
// ---------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// void factor(vector<int> &vx, int x){
//     for (int i = 1; i <= x; i++){
//         if (x % i == 0){
//             vx.push_back(i);}
//         else{
//             continue;}
//     }
// }

// int main()
// {
//     int x, y;
//     cout << "Enter both the numbers: " << endl;
//     cin >> x >> y;
//     vector<int> vx,vy;

//     factor(vx, x);
//     factor(vy, y);

//     for (int i = 0; i < vx.size(); i++){
//         cout << vx[i] <<" ";}

//     cout << endl
//          << "----------------------" << endl;

//     for (int i = 0; i < vy.size(); i++){
//         cout << vy[i] <<" ";}

//     if(vx.size()>vy.size()){
//         for(int i=vy.size()-1;i>=0;i--){
//             for(int j=0;j<vx.size();j++){
//                 if(vy[i]==vx[j]){
//                     cout<<endl<<"GCD: "<<vy[i];
//                     return 0;}}}}
//     if(vy.size()>vx.size()){
//         for(int i=vx.size()-1;i>=0;i--){
//             for(int j=0;j<vy.size();j++){
//                 if(vx[i]==vy[j]){
//                     cout<<endl<<"GCD: "<<vx[i];
//                     return 0;}}}}}

// -------------------It's alternative (Easy one)-------------------------------
// #include <iostream>
// using namespace std;

// int main(){

//     int p= 21;
//     int q = 8;

//     while(q%p != 0)
//     {   int r=q%p;
//         q = p;
//         p = r;

//     }
//     cout<<p;

// return 0;
    
   
// }
    


// ---------------------------------------------------------------------------


       


      




// =======================================================================
// //Q9 ----------------matrix class-------------------------------



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
//            }
        
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
//         for (int j = 0; j<m5.cols; j++){
//             ele += m5.mat[i][j] * m6.mat[j][k];
//         }
//         m7.mat[i][k] = ele;
//         }
//     }
//     for (int i = 0; i < m5.rows ; i ++){
//         for (int j =0; j <m6.cols; j++){
//             cout<<m7.mat[i][j]<<" ";
//         }
//         cout<<endl;
//         }
//       }
//     }

//     void transpose(Matrix m7){
//         Matrix m8(m7.cols,m7.rows);
//         for(int i=0;i<cols;i++){
//             for(int j=0;j<rows;j++){
//                 m8.mat[i][j]=m7.mat[j][i];
//             }
//         }

//     for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 cout<<m7.mat[i][j]<<" ";
//             }
//             cout<<endl;
//     }
//         for(int i=0;i<cols;i++){
//             for(int j=0;j<rows;j++){
//                 cout<<m8.mat[i][j]<<" ";
//             }
//             cout<<endl;
//     }


//     }
    

// };

// int main(){

    
//     cout<<"Enter your choice: "<<endl;
//     cout<<"1. Sum"<<endl;
//     cout<<"2. Product"<<endl;
//     cout<<"3. Transpose"<<endl;
    
//     int x;
//     cin>>x;

//     if(x==1){
//         int r,c;
//         cout<<"Enter rows and cols"<<endl;
//         cin>>r>>c;


//         Matrix m1(r,c);
//         m1.getelements();

//         Matrix m2(r,c);
//         m2.getelements();

//         Matrix m3(r,c);
      

//         m3.summat(m1,m2);
//     }

//     else if(x==2){
//         int r1,c1;
//         cout<<"Enter rows and cols"<<endl;
//         cin>>r1>>c1;


//         Matrix m1(r1,c1);
//         m1.getelements();

//         int r2,c2;
//         cout<<"Enter rows and cols"<<endl;
//         cin>>r2>>c2;

//         Matrix m2(r2,c2);
//         m2.getelements();

//         try{if(c1==r2){
//             Matrix m3(r1,c2);
//             m3.prod(m1,m2);
//         }
//         else{
//             throw invalid_argument("c1 and r2 not matches!");
            

//         }}catch(invalid_argument){
//             cout<<"c1 and r2 not matches!";
//         }
      

        
//     }
//     else if(x==3){
//         int r,c;
//         cout<<"Enter rows and cols"<<endl;
//         cin>>r>>c;


//         Matrix m1(r,c);
//         m1.getelements();


//         Matrix m3(r,c);
   

//         m3.transpose(m1);



//     }


//     return 0;
// }

// #include<iostream>
// #include <vector>
//     using namespace std;
// class Matrix
// {
//     int row, col;
//     vector<vector<int>> arr;

// public:
//     Matrix() {}
//     Matrix(int noOfRow, int noOfCol) : row(noOfRow), col(noOfCol),
//                                        arr(noOfRow, vector<int>(noOfCol, 0)) {}
//     void inputMatrix()
//     {
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 int element;
//                 cout << "Enter element at (" << i << "," << j << ")position : "; 
                        
//                                    cin >>
//                     element;
//                 arr[i][j] = element;
//             }
//         }
//     }
//     void displayMatrix() const
//     {
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     int getElement(int i, int j) const
//     {
//         return arr[i][j];
//     }
//     void setElement(int i, int j, int ele)
//     {
//         arr[i][j] = ele;
//     }
//     friend Matrix sum(const Matrix &, const Matrix &);
//     friend Matrix product(const Matrix &, const Matrix &);
//     friend Matrix transpose(const Matrix &);
// };
// Matrix sum(const Matrix &A, const Matrix &B)
// {
//     int row = A.row;
//     int col = A.col;
//     Matrix C(row, col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             C.setElement(i, j, A.getElement(i, j) + B.getElement(i, j));
//         }
//     }
//     return C;
// }
// Matrix product(const Matrix &A, const Matrix &B)
// {
//     int rowA = A.row;
//     int colA = A.col;
//     int rowB = B.row;
//     int colB = B.col;
//     if (colA != rowB)
//     {
//  throw "Matrix dimensions are not compatible for multiplication !";
//     }
//     Matrix C(rowA, colB);
//     for (int i = 0; i < rowA; i++)
//     {
//         for (int j = 0; j < colB; j++)
//         {
//             int sum = 0;
//             for (int k = 0; k < colA; k++)
//             {
//                 sum += A.getElement(i, k) * B.getElement(k, j);
//             }
//             C.setElement(i, j, sum);
//         }
//     }
//     return C;
// }
// Matrix transpose(const Matrix &A)
// {
//     int row = A.row;
//     int col = A.col;
//     Matrix C(col, row);
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             C.setElement(i, j, A.getElement(j, i));
//         }
//     }
//     return C;
// }
// int main()
// {
//     int rows, cols;
//     cout << "Enter the number of rows in the matrices: ";
//     cin >> rows;
//     cout << "Enter the number of columns in the matrices: ";
//     cin >> cols;
//     Matrix A(rows, cols);
//     Matrix B(rows, cols);
//     cout << "Enter the elements of the first matrix:" << endl;
//     A.inputMatrix();
//     cout << "Enter the elements of the second matrix:" << endl;
//     B.inputMatrix();
//     int choice;
//     cout << "Select an operation:" << endl;
//     cout << "1. Sum" << endl;
//     cout << "2. Product" << endl;
//     cout << "3. Transpose" << endl;
//     cout << "Enter your choice (1-3): ";
//     cin >> choice;
//     Matrix result;
//     try
//     {
//         switch (choice)
//         {
//         case 1:
//             result = sum(A, B);
//             cout << "Sum of the matrices:" << endl;
//             result.displayMatrix();
//             break;
//         case 2:
//             result = product(A, B);
//             cout << "Product of the matrices:" << endl;
//             result.displayMatrix();
//             break;
//         case 3:
//             result = transpose(A);
//             cout << "Transpose of the matrix:" << endl;
//             result.displayMatrix();
//             break;
//         default:
//             cout << "Invalid choice!" << endl;
//         }
//     }
//     catch (const char *errorMessage)
//     {
//         cout << "Error: " << errorMessage << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Person{
// protected:
//     string name;
// public:
//     Person(string n){
//         name=n;

//     }
//     virtual void display(){
        
//     }

// };
// class Students:public Person{
//     public:
//         string course;
//         int marks,year;

//         Students(string name,string c ,int m,int y):Person(name){
//             course=c;
//             marks=m;
//             year=y;

//         }

//         void display(){
//         cout<<"name :"<<name<<endl<<"course: " <<course<<endl<<"having marks "<<marks<<endl<<"and year "<<year<<endl;
//     }

// };
// class Employee:public Person{
//     public:
    
//         string dept;
//         int salary;

//         Employee(string na,string dp,int s):Person(na){
//             dept=dp;
//             salary=s;


//         }

//     void display(){
//         cout<<"name: "<<name<<endl<<"department :"<<dept<<endl<<"having salary: "<<salary<<endl;
//     }
// };

// int main(){

//     Person *p;
//     Employee e("rakesh","cs",50000);
//     p=&e;
//     p->display();
    
//     return 0;
// }


// ---------------------------------------------------

/*
10.	Create a Triangle class.  Add exception handling 
statements to ensure the following conditions: all 
sides are greater than 0 and sum of any two sides is greater than the 
third side.   The class should also have overloaded functions for calculating 
the area of a right angled triangle as well as using Heron's formula to calculate 
the area of any type of triangle.
*/
// #include <iostream>
// #include <cmath>
// #include <cstring>
// using namespace std;
// class Error {
//     int err_code;
//     string err_desc;

// public:
//     Error(int c, string errMsg)
//     {
//         err_code = c;
//         err_desc = errMsg;
//     }

//     void err_display(void)
//     {
//         cout << "Error Code: " << err_code << endl << "Error Description: " << err_desc << endl;
//     }
// };

// class Triangle
// {   
//     float side1, side2, side3;
//     public :
//     Triangle(){} 
//     Triangle(float a, float b, float c)
//     {
//         try
//         {
//             if(a<= 0 || b <=0 || c <= 0)
//             {
//                 throw Error(001,"Sides cannot be negative or 0!");
//             }
//             if(a >= b + c || b >= a + c || c >= a + b)
//             {
//                 throw Error(002,"Either of side exceeds the sum of other two sides!");
//             }
//             side1 = a;
//             side2 = b;
//             side3 = c;

//         }
//         catch (Error e)
//         {
//             e.err_display();
//         }


//     }
//     float area() 
//     {
//         float s = (side1 + side2 + side3)/2;
//         float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
//         return area;
//     }
//     float area(float base, float height)
//     {
//         try
//         {
//              float area = (base * height)/2;
//              if( area == 0)
//              {
//                 throw Error(003, "Invalid Base or Height of Right triangle");
//              }
//              return area;

//         }
//         catch( Error e)
//         {
//             e.err_display();
//         }
//     }
// };




// int main()
// {
//     Triangle DEF(0,3,4);
//     Triangle ABC(3, 4, 5);
//     float area = ABC.area();
//     cout<<"Area of general Trianle ABC is "<< area<<endl;
//     Triangle PQR;
//     float rArea = PQR.area(4,6);
//     cout<<"Area of Right angled Trianle ABC is "<< rArea<<endl;


// }





// /Q11

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char x[100] = "My name is Kirti sain";
    ofstream file1("1stfile.txt");
    file1 << x;
    char y[100];

    int i;
    for (i = 0; x[i] != '\0'; i++)
    {
        y[i] = x[i];
    }
    y[i] = '\0';
    cout << y << endl;
    int j = 0;
    for (int i = 0; y[i] != '\0'; i++)
    {
        if (y[i] != ' ')
        {
            y[j] = y[i];
            j++;
        }
    }
    y[j] = '\0';
    cout << y;
    ofstream file2("2ndfile.txt");
    file2 << y;
    return 0;
}
    // #include <iostream>
    // #include <fstream>

    // using namespace std;

    // int main(){

    //     ifstream fin("new.txt");
    //     ofstream fout("new1.txt");
    //     char x;
    //     while(fin>>x){
    //         if(x==' '){
    //             continue;
    //         }
    //         else if(fin.eof()){
    //             break;
    //         }
    //         fout<<x;
    //     }

    //     return 0;
    // }

    // #include <iostream>
    // #include <cstring>
    // using namespace std;
    // class Person
    // {
    // protected:
    //     string name;

    // public:
    //     void get_name(string n)
    //     {
    //         name = n;
    //     }
    //     virtual void display()
    //     {
    //         cout << "Kirti sain" << endl;
    //     }
    // };
    // class Student : public Person
    // {
    // private:
    //     string course;
    //     float marks;
    //     int year;

    // public:
    //     void get_data(string c, float m, int y)
    //     {
    //         course = c;
    //         marks = m;
    //         year = y;
    //     }
    //     void display()
    //     {
    //         cout << "Course :" << course << endl;
    //         cout << "Marks :" << marks << endl;
    //         cout << "Year :" << year << endl;
    //     }
    // };
    // class Employee : public Person
    // {
    //     string department;
    //     int salary;

    // public:
    //     void get_data2(string d, int s)
    //     {
    //         department = d;
    //         salary = s;
    //     }
    //     void display()
    //     {
    //         cout << "Department :" << department << endl;
    //         cout << "Salary :" << salary << endl;
    //     }
    // };
    // int main()
    // {
    //     Person *p1;
    //     Student s1;
    //     Employee emp;
    //     p1 = &s1;
    //     s1.get_data("CS", 90.2, 23);
    //     p1->display();
    //     cout << endl;
    //     p1 = &emp;
    //     emp.get_data2("CS", 500000);
    //     p1->display();
    //     return 0;
    // }