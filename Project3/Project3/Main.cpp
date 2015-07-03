#include <stdlib.h>
#include <iostream>

#define __P2ASSERT_H__

#include "../Project3/p2SString.h"
#include "../Project3/p2List.h"
#include "../Project3/p2Tree.h"
#include "../Project3/p2Vector2.h"
#include "../Project3/p2Point.h"
#include "../Project3/p2DynArray.h"
#include "../Project3/p2Stack.h"
#include "../Project3/p2Qeue.h"
#include "../Project3/p2Stack2.h"
#include "../Project3/p2Qeue2.h"



int main(int argc, char** argv)
{
	p2SString s1("Hola mundo");
	printf(" %c ", s1);
	
	s1.Cut(2, 5);

	printf(" %c ", s1);
	

	s1.Cut(3, 0);

	printf(" %c ", s1);

	system("PAUSE");
	return 0;

}