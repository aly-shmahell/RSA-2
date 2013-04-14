///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2013 Jimmie Bergmann - jimmiebergmann@gmail.com
//
// This software is provided 'as-is', without any express or
// implied warranty. In no event will the authors be held
// liable for any damages arising from the use of this software.
// 
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute
// it freely, subject to the following restrictions:
// 
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but
//    is not required.
// 
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
// 
// 3. This notice may not be removed or altered from any
//    source distribution.
// 
///////////////////////////////////////////////////////////////////////////////////

#include <LargeInteger.hpp>
#include <time.h>
#include <iostream>

int main( )
{

	// Let's seed the rand function by using the time.
	// Might be useful later on.
	srand( time( NULL ) );

	LargeInteger a( 1,	1000  );
	LargeInteger b( 1,	65530  );
	//LargeInteger largeInt_3( 2, 65535, 0 );

	std::cout << a << std::endl;
	std::cout << (a += (unsigned short)( 64534)) << std::endl;


	//std::cout << (bool)(a != (unsigned short)65535) << std::endl;

/*
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ( a - b ) << std::endl;
	std::cout << ( a + b ) << std::endl;
*/
	//std::cout << a.Compare( b ) << std::endl;

	/*std::cout << (bool)( b > a ) << std::endl;
	std::cout << (bool)( b >= a ) << std::endl;

	std::cout << (bool)( b < a ) << std::endl;
	std::cout << (bool)( b <= a ) << std::endl;*/

/*
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ( a - b ) << std::endl;
*/
/*
	if( !a )
	{
		std::cout << "True!" << std::endl;
	}*/


	
	/*std::cout << largeInt_1 << std::endl;
	std::cout << largeInt_2 << std::endl;

	largeInt_1 -= largeInt_1;//largeInt_1 + largeInt_2;

	
	std::cout << largeInt_1 << std::endl;*/
	//std::cout << largeInt_3 << std::endl;

	//std::cout << ( largeInt_1 == (unsigned short)65535 ) << std::endl;
	//std::cout << ( largeInt_2 == (unsigned int)65535 + 65535 + 1 ) << std::endl;
 


/*
	largeInt_1.PrintBinary( );
	std::cout << std::endl;
	largeInt_2.PrintBinary( );
	std::cout << std::endl << std::endl;

	//largeInt_1 -= largeInt_2;

	largeInt_3.PrintBinary( );
	std::cout << std::endl;

*/
	// Wait for any input in order to close the program.
	std::cin.get( );
	return 0;
}