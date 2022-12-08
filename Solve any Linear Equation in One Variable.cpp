 #include <bits/stdc++.h>
    using namespace std;
    void solve(float a, float b, float c, float d)
    {
        if(a==c && b==d)
            cout<<"Infinite Solutions"<<endl;
        else if(a==c)
            cout<<"Wrong Equation: No Solution"<<endl;
        else
        {
            float X = (d-b)/(a-c);
            cout<<"Solution is X = "<<X<<endl;
        }
    }
    int main()
    {
        float a, b, c, d;
        cout<<"For a linear equation in one variable of the form aX + b = cX + d"<<endl;
 
        cout<<"Enter the value of a : ";
        cin>>a;
 
        cout<<"Enter the value of b : ";
        cin>>b;
 
        cout<<"Enter the value of c : ";
        cin>>c;
 
        cout<<"Enter the value of d : ";
        cin>>d;
 
        solve(a, b, c, d);
    }
