#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter "
             << " No. " << i + 1 << endl;
        cin >> arr[i];
    }
    
    
    
    int temp;
    
    for (int i=0;i<5;i++){
        bool max = true;
        for(int j=0;j<5;j++){
            if(arr[i]>=arr[j]){
                max*=true;
            }
            else{
                max*=false;
            }
        }
        if(max==true){
            cout<<arr[i]<<" is greatest!"<<endl;
        }

    }

    return 0;
}