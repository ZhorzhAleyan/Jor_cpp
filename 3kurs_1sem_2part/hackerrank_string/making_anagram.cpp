#include <iostream>

int makeAnagram(std::string a, std::string b) {
    int count;
    int count_b = 0;
    int size_b = b.size();
    for(int i = 0; i < a.size(); i++)
        {    
           char p = a[i]; 
            for(int j = 0; j < b.size(); j++)
                {
                    if(p == b[j])
                    {
                         count_b++;
                        b.erase(b.begin() + j);  
                        break;
                    }    
                }
        }       
            count = a.size() + size_b - 2*count_b;             
            return count;            
}

int main()
{
    std::string a;
    std::cin >> a;

    std::string b;
    std::cin >> b;

    int res = makeAnagram(a, b);

    std::cout << "count = " << res << std::endl;

    return 0;
}
