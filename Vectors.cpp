#include <iostream>
using namespace std;
	class Vector
	{
	    public:
	    struct V
	    {
	    int x,y,z; 
	    };
	   static V Vsum(V u, V v)
	{
	    V r;
	    r.x=u.x+v.x;
	    r.y=u.y+v.y;
	    r.z=u.z+v.z;
	    return r;
	}
	  static void Vimp(V a)
    {
    cout << "(" <<a.x <<","<< a.y <<","<< a.z << ")"<< endl;
    }
	   static int Vdot(V u, V v)
	{
	    int p;
	    p=u.x*v.x+u.y*v.y+u.z*v.z;
	    return p;
	}
	};

int main()
{
    Vector::V V1;
    Vector::V V2;
    Vector::V V3;
    int a;
    V1={1,2,3};
    V2={4,5,6};
    Vector::Vimp(Vector::Vsum(V1,V2));
    cout << Vector::Vdot(V1,V2);
    return 0;
}
