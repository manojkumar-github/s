

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    
    ### 1. Understand the question completely
    ### 2. Paper logic
    [3,1,2,4] -> [4,2,3,1]
        ### 3 . Scenarios
        ### Conditions
        
    int foo
### Function Foo(my_array){
        odd_array = []
        even_array = []
        for each_value in my_array:
            if each_value is greaterthan_5000:
                raise Error/Exception
            if each_value % 2 == 0:
                # this is even add to the start of the array
                even_array.append(each_value) # [2, 4]
            else:
                # number is odd add to the end of the array
                odd_array.append(each_value) # [3, 1]
        # add even array and odd array to a single array and return the output
        output_array = odd_array + even_array
        return output_array
               
        
    }
    

}


#### Funtion Test Case