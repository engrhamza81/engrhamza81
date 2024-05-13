// // // // // // // // //Engr.Hamza Ahmad
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // class hamza{
// // // // // // // //     private:
// // // // // // // //     int a; 
// // // // // // // //     string name;
// // // // // // // //     char fvrt_char;
// // // // // // // //     friend class yasir;

// // // // // // // // };
// // // // // // // // class yasir{
// // // // // // // //     public:
// // // // // // // //     void data(hamza &h, int ha,string hs,char hc){
// // // // // // // //         h.a=ha;
// // // // // // // //         h.name=hs;
// // // // // // // //         h.fvrt_char=hc;
// // // // // // // //     }
// // // // // // // //     void display(hamza hd)
// // // // // // // //     {
// // // // // // // //         cout<<hd.a<<endl;
// // // // // // // //         cout<<hd.name<<endl;
// // // // // // // //         cout<<hd.fvrt_char<<endl;
// // // // // // // //     }

// // // // // // // // };

// // // // // // // // int main(){
// // // // // // // //     hamza h;
// // // // // // // //     yasir y;
// // // // // // // //     y.data(h,20,"khan",'l');
// // // // // // // //     y.display(h);


// // // // // // // // return 0;
// // // // // // // // }
// // // // // // // //Engr.Hamza Ahmad
// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // class mydistance{
// // // // // // //     public:
// // // // // // //     double inch;
// // // // // // //     double feet;
// // // // // // //     void getdist(double i,double f)
// // // // // // //     {
// // // // // // //         inch=i;
// // // // // // //         feet=f;

// // // // // // //     }
// // // // // // //     double add_dist()
// // // // // // //     {
// // // // // // //         return inch+feet;
// // // // // // //     }
// // // // // // //     double sub_dist()
// // // // // // //     {
// // // // // // //         return feet-inch;
// // // // // // //     }
// // // // // // //     void show()
// // // // // // //     {
// // // // // // //         cout<<"Original inch="<<inch<<endl;
// // // // // // //         cout<<"Original feet="<<feet<<endl;
// // // // // // //     }
// // // // // // // };


// // // // // // // int main(){
// // // // // // //     mydistance d1;
// // // // // // //     double userinch;
// // // // // // //     double intionalinch;
// // // // // // //     double userfeet;
// // // // // // //     cout<<"Enter inches value :";
// // // // // // //     cin>>userinch;
// // // // // // //     cout<<"Enter feet value :";
// // // // // // //     cin>>userfeet;
// // // // // // //     if(userinch>0)
// // // // // // //     {
// // // // // // //        intionalinch=userinch/12;

// // // // // // //     }
// // // // // // //    d1.getdist(userfeet,intionalinch);
// // // // // // //     cout<<"The result of subbtrication is ="<<d1.sub_dist()<<endl;
// // // // // // //     cout<<"The result of Addition is ="<<d1.add_dist()<<endl;
// // // // // // //     d1.show();



// // // // // // // return 0;
// // // // // // // }
// // // // // // //Engr.Hamza Ahmad
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // class books{
// // // // // //     public:
// // // // // //     string book_name;
// // // // // //     static int count;
// // // // // //     books()
// // // // // //     {
// // // // // //         count++;
// // // // // //     }
// // // // // //    void display();
// // // // // // };
// // // // // // int books::count=0;
// // // // // //  void books::display()
// // // // // // {
// // // // // //     cout<<"The number of books ="<<count<<endl;
// // // // // // }


// // // // // // int main(){
// // // // // //     books b1,b2;
// // // // // //     b1.book_name="hamza";
// // // // // //     b2.book_name="ali";
// // // // // //     b1.display();



// // // // // // return 0;
// // // // // // }
// // // // // //Engr.Hamza Ahmad
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // class test{
// // // // //     public:
// // // // //     const int a;
// // // // //     test(int x):a(x)
// // // // //     {
// // // // //         cout<<"\nthe value of a is set ="<<a<<endl;
// // // // //     }
// // // // // };
// // // // // int main(){
// // // // //     test T(20);
// // // // //     test T2(10);



