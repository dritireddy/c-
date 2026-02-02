#include<iostream>
using namespace std;

class box{
	private:
		int width;
	public:
		box(int w){width=w;
		}
		int getwidth(box){return width;
		};
};

//int getwidth(box b){ return b.width;
//}

int main()
{
	box b1(10);
	cout<<"wid:"<<b1.getwidth(b1)<<endl;
	return 0;
}
