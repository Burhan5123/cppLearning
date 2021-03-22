#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a=8;
    int b=11;
    int n;
    for(n=a;n<=b;n++){
        if(1<=n && n<=9){
            if(n==1){
                cout<<"one";
                
            } else if(n==2){
                cout<<"two";
                }else if(n==3){
                cout<<"three";
            }  else if(n==4){
                cout<<"four"<<endl;
            }else if(n==5){
                cout<<"five"<<endl;
            }else if(n==6){
                cout<<"six"<<endl;
            }else if(n==7){
                cout<<"seven"<<endl;
             }   else if(n==8){
                cout<<"eight"<<endl;
            }else if(n==8){
                cout<<"eight"<<endl;
              }  else if(n==9){
                  cout<<"nine"<<endl;
                  
              } else if(n==10){
                  cout<<"ten"<<endl;
                  
              }else if(n==11){
                  cout<<"eleven";
              }
                cout<<endl;
        }
        else if(n>9 && n%2==0){
            cout<<"even";
            
            
        }else if(n>9 && n%2!=0){
            cout<<"odd";
        }
        cout<<endl;
            
    }   
        
    
    return 0;
  
}