// // // // // return 0;
// // // // // }
// // // // //Engr.Hamza Ahmad
// // // // #include<iostream>
// // // // using namespace std;
// // // // class complex{
// // // //     private:
// // // //     int real;
// // // //     int imagnery;
// // // //     public:
// // // //     complex(int r=0, int i=0):real(r),imagnery(i) {}
// // // //     complex operator + (complex obj)
// // // //     {
// // // //         complex result;
// // // //         result.imagnery=obj.imagnery+imagnery;
// // // //         result.real=obj.real+real;
// // // //         return result;
// // // //     }
// // // //     void display()
// // // //     {
// // // //         cout<<"The addition is Equal to :"<<real<<" + "<<imagnery<<"i"<<endl;
// // // //     }
// // // // };
// // // // int main(){
// // // //     complex c1(2,3);
// // // //     complex c2(4,5);
// // // //     complex c3=c1+c2;
// // // //     c3.display();
// // // //     return 0;
// // // // }
// // // //Engr.Hamza Ahmad
// // // // #include <iostream>
// // // // using namespace std;

// // // // class hamza {
// // // // public:
// // // //     int size;
// // // //     string* h;

// // // //     hamza(string s[], int n) {
// // // //         size = n;
// // // //         h = new string[size];
// // // //         for (int i = 0; i < size; i++) {
// // // //             h[i] = s[i];
// // // //         }
// // // //     }

// // // //     void display() {
// // // //         for (int i = 0; i < size; i++) {
// // // //             cout << "The given string is equal to: " << h[i] << "    ";
// // // //         }
// // // //     }

// // // //     ~hamza() {
// // // //         delete[] h; // Clean up dynamically allocated memory
// // // //     }
// // // // };

// // // // int main() {
// // // //     string myStrings[] = {"H", "HAHA"};
// // // //     hamza a(myStrings, 2);
// // // //     a.display();

// // // //     return 0;
// // // // }
// // // //Engr.Hamza Ahmad
// // // #include<iostream>
// // // using namespace std;

// // // class time{
// // //     public:
// // //     int hour,mint,sec;
// // //     time(int h,int m,int s):hour(h),mint(m),sec(s) {}
// // //     int operator++ (time &t)
// // //     {

// // //     }
// // // };
// // // int main(){


// // // return 0;
// // // }
// // //Engr.Hamza Ahmad
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     double x=1.22;
// //     int y=(int)x+8;
// //     cout<<y<<endl;
// //     return 0;
// // }

// //Engr.Hamza Ahmad
// // #include<iostream>
// // using namespace std;
// // class a{
// //     public:
// //     int x;
// // };
// // class b{
// //     public:
// //     int p,q;
// //     b(int k,int l)
// //     {
// //         q=l;
// //         p=k;
// //     }
// //     int result(){
// //         return p+q;
// //     }
// // };


// // int main(){
// //     a A;
// //     b *ptrB;
// //     ptrB=(b*)&A;
// //     cout<<ptrB->result();


// // return 0;
// // }
// #include<iostream>
// using namespace std;
// class Base
// {
//  public:
//  void show()
//  {

//       cout<< "Base class\n";
//  }
// };
// class Derived:public Base
// {
//  public:
//  void show()
//  {
//      "Derived Class\n";
//  }
// };
// int main()
// {
//  Base b; //Base class object
//  Derived d; //Derived class object
//  //b.show(); //Early Binding Ocuurs
//  d.show(); 
// }
//Engr.Hamza Ahmad
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <numeric>
// using namespace std;

// vector <int> alter_vector(vector <int>&v)
// {
//     for (int i = 0; i < sizeof(v); i++)
//     {
//        v[i]=v[i]*2;
//     }

//     return v;
    
// }
// int main(){
    
//     int size;

//     int search;

//     cout<<"Enter Size of vector: ";

//     cin>>size;

//     vector <int> vec1(size);

//     for (int  i = 0; i < vec1.size(); i++)
//     {
//         vec1[i]=i+1;
//     }

//     for (int  i = 0; i < vec1.size(); i++)
//     {
//         cout<<vec1[i]<<"    ";
//     }
//     cout<<"\nThe last element in vector is equal to: "<<vec1.back();

//     cout<<"\nThe First element in vector is equal to: "<<vec1.front();

//     vec1.pop_back();

//     vec1.push_back(100);
   
//    vec1.insert(vec1.begin(),10,11);
    
//     cout<<endl<<endl;

//      for(int n: vec1)
//      {
//         cout<<n<<"   ";
//      }
//      cout<<"\nAfter reversing the vector \n";
//      reverse(vec1.begin(),vec1.end());

