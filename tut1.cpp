#include<iostream>
using namespace std;

void pattern1(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
     for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i ;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}   
void pattern7(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
     for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern9(int n){
     for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
         for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=1; i<=2*n-1;i++){
        int stars =i;
        if (i>n){
            stars = 2*n-i;
        }
        for(int j=1; j<=stars;j++){
            cout<<"*";
        }
        cout<< endl;

    }
}
void pattern11(int n){
    for(int i=0; i<=n;i++){
        int start;
        //0,2,4 pr 1 se start ho rha h
        if(i%2==0){
            start=1;
        }
        //bacha 1,3,5 ye sb pe 0 se strt h
        else{
            start=0;
        }
        for(int j=0; j<=i;j++){ //ye loop normal jo triangle bnaye the in pattern2 jaisa same h
            cout<<start;
            start=1-start;   //yaha pe start bdl rha h 1 --> 0 then 0 --> 1
        }
        cout<< endl;
    }
}
    void pattern12(int n){
        int space= 2*(n-1);
        for(int i=1;i<=n; i++){

            //numbers
            for(int j=1; j<=i; j++){
                cout<<j;
            }

            //space
            for(int j=1; j<=space; j++){
                cout<< " ";
            }

            //numbers
            for(int j=i; j>=1; j--){
                cout<< j;
            }
            cout<< endl;
            space-=2;
        }
    }
    void pattern13(int n){
        int c=1;
        for(int i=0; i<=n; i++){
            for(int j=0; j<i; j++){
            cout<<c<<" ";
            c++;
            }
            cout<<endl;
        }
    }
    void pattern14(int n){
        for(int i=0;i<n; i++){
            for(char ch='A'; ch<'A'+i; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
    void pattern15(int n){
        for(int i=0;i<n; i++){
            for(char ch='A'; ch<'A'+n-i; ch++){
                cout<<ch;
            }
            cout<<endl;
        }
    }
    void pattern16(int n){
        char ar='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=i; j++){
                cout<<ar;
            }
            cout<<endl;
            ar++;
        }
    }
    void pattern17(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }
             else{
                ch--;
            }
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0; i<n; i++){
        for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++){
        cout<<ch;
    }
    cout<<endl;
    }
}
void pattern19(int n){
     for(int i=0; i<n; i++){
        //star
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        //space
        for(int j=1; j<=2*i+1; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
         for(int i=0; i<n; i++){
        //star
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        //space
        for(int j=1; j<=2*n-(2*i+1); j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
        int n;
        cout<<"Enter the no of lines u wnt to print:\n";
        cin>>n;
       cout<<"\nPattern 1\n";
        pattern1(n);
        cout<<"\nPattern 2\n";
        pattern2(n);
       cout<<"\nPattern 3\n";
        pattern3(n);
        cout<<"\nPattern 4\n";
        pattern4(n);
        cout<<"\nPattern 5\n";
        pattern5(n);
        cout<<"\nPattern 6\n";
        pattern6(n);
        cout<<"\nPattern 7\n";
        pattern7(n);
        cout<<"\nPattern 8\n";
        pattern8(n);
        cout<<"\nPattern 9\n";
        pattern9(n);
        cout<<"\nPattern 10\n";
        pattern10(n);
        cout<<"\nPattern 11\n";
        pattern11(n);
        cout<<"\nPattern 12\n";
        pattern12(n);
        cout<<"\nPattern 13\n";
        pattern13(n);
        cout<<"\nPattern 14\n";
        pattern14(n);
        cout<<"\nPattern 15\n";
        pattern15(n);
        cout<<"\nPattern 16\n";
        pattern16(n);
        cout<<"\nPattern 17\n";
        pattern17(n);
        cout<<"\nPattern 18\n";
        pattern18(n);
        cout<<"\nPattern 19\n";
        pattern19(n);
    }
