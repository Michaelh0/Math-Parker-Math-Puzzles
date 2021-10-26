#include <iostream>
const int SPECIAL = 1000000;
const int FIXED = 10000;
int main()
{
    int i = 1;
    int bef1 = 144, bef2 = 154; // 144 and 154 in that order works
    int found1 = 0, found2, found3, found4;
    int count =1;
    int new1, new2;
    int total;
    std::cout << bef2 << " " << bef1<< std::endl;
    while(i < SPECIAL)
    {
        i = bef1 + bef2;
        bef2 = bef1;
        bef1 = i;
        std::cout << i << " "<< std::endl;
        total = 0;
        count++;
        /*for (int f = 0; f < FIXED; f++)
        {
            new1 = i * f;
            for (int j = 0 ; j < FIXED; j++)
            {
                new2 = bef2 * j;
                total = new1 + new2;
                if (total == SPECIAL)
                {
                    std::cout << "yay" << j << " " << bef2 << " + " << f << " " << i;
                    if (found1 + found2 <= bef2 + i || found1 == 0)
                    {
                        found1 = i;
                        found2 = bef2;
                        found3 = f;
                        found4 = j;
                    }

                }
            }
        }*/
    }
    std::cout << count << std::endl;
    std::cout << found1 << " " << found2 << " "<< found3 << " "<< found4;
    //std::cout << bef2 << " "<<bef3 ;
}
