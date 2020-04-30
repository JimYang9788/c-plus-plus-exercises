
#include <iostream>
using namespace std;

void display_results(double x[100], int npts);

int main()
{
    double x[100];
    int npts(0); // number of data entries inputted by the user
    
    cout << "Enter data separated by spaces: ";
    
    // Write your code between the two lines
    //-------------------------------------------
    
 
    for (int j=0;j<100;j++){
      cin>>x[j];
      npts++;
      if(x[j]==-99){
        npts--;
        break;
      }
    }

    for (int i = 0; i < npts; i++){
      cout << x[i] << endl;
    }


    
    for(int i=0;i<npts;i++){
      if (i%2==1){
        if(x[i]<0){
          x[i]=-1;
        }
        else{
          x[i]=1;
        }
      }
    }

    //--------------------------------------------
    
    display_results(x, npts);
        
    return 0;
}



// DO NOT change this file
#include <iostream>
using namespace std;

void display_results(double x[100], int npts)
{
    int i;
    
    cout << "After processing, the data is: ";
    for (i = 0;i < npts; i++)
        cout << x[i] << " ";
    cout << endl;
}