#include <iostream>
#include <vector>

const double START = 1;
const double END = 5;
//const double NUMof = 16;
int main()
{
    bool dupe;
    std::vector <double> vec;
    for (double i = 0; i < END - START + 2; i++)
    {
        for (double j = 0; j < END - START + 2; j++)
        {
            dupe = false;
            //std::cout << (i + j) << "\n";
            for (int k = 0; k < vec.size(); k++)
            {
                if(vec[k] == (i*i+j*j))
                    dupe = true;
            }
            if (!dupe)
            {
                vec.push_back(i*i+j*j);
            }

        }


    }
    std::cout << "starting numbers\n";
    // sorting
    int iswap, temp;
    for (double i = 0; i < vec.size(); i++)
    {
        iswap = i;
        for (int k = i + 1; k < vec.size(); k++)
        {
            if (vec[iswap] > vec[k])
            {
                iswap = k;
            }
        }
        temp = vec[iswap];
        vec[iswap] = vec[i];
        vec[i] = temp;
    }

    for (int k = 0; k < vec.size(); k++)
    {
        std::cout << vec[k] << std::endl;
    }
    std::cout << vec.size();
    return 0;
}
