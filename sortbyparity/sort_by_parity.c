


 vector <int> even;
    vector <int> odd;
    vector <int>evenodd;
    for (int i=0;i<A.size(); i++)
    {
        if (A[i]%2==0)
            
          even.push_back(A[i]);
        
    }
    
for (int i=0;i<A.size(); i++)
    {
        if (A[i]%2!=0)
            
          odd.push_back(A[i]);
        
    }
    
 evenodd.reserve( even.size() + odd.size() ); // preallocate memory