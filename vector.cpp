#include<iostream> // Include input/output stream library
#include<vector> // Include vector container library
#include<algorithm> // Include algorithms library for reverse, find, etc.
#include <numeric> // Include library for numeric operations
using namespace std; // Using the standard namespace

vector <int> alter_vector(vector <int>&v) // Function to alter elements of a vector
{
    for (int i = 0; i < sizeof(v); i++) // Loop through each element of the vector
    {
       v[i]=v[i]*2; // Multiply each element by 2
    }

    return v; // Return the modified vector
    
}

int main(){ // Main function
    
    int size; // Declare variable for vector size

    int search; // Declare variable for search value

    cout<<"Enter Size of vector: "; // Prompt user to enter size of vector

    cin>>size; // Input vector size

    vector <int> vec1(size); // Create a vector of specified size

    for (int  i = 0; i < vec1.size(); i++) // Loop to populate vector elements
    {
        vec1[i]=i+1; // Assigning values to vector elements
    }

    for (int  i = 0; i < vec1.size(); i++) // Loop to display vector elements
    {
        cout<<vec1[i]<<"    "; // Output vector element
    }
    cout<<"\nThe last element in vector is equal to: "<<vec1.back(); // Output last element of vector

    cout<<"\nThe First element in vector is equal to: "<<vec1.front(); // Output first element of vector

    vec1.pop_back(); // Remove last element of vector

    vec1.push_back(100); // Add new element (100) to the end of vector
   
   vec1.insert(vec1.begin(),10,11); // Insert 10 elements with value 11 at the beginning of vector
    
    cout<<endl; // Output new line

     for(int n: vec1) // Loop to display vector elements
     {
        cout<<n<<"   "; // Output vector element
     }
     cout<<"\nAfter reversing the vector \n"; // Output message

     reverse(vec1.begin(),vec1.end()); // Reverse the vector

     for(int j:vec1) // Loop to display vector elements
     {
        cout<<j<<"   "; // Output vector element
     }
     
     int sum; // Declare variable for sum of vector elements

     sum=accumulate(vec1.begin(),vec1.end(),0); // Calculate sum of vector elements

     cout<<"\nSUM of the vector Elements is Equql to: "<<sum; // Output sum of vector elements

     cout<<"\nEnter the value you find in vector :"; // Prompt user to enter search value
     cin>>search; // Input search value

     auto it =find(vec1.begin(), vec1.end(),search); // Find the search value in vector

     if(it != vec1.end()) { // If search value is found

        cout << "\nThe value is found at index: " << distance(vec1.begin(), it+1); // Output index of search value
    } 
    else { // If search value is not found
        cout << "The value is not found in the vector" << endl; // Output message
    }
    
    cout<<"\nThe vector After Multiplying by 2 \n"; // Output message

     alter_vector(vec1); // Multiply all elements of vector by 2

     for(int z:vec1) // Loop to display modified vector elements
     {
        cout<<z<<"   "; // Output vector element
     }
     
 return 0; // Return 0 to indicate successful completion
}
