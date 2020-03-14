/*
 *  ===== DEMO =====
 *  std::vector (wektor STL)
 *  ================
 */

#include <iostream>
#include <vector>


int main()
{

	std::vector< std::vector<double> > pauliZ;
	pauliZ.resize(2);
	pauliZ.at(0).resize(2);
	pauliZ.at(1).resize(2);
	pauliZ.at(0).at(0) = 1.0;
	pauliZ.at(1).at(1) = -1.0;

	for(auto row : pauliZ)
	{
		for(auto val : row)
		{
			std::cout << val << " ";
		}
		std::cout << std::endl;
	}


	std::vector< std::vector<double> > pauliX = {{
		                                  {0,1},
						  {1,0}
						    }};

	std::vector< std::vector<int> > pascal = {{
						{1},
						{1,1},
						{1,2,1},
						{1,3,3,1}
	}};
}
