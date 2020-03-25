#include <cstdlib>  // 
#include <vector>   // vector
#include <iostream> // cout, cin
#include <algorithm> // lower bound

int Read_Array_Size()
{
    int a;
    std::cin >> a;
    return a;
}

int Number_Of_Queries()
{
    int a;
    std::cin >> a;
    return a;
}

std::vector<int> Read_Array(int array_size)
{
    std::vector<int> array;
    for(int i=0; i<array_size; i++)
    {
        int a;
        std::cin >> a;
        array.push_back(a);
    }
    
    return array;
}

int main() {
    
    int size_of_array = Read_Array_Size();
    std::vector<int> array_of_elements = Read_Array(size_of_array);
    int queries = Number_Of_Queries();
    
    while(queries--)
    {
        std::vector<int>::iterator lower;
        int number_to_check;
        std::cin >> number_to_check;
        lower = std::lower_bound( array_of_elements.begin(), 
                                                array_of_elements.end(), 
                                                number_to_check);

        if(array_of_elements[lower-array_of_elements.begin()] == number_to_check)
            std::cout << "Yes " << (lower - array_of_elements.begin()+1) << std::endl;
        else
            std::cout << "No " << (lower - array_of_elements.begin()+1) << std::endl;        
    }
    
    
    return 0;
}

