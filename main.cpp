#include <iostream>
#include "sum.h"
#include "dif.h"
#include<cmath>
#include "prod.h"
using namespace std;

int main()
{
	cout<<"Hello, Git!!!"<<endl;
	cout<<12<<" + "<<23<<" = "<<sum(12,23)<<endl;
	cout<<12<<" - "<<23<<" = "<<dif(12,23)<<endl;
	cout<<12<<" * "<<23<<" = "<<prod(12,23)<<endl;
	cout<<12<<" ^ "<<23<<" = "<<pow(12,23)<<endl;
}