//      for(int j:vec1)
//      {
//         cout<<j<<"   ";
//      }
     
//      int sum;

//      sum=accumulate(vec1.begin(),vec1.end(),0);

//      cout<<"\nSUM of the vector Elements is Equql to: "<<sum;

//      cout<<"\nEnter the value you find in vector :";
//      cin>>search;
//      auto it =find(vec1.begin(), vec1.end(),search);
//      if(it != vec1.end()) {
        
//         cout << "\nThe value is found at index: " << distance(vec1.begin(), it+1);
//     } else {
        
//         cout << "The value is not found in the vector" << endl;
//     }
    
//     cout<<"\nThe vector Afer Multipling by 2 \n";

//      alter_vector(vec1);

//      for(int z:vec1)
//      {
//         cout<<z<<"   ";
//      }
     
//  return 0;
// }
// #include <iostream>

// using namespace std;

// class Base { 
// public:
//     virtual void foo() {}
//     virtual ~Base() {}
// };

// class Derived : public Base {};

// int main() {
//     // Static Cast
//     int i = 10;
//     double d = static_cast<double>(i);
//     cout << "Static Cast: " << d << endl;
    
//     // Dynamic Cast
//     Base* base_ptr = new Derived;
//     Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
//     if (derived_ptr) {
//         cout << "Dynamic Cast successful!" << endl;
//     } else {
//         cout << "Dynamic Cast failed!" << endl;
//     }
    
//     // Const Cast
//     const int x = 10;
//     int* y = const_cast<int*>(&x);
//     *y = 20; // modifying const variable through non-const pointer
//     cout << "Const Cast: " << *y << endl;
    
//     // Reinterpret Cast
//     int* p = new int(10);
//     double* dp = reinterpret_cast<double*>(p);
//     cout << "Reinterpret Cast: " << *dp << endl; // This may produce unexpected results
//     delete p;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Base {
// public:
//     virtual void foo() {
//         cout << "Base foo()" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void foo() {
//         cout << "Derived foo()" << endl;
//     }
// // };
// // int main()
// // {
// //     Derived d1;
// //     Base b1;
// //     d1.foo();
// //     b1.foo();
// // }
// //Engr.Hamza Ahmad
// #include<iostream>
// using namespace std;
// template <class T>
// class add{
//     public:
//     T a;
//     T b;
//     void getdata(string s)
//     {
//         cout<<"Enter Element No 1: OF "<<s<<" ";
//         cin>>a;
//         cout<<"Enter Element NO 2: "<<s<<" ";
//         cin>>b;
//     }
//     void display()
//     {
//         cout<<"Element No 1 :"<<a<<endl;
//         cout<<"Element NO 2 :"<<b<<endl;
       
//     }
// };

// int main(){
//     add<int> obj1;
//     add<string> obj2;
//     add<double> obj3;
//     obj1.getdata("int");
//     obj2.getdata("string");
//     obj3.getdata("Double");
//     obj1.display();
//     obj2.display();
//     obj3.display();
// return 0;
// }
//Engr.Hamza Ahmad
// #include<iostream>
// using namespace std;
// template <typename T1, typename T2>
// void addition(T1 x,T2 y)
// {
//     cout<<x+y<<endl;;
// }

// int main(){
//     int a=2;
//     int b=3;
//     float c=3.3;
//     float d=3.333;
//     double e=2.326486465;
//     long double f=1.56465465465465465465489;
//     string g="HAMZA";
//     string h="YASIR";
//     addition<int,int>(2,3);
//      addition<float,float>(c,d);
//      addition<double,double>(e,f);
//      addition<string ,string >(g,h);
//      addition<int,int>(a,a);
//     // addition(g,f);
//     // addition(h,a);
//     // addition(h,f);

// return 0;
// }
//Engr.Hamza Ahmad
#include<iostream>
using namespace std;

class person {
protected:
    int age;
    string name;
   
public:
    person(int a, string s) : age(a), name(s) {}
     void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class employ : public person {
private:
    int salary;
public:
    employ(int s, int a, string n) : person(a, n), salary(s) {}
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating an object of employ and assigning values to it
    employ emp(50, 30, "John Doe");
    person p(20,"hamza");
    // Displaying the details of the employee
    emp.display();
    cout<<endl;
    p.display();

    return 0;
}
