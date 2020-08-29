//Copyright 2010-2020 <>< Charles Lohr - under the NewBSD license.
//Generator for FontCharMap and FontCharData included in CNFGFunctions.c
#include <stdio.h>

unsigned CodePage437PlusUnicode[256][33] = {
	{ 0 },
	{ 5, 0, 0, 0, 1,  2, 0, 2, 1,  0, 3, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3 },
	{ 5, 0, 0, 0, 1,  2, 0, 2, 1,  0, 4, 2, 4,  2, 4, 1, 3,  1, 3, 0, 4 },
	{ 6, 0, 1, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 1,  1, 1, 1, 2 },
	{ 6, 1, 1, 2, 2,  2, 2, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 2,  0, 2, 1, 1 },
	{ 6, 0, 1, 2, 1,  2, 1, 2, 3,  2, 3, 0, 1,  0, 3, 2, 1,  0, 3, 0, 1,  1, 2, 1, 4 },
	{ 6, 0, 3, 2, 3,  1, 3, 1, 4,  2, 3, 2, 2,  2, 2, 1, 1,  1, 1, 0, 2,  0, 2, 0, 3 },  //spades
	{ 1, 1, 2, 1, 2 },
	{ 5, 1, 2, 1, 2,  0, 1, 2, 1,  2, 1, 2, 3,  2, 3, 0, 3,  0, 3, 0, 1 },
	{ 0 }, //[tab]
	{ 0 }, //[\r]
	{ 6, 0, 3, 2, 1,  2, 1, 2, 2,  2, 1, 1, 1,  0, 3, 1, 4,  1, 4, 2, 3,  2, 3, 1, 2 },  //male 
	{ 6, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  1, 2, 0, 1,  1, 2, 1, 4,  0, 3, 2, 3 },  //female
	{ 0 }, //[\n]
	{ 5, 0, 2, 0, 3,  0, 3, 1, 3,  0, 2, 1, 2,  1, 3, 1, 0,  1, 0, 2, 1 },  //note
	{ 6, 0, 1, 2, 3,  0, 3, 2, 1,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 1, 3,  1, 3, 0, 2 },
	{ 3, 0, 0, 2, 2,  2, 2, 0, 4,  0, 4, 0, 0 },
	{ 3, 2, 0, 0, 2,  0, 2, 2, 4,  2, 4, 2, 0 }, //backwards sign (17)
	{ 5, 0, 1, 1, 0,  1, 0, 2, 1,  1, 0, 1, 4,  1, 4, 0, 3,  1, 4, 2, 3 },
	{ 4, 0, 0, 0, 3,  0, 4, 0, 4,  2, 0, 2, 3,  2, 4, 2, 4 },
	{ 5, 0, 0, 2, 0,  0, 0, 0, 2,  0, 2, 2, 2,  1, 0, 1, 4,  2, 0, 2, 4 },
	{ 7, 0, 1, 2, 1,  2, 1, 2, 3,  2, 3, 0, 3,  0, 3, 0, 1,  2, 0, 1, 0,  1, 0, 1, 4,  1, 4, 0, 4 },
	{ 4, 0, 3, 2, 3,  2, 3, 2, 4,  2, 4, 0, 4,  0, 4, 0, 3 }, // lowblock
	{ 6, 0, 1, 1, 0,  1, 0, 2, 1,  1, 0, 1, 4,  1, 4, 0, 3,  1, 4, 2, 3,  0, 4, 2, 4 },
	{ 3, 0, 1, 1, 0,  2, 1, 1, 0,  1, 0, 1, 4 },
	{ 3, 0, 3, 1, 4,  2, 3, 1, 4,  1, 0, 1, 4 },
	{ 3, 0, 2, 2, 2,  2, 2, 1, 1,  2, 2, 1, 3 },
	{ 3, 0, 2, 2, 2,  0, 2, 1, 1,  0, 2, 1, 3 },
	{ 2, 0, 1, 0, 2,  0, 2, 2, 2 }, //micro-l
	{ 5, 0, 2, 2, 2,  2, 2, 1, 1,  1, 1, 0, 2,  0, 2, 1, 3,  1, 3, 2, 2 },
	{ 3, 1, 1, 2, 2,  2, 2, 0, 2,  0, 2, 1, 1 },
	{ 3, 0, 2, 1, 3,  1, 3, 2, 2,  2, 2, 0, 2 },
	{ 0 }, //[space]  (32)
	{ 2, 1, 0, 1, 3,  1, 4, 1, 4 },
	{ 2, 1, 0, 0, 1,  2, 0, 1, 1 },
	{ 4, 1, 0, 1, 4,  2, 0, 2, 4,  0, 1, 2, 1,  0, 3, 2, 3 },
	{ 6, 2, 1, 1, 0,  1, 0, 0, 1,  0, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3,  1, 0, 1, 4 },
	{ 5, 0, 0, 0, 1,  2, 3, 2, 4,  0, 4, 0, 3,  0, 3, 2, 1,  2, 1, 2, 0 },
	{ 7, 2, 1, 1, 0,  1, 0, 0, 1,  0, 1, 1, 2,  1, 2, 0, 3,  0, 3, 1, 4,  1, 4, 2, 3,  0, 2, 2, 4 },
	{ 1, 1, 0, 1, 1 },
	{ 3, 1, 0, 0, 1,  0, 1, 0, 3,  0, 3, 1, 4 },
	{ 3, 1, 0, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4 },  // )
	{ 4, 0, 1, 2, 3,  1, 1, 1, 3,  2, 1, 0, 3,  0, 2, 2, 2 },
	{ 2, 0, 2, 2, 2,  1, 1, 1, 3 },
	{ 1, 0, 4, 1, 3 },  // ,
	{ 1, 0, 2, 2, 2 },
	{ 1, 1, 4, 1, 4 },
	{ 1, 0, 3, 2, 1 },
	{ 5, 0, 0, 2, 0,  2, 0, 2, 4,  2, 4, 0, 4,  0, 4, 0, 0,  1, 2, 1, 2 },
	{ 3, 0, 1, 1, 0,  1, 0, 1, 4,  0, 4, 2, 4 },
	{ 5, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 2, 2,  2, 2, 0, 4,  0, 4, 2, 4 },
	{ 4, 0, 0, 2, 0,  2, 0, 2, 4,  2, 4, 0, 4,  1, 2, 2, 2 },
	{ 3, 0, 0, 0, 2,  0, 2, 2, 2,  2, 0, 2, 4 },
	{ 5, 2, 0, 0, 0,  0, 0, 0, 2,  0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4 },
	{ 5, 2, 0, 0, 2,  0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2 },  //6
	{ 4, 0, 0, 2, 0,  2, 0, 2, 1,  2, 1, 1, 2,  1, 2, 1, 4 },
	{ 5, 0, 0, 0, 4,  0, 0, 2, 0,  2, 0, 2, 4,  0, 4, 2, 4,  0, 2, 2, 2 },
	{ 5, 0, 0, 0, 2,  0, 2, 2, 2,  2, 2, 2, 0,  2, 0, 0, 0,  2, 2, 0, 4 },
	{ 2, 1, 1, 1, 1,  1, 3, 1, 3 },
	{ 2, 1, 1, 1, 1,  1, 3, 0, 4 },
	{ 2, 2, 0, 0, 2,  0, 2, 2, 4 },
	{ 2, 0, 1, 2, 1,  0, 3, 2, 3 },
	{ 2, 0, 0, 2, 2,  2, 2, 0, 4 },
	{ 5, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  1, 2, 1, 3,  1, 4, 1, 4 }, //?
	{ 7, 2, 1, 0, 1,  0, 1, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 1, 2,  1, 2, 1, 3,  1, 3, 2, 3 },
	{ 5, 0, 4, 0, 1,  0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 2, 4,  0, 2, 2, 2 },  //A
	{ 8, 0, 0, 0, 4,  0, 4, 1, 4,  1, 4, 2, 3,  2, 3, 1, 2,  1, 2, 0, 2,  1, 2, 2, 1,  2, 1, 1, 0,  1, 0, 0, 0 },  //B
	{ 5, 2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 1,  0, 1, 1, 0,  1, 0, 2, 1 }, //C
	{ 6, 0, 0, 1, 0,  1, 0, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 4,  0, 4, 0, 0 }, //D
	{ 4, 0, 0, 0, 4,  0, 4, 2, 4,  0, 0, 2, 0,  0, 2, 1, 2 },
	{ 3, 0, 0, 0, 4,  0, 0, 2, 0,  0, 2, 1, 2 },
	{ 7, 2, 1, 1, 0,  1, 0, 0, 1,  0, 1, 0, 3,  0, 3, 1, 4,  1, 4, 2, 3,  2, 3, 2, 2,  2, 2, 1, 2 },
	{ 3, 0, 0, 0, 4,  2, 0, 2, 4,  0, 2, 2, 2 },
	{ 3, 0, 0, 2, 0,  1, 0, 1, 4,  0, 4, 2, 4 },
	{ 4, 0, 0, 2, 0,  2, 0, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3 },
	{ 6, 0, 0, 0, 4,  0, 2, 1, 2,  1, 2, 2, 1,  2, 1, 2, 0,  1, 2, 2, 3,  2, 3, 2, 4 },  //K
	{ 2, 0, 0, 0, 4,  0, 4, 2, 4 },
	{ 4, 0, 4, 0, 0,  0, 0, 1, 1,  1, 1, 2, 0,  2, 0, 2, 4 },
	{ 3, 0, 4, 0, 0,  0, 0, 2, 2,  2, 0, 2, 4 },
	{ 6, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 1 }, //O
	{ 5, 0, 0, 0, 4,  0, 0, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  1, 2, 0, 2 },
	{ 7, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 1,  0, 4, 1, 3 },
	{ 6, 0, 0, 0, 4,  0, 0, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  1, 2, 0, 2,  0, 2, 2, 4 },
	{ 5, 2, 1, 1, 0,  1, 0, 0, 1,  0, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3 },
	{ 2, 0, 0, 2, 0,  1, 0, 1, 4 },
	{ 3, 0, 0, 0, 4,  0, 4, 2, 4,  2, 4, 2, 0 },
	{ 4, 0, 0, 0, 3,  0, 3, 1, 4,  1, 4, 2, 3,  2, 3, 2, 0 },
	{ 4, 0, 0, 0, 4,  0, 4, 2, 4,  1, 4, 1, 3,  2, 4, 2, 0 },
	{ 6, 0, 0, 0, 1,  0, 1, 2, 3,  2, 3, 2, 4,  0, 4, 0, 3,  0, 3, 2, 1,  2, 1, 2, 0 },
	{ 5, 0, 0, 0, 1,  0, 1, 1, 2,  1, 2, 1, 4,  1, 2, 2, 1,  2, 1, 2, 0 },
	{ 4, 0, 0, 2, 0,  2, 0, 0, 2,  0, 2, 0, 4,  0, 4, 2, 4 },
	{ 3, 1, 0, 0, 0,  0, 0, 0, 4,  0, 4, 1, 4 },
	{ 1, 0, 1, 2, 3 },
	{ 3, 1, 0, 2, 0,  2, 0, 2, 4,  2, 4, 1, 4 }, //]
	{ 2, 0, 1, 1, 0,  1, 0, 2, 1 },
	{ 1, 0, 4, 2, 4 },
	{ 1, 0, 0, 1, 1 },
	{ 5, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2 }, //a
	{ 4, 0, 0, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2 },
	{ 4, 2, 4, 0, 4,  0, 4, 0, 3,  0, 3, 1, 2,  1, 2, 2, 2 }, //c
	{ 4, 2, 0, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2,  0, 2, 2, 2 },
	{ 5, 2, 4, 0, 4,  0, 4, 0, 2,  0, 2, 2, 2,  2, 2, 2, 3,  2, 3, 1, 3 }, //e
	{ 4, 0, 4, 0, 1,  0, 2, 1, 2,  0, 1, 1, 0,  1, 0, 2, 1 },
	{ 7, 2, 3, 1, 2,  1, 2, 0, 3,  0, 3, 1, 4,  1, 4, 2, 3,  2, 3, 2, 4,  2, 4, 1, 5,  1, 5, 0, 4 },
	{ 4, 0, 0, 0, 4,  0, 3, 1, 2,  1, 2, 2, 3,  2, 3, 2, 4 },
	{ 2, 1, 1, 1, 1,  1, 2, 1, 4 },  //i
	{ 4, 2, 2, 2, 2,  2, 3, 2, 4,  2, 4, 1, 5,  1, 5, 0, 4 },  //j
	{ 4, 0, 0, 0, 4,  0, 3, 1, 3,  1, 3, 2, 2,  1, 3, 2, 4 },
	{ 1, 1, 0, 1, 4 },
	{ 5, 0, 2, 0, 4,  0, 2, 1, 3,  1, 2, 1, 4,  1, 2, 2, 3,  2, 3, 2, 4 },
	{ 4, 0, 2, 0, 4,  0, 3, 1, 2,  1, 2, 2, 3,  2, 3, 2, 4 }, //n
	{ 4, 0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2 }, //o
	{ 4, 0, 2, 0, 5,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2 }, // p
	{ 4, 0, 2, 0, 4,  0, 4, 2, 4,  2, 5, 2, 2,  2, 2, 0, 2 }, // q
	{ 3, 0, 2, 0, 4,  0, 3, 1, 2,  1, 2, 2, 2 }, //r
	{ 5, 2, 2, 0, 2,  0, 2, 0, 3,  0, 3, 2, 3,  2, 3, 2, 4,  2, 4, 0, 4 }, //s
	{ 2, 1, 1, 1, 4,  0, 2, 2, 2 }, //t < really is t>
	{ 4, 0, 2, 0, 4,  0, 4, 1, 4,  1, 4, 2, 3,  2, 4, 2, 2 }, //u
	{ 4, 0, 2, 0, 3,  0, 3, 1, 4,  1, 4, 2, 3,  2, 3, 2, 2 }, //v
	{ 5, 0, 2, 0, 3,  0, 3, 1, 4,  1, 4, 1, 2,  1, 3, 2, 4,  2, 4, 2, 2 }, //w
	{ 2, 0, 2, 2, 4,  0, 4, 2, 2 }, //x
	{ 4, 0, 2, 0, 3,  0, 3, 1, 4,  2, 2, 2, 3,  2, 3, 0, 5 }, //y
	{ 3, 0, 2, 2, 2,  2, 2, 0, 4,  0, 4, 2, 4 }, //z
	{ 4, 2, 0, 1, 0,  1, 0, 1, 4,  1, 4, 2, 4,  1, 2, 0, 2 },
	{ 2, 1, 0, 1, 1,  1, 3, 1, 4 },
	{ 4, 0, 0, 1, 0,  1, 0, 1, 4,  1, 4, 0, 4,  1, 2, 2, 2 }, //}
	{ 3, 0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 },
	{ 5, 0, 3, 0, 4,  0, 4, 2, 4,  2, 4, 2, 3,  2, 3, 1, 2,  1, 2, 0, 3 },  //house (end of base charset)

	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },

	//Now, at 161
	{ 2, 1, 0, 1, 0,  1, 1, 1, 4 }, //! upside down
	{ 6, 2, 1, 1, 0,  1, 0, 0, 1,  0, 1, 0, 2,  0, 2, 1, 3,  1, 3, 2, 2,  1, 0, 1, 3 },  //cents
	{ 5, 1, 1, 0, 0,  0, 0, 0, 4,  0, 4, 2, 4,  2, 4, 2, 3,  0, 2, 1, 2 }, //pound
	{ 8, 0, 1, 0, 2,  1, 1, 2, 1,  2, 2, 2, 3,  0, 3, 1, 3,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 1, 3,  1, 3, 0, 2 }, //spindle
	{ 5, 0, 0, 1, 1,  1, 1, 2, 0,  1, 1, 1, 4,  0, 2, 2, 2,  0, 3, 2, 3 }, //Yen
	{ 2, 1, 0, 1, 2,  1, 3, 1, 5 },	//big bars
	{ 8, 2, 0, 0, 0,  0, 0, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  0, 2, 1, 3,  1, 3, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4 }, //Subsection
	{ 2, 0, 0, 0, 0,  2, 0, 2, 0 }, //Diaeresis
	//{ 8, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 2, 2,  2, 2, 1, 3,  1, 3, 0, 2,  0, 2, 0, 1,  0, 2, 1, 1,  0, 2, 1, 2 }, //Copyright
	{ 3, 2, 0, 1, 0,  1, 0, 1, 1,  1, 1, 2, 1 }, //copyright
	{ 4, 1, 0, 2, 1,  2, 0, 2, 1,  2, 1, 1, 1,  1, 1, 1, 0 }, //small a w/ bar underneath
	{ 4, 1, 1, 0, 2,  0, 2, 1, 3,  2, 1, 1, 2,  1, 2, 2, 3 }, //Brittish quote left
	{ 2, 0, 1, 2, 1,  2, 1, 2, 2 }, // not sign
	{ 1, 1, 2, 2, 2 }, //tiny hyphen
	{ 5, 1, 0, 2, 0,  2, 0, 2, 1,  2, 1, 1, 1,  1, 2, 1, 0, 1, 1, 2, 2 }, //Registered trademark
	{ 1, 0, 0, 2, 0 }, //Macron
	{ 4, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  1, 2, 0, 1 }, //Degree sign
	{ 3, 0, 2, 2, 2,  1, 1, 1, 3,  0, 3, 2, 3 }, //Plus/minus
	{ 4, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 0, 3,  0, 3, 2, 3 }, //tiny two
	{ 6, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  1, 2, 0, 2,  1, 2, 2, 3,  2, 3, 0, 3 }, //tiny three
	{ 1, 1, 1, 2, 0 }, //Accent

	//Now at 181
	{ 4, 0, 2, 0, 5,  0, 4, 1, 4,  1, 4, 2, 3,  2, 2, 2, 4 }, //myuu
	{ 5, 1, 4, 1, 0,  1, 0, 0, 1,  0, 1, 1, 2,  1, 0, 2, 0,  2, 0, 2, 4 }, //Paragraph
	{ 1, 1, 2, 1, 2 }, //middle dot
	{ 2, 1, 4, 1, 5,  1, 5, 0, 5 }, //cedilla
	{ 1, 2, 0, 2, 1 },  //superscript 1
	{ 4, 1, 0, 2, 0,  2, 0, 2, 1,  2, 1, 1, 1,  1, 1, 1, 0 }, //superscript 0
	{ 4, 0, 1, 1, 2,  1, 2, 0, 3,  1, 1, 2, 2,  2, 2, 1, 3 },  //Brittish right side thingie
	{ 5, 0, 0, 0, 1,  0, 2, 2, 0,  1, 2, 1, 3,  1, 3, 2, 3,  2, 2, 2, 4 }, //1/4
	{ 6, 0, 0, 0, 1,  0, 2, 2, 0,  1, 2, 2, 2,  2, 2, 1, 3,  1, 3, 1, 4,  1, 4, 2, 4}, //1/2
	{ 8, 0, 0, 1, 0,  1, 0, 1, 1,  1, 1, 0, 1,  1, 1, 0, 2,  0, 2, 2, 0,  1, 2, 1, 3,  1, 3, 2, 3,  2, 2, 2, 4 }, //3/4
	{ 5, 1, 0, 1, 0,  1, 1, 1, 2,  1, 2, 0, 3,  0, 3, 1, 4,  1, 4, 2, 3 }, //? upside down
	{ 6, 0, 4, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 2, 4,  0, 3, 2, 3,  1, 0, 2, 1 }, //A, unaccent
	{ 6, 0, 4, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 2, 4,  0, 3, 2, 3,  0, 1, 1, 0 }, //A, accent
	{ 7, 0, 4, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 2, 4,  0, 3, 2, 3,  0, 1, 1, 0,  1, 0, 2, 1 }, //A, hat
	{ 8, 0, 4, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 2, 4,  0, 3, 2, 3,  0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 }, //A, tilde
	{ 7, 0, 4, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 2, 4,  0, 3, 2, 3,  0, 0, 0, 0,  2, 0, 2, 0 }, //A, dots
	{ 8, 0, 4, 0, 2,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 2, 4,  0, 3, 2, 3,  0, 0, 2, 0,  2, 0, 1, 1,  1, 1, 0, 0 }, //A, circle
	{ 6, 0, 0, 0, 4,  0, 2, 2, 2,  0, 0, 1, 1,  1, 0, 1, 4,  1, 0, 2, 0,  1, 4, 2, 4 }, //AE
	{ 7, 2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 1,  0, 1, 1, 0,  1, 0, 2, 1,  1, 4, 1, 5,  1, 5, 0, 5 },  //C with hook
	{ 5, 0, 2, 2, 2,  0, 2, 0, 4,  0, 4, 2, 4,  0, 3, 1, 3,  0, 0, 1, 1 },  //E with unaccent

	//Now, at 201
	{ 5, 0, 2, 2, 2,  0, 2, 0, 4,  0, 4, 2, 4,  0, 3, 1, 3,  1, 1, 2, 0 },  //E with accent
	{ 6, 0, 2, 2, 2,  0, 2, 0, 4,  0, 4, 2, 4,  0, 3, 1, 3,  0, 1, 1, 0,  1, 0, 2, 1 }, //E with hat
	{ 6, 0, 2, 2, 2,  0, 2, 0, 4,  0, 4, 2, 4,  0, 3, 1, 3,  0, 0, 0, 0,  2, 0, 2, 0 }, //E with dots
	{ 4, 0, 2, 2, 2,  1, 2, 1, 4,  0, 4, 2, 4,  0, 0, 1, 1 }, //I with unaccent
	{ 4, 0, 2, 2, 2,  1, 2, 1, 4,  0, 4, 2, 4,  1, 1, 2, 0 }, //I with accent
	{ 5, 0, 2, 2, 2,  1, 2, 1, 4,  0, 4, 2, 4,  0, 1, 1, 0,  1, 0, 2, 1 }, //I with hat
	{ 5, 0, 2, 2, 2,  1, 2, 1, 4,  0, 4, 2, 4,  2, 0, 2, 0,  0, 0, 0, 0 }, //I with dots
	{ 7, 0, 0, 1, 0,  1, 0, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 4,  0, 4, 0, 0,  0, 2, 1, 2 }, //eth
	{ 6, 0, 4, 0, 2,  0, 2, 2, 4,  2, 4, 2, 2,  0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 }, //N with tilde
	{ 5, 0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2,  0, 0, 1, 1 },  //O with unaccent
	{ 5, 0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2,  1, 1, 2, 0 },  //O with accent
	{ 6, 0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2,  1, 1, 2, 0,  0, 0, 1, 1 },  //O with hat
	{ 7, 0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2,  0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 },  //O with tilde
	{ 6, 0, 1, 2, 1,  2, 1, 2, 4,  2, 4, 0, 4,  0, 4, 0, 1,  0, 0, 0, 0,  2, 0, 2, 0 },  //O with dots
	{ 2, 0, 1, 2, 3,  0, 3, 2, 1 }, //Multiplication symbol
	{ 7, 0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 2, 3,  2, 3, 1, 4,  1, 4, 0, 3,  0, 3, 0, 1,  0, 3, 2, 1 }, //O with stroke
	{ 4, 0, 1, 0, 4,  0, 4, 2, 4,  2, 4, 2, 1,  1, 1, 2, 0 },  //U with unaccent
	{ 4, 0, 1, 0, 4,  0, 4, 2, 4,  2, 4, 2, 1,  0, 0, 1, 1 },  //U with unaccent
	{ 5, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  0, 1, 1, 0,  1, 0, 2, 1 },  //U with hat
	{ 5, 0, 1, 0, 4,  0, 4, 2, 4,  2, 4, 2, 1,  0, 0, 0, 0,  2, 0, 2, 0 },  //U with dots
	
	//221
	{ 6, 0, 1, 0, 2,  0, 2, 1, 3,  1, 3, 1, 4,  1, 3, 2, 2,  2, 2, 2, 1,  1, 1, 2, 0 }, // Y with accent
	{ 5, 0, 0, 0, 4,  0, 1, 1, 1,  1, 1, 2, 2,  2, 2, 1, 3,  1, 3, 0, 3 }, //Capitol thorn
	{ 7, 0, 0, 0, 5,  0, 0, 1, 0,  1, 0, 2, 1,  2, 1, 1, 2,  0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4 }, //Beta
	{ 6, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2,  0, 0, 1, 1 }, //a with unaccent
	{ 6, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2,  1, 1, 2, 0 }, //a with accent
	{ 7, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2,  0, 1, 1, 0,  1, 0, 2, 1 }, //a with hat
	{ 8, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2,  0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 }, //a with tilde
	{ 7, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2,  0, 1, 0, 1,  2, 1, 2, 1 }, //a with dots
	{ 8, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 3, 1, 2,  1, 2, 0, 2,  0, 1, 1, 0,  1, 0, 2, 1,  2, 1, 0, 1 }, //a with circle
	{ 7, 0, 2, 1, 3,  0, 2, 0, 4,  0, 4, 2, 4,  1, 2, 1, 4,  1, 2, 2, 2,  1, 3, 2, 3,  2, 2, 2, 3 }, // ae
	{ 6, 0, 3, 0, 4,  0, 4, 2, 4,  0, 3, 1, 2,  1, 2, 2, 2,  1, 4, 1, 5,  1, 5, 0, 5 }, //c with hook
	{ 6, 2, 4, 0, 4,  0, 4, 0, 2,  0, 2, 2, 2,  2, 2, 2, 3,  2, 3, 1, 3,  0, 0, 1, 1 }, //e with unaccent
	{ 6, 2, 4, 0, 4,  0, 4, 0, 2,  0, 2, 2, 2,  2, 2, 2, 3,  2, 3, 1, 3,  1, 1, 2, 0 }, //e with accent
	{ 7, 2, 4, 0, 4,  0, 4, 0, 2,  0, 2, 2, 2,  2, 2, 2, 3,  2, 3, 1, 3,  0, 1, 1, 0,  1, 0, 2, 1 }, //e with hat
	{ 7, 2, 4, 0, 4,  0, 4, 0, 2,  0, 2, 2, 2,  2, 2, 2, 3,  2, 3, 1, 3,  0, 1, 0, 1,  2, 1, 2, 1 }, //e with dots
	{ 2, 1, 2, 1, 4,  0, 0, 1, 1 }, //i with unaccent
	{ 2, 1, 2, 1, 4,  1, 1, 2, 0 }, //i with accent
	{ 3, 1, 2, 1, 4,  0, 1, 1, 0,  1, 0, 2, 1 }, //i with hat
	{ 3, 1, 2, 1, 4,  0, 1, 0, 1,  2, 1, 2, 1 }, //i with dots
	{ 6, 0, 0, 2, 2,  1, 1, 2, 0,  0, 2, 2, 2,  2, 2, 2, 4,  2, 4, 0, 4,  0, 4, 0, 2  }, //little eth

	//241
	{ 7, 0, 2, 0, 4,  0, 3, 1, 2,  1, 2, 2, 3,  2, 3, 2, 4,  0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 }, //n with tilde
	{ 5, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2,  0, 0, 1, 1 }, //o with unaccent
	{ 5, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2,  1, 1, 2, 0 }, //o with accent
	{ 6, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2,  0, 1, 1, 0,  1, 0, 2, 1 }, //o with hat
	{ 7, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2,  0, 1, 1, 0,  1, 0, 1, 1,  1, 1, 2, 0 }, //o with tilde
	{ 6, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2,  0, 1, 0, 1,  2, 1, 2, 1 }, //o with dots
	{ 3, 1, 1, 1, 1,  0, 2, 2, 2,  1, 3, 1, 3 }, // division
	{ 5, 0, 2, 0, 4,  0, 4, 2, 4,  2, 4, 2, 2,  2, 2, 0, 2,  0, 4, 2, 2 }, //o, crossed out
	{ 5, 0, 2, 0, 4,  0, 4, 1, 4,  1, 4, 2, 3,  2, 4, 2, 2,  0, 0, 1, 1 }, //u with unaccent
	{ 5, 0, 2, 0, 4,  0, 4, 1, 4,  1, 4, 2, 3,  2, 4, 2, 2,  1, 1, 2, 0 }, //u with accent
	{ 6, 0, 2, 0, 4,  0, 4, 1, 4,  1, 4, 2, 3,  2, 4, 2, 2,  0, 1, 1, 0,  1, 0, 2, 1 }, //u with hat
	{ 6, 0, 2, 0, 4,  0, 4, 1, 4,  1, 4, 2, 3,  2, 4, 2, 2,  0, 1, 0, 1,  2, 1, 2, 1 }, //u with dots
	{ 5, 0, 2, 0, 3,  0, 3, 1, 4,  2, 2, 2, 3,  2, 3, 0, 5,  1, 1, 2, 0 }, //y with accent
	{ 5, 0, 0, 0, 4,  0, 2, 1, 1,  1, 1, 2, 2,  2, 2, 1, 3,  1, 3, 0, 2 }, // little thorn
	{ 6, 0, 2, 0, 3,  0, 3, 1, 4,  2, 2, 2, 3,  2, 3, 0, 5,  0, 1, 0, 1,  2, 1, 2, 1 }, //y with dots
};

int main()
{
	int TMapPos = 0;
	unsigned char TMap[20000];
	unsigned short Offsets[256]; 
	unsigned c;

	int outCodePos = 0;
	//Synthesize bitstream for this character.
	unsigned char BitsToMap[4096];

	int emitchars = 256;
	for( c = 0; c < emitchars; c++ )
	{
		unsigned * ttm = CodePage437PlusUnicode[c];
		if( ttm[0] > 256 )
		{
			printf( "Character %d too complicated.\n", c );
			return -1;
		}

		unsigned int codelen = ttm[0];
		if( codelen == 0 )
		{
			Offsets[c] = 65535;
			continue;
		}

		int i;
		int thisCodePos = outCodePos;

		int monitorchar = 254;

		if( c == monitorchar ) printf( "CODELEN = %d\n", codelen );

		int do_pen = 1;
		for( i = 0; i < codelen; i++ )
		{
			unsigned x1 = ttm[i*4+1];
			unsigned y1 = ttm[i*4+2];
			unsigned x2 = ttm[i*4+3];
			unsigned y2 = ttm[i*4+4];

			unsigned char code1 = ( x1 << 4 ) | y1;
			unsigned char code2 = ( x2 << 4 ) | y2;

			if( i == codelen - 1 )
				code2 |= 0x80;

			unsigned char skipnext;
			skipnext = 0;

			if( c == monitorchar )
			{
				printf( "%d %d   %d %d   %d %d\n", x1, y1, x2, y2, code1, code2 );
			}

			if( x1 == x2 && y1 == y2 )
			{
				//Drawing a dot.
				code2 |= 0x08;
				BitsToMap[outCodePos++] = code2;
				do_pen = 1;
				if( c == monitorchar )
					printf( "EMIT.: %02x\n", code2 );
				continue;
			}

			int continuation = 0;

			if( i < codelen - 1 )
			{
				unsigned xnext = ttm[i*4+5];
				unsigned ynext = ttm[i*4+6];
				if( xnext == x2 && ynext == y2 )
				{
					continuation = 1;
				}
			}

			if( c == monitorchar )
				printf( "%d, %d  - %d, %d   CONT->%d DO_PEN->%d\n", x1, y1, x2, y2, continuation, do_pen );

			if( do_pen )
			{
				BitsToMap[outCodePos++] = code1;
				if( c == monitorchar )
					printf( "EMIT0: %02x\n", code1 );
			}

			do_pen = 0;

			if( !continuation )
			{
				code2 |= 0x08;
				do_pen = 1;
			}

			BitsToMap[outCodePos++] = code2;
			if( c == monitorchar )
				printf( "EMIT1: %02x\n", code2 );
		}

		if( c == monitorchar ) printf( "thisCodePos: %d\n", thisCodePos );
		Offsets[c] = thisCodePos;

#if 0
//		printf( "%d -- %d\n", c, codelen );

		bool bFound = false;
		//Now, search for code in map.
		fprintf( stderr, "Code for %d: length %d\n", c, codelen );
		for( i = 0; i < (int)(TMapPos - codelen + 1); i++ )
		{
//			printf( "%d / %d - %d + 1 (%d) (%d)\n", i, TMapPos, codelen,TMapPos - codelen + 1,  i < TMapPos - codelen + 1 );
			unsigned j;
			for( j = 0; j < codelen; j++ )
			{
//				printf( "%d\n", j );
				if( TMap[j+i] != BitsToMap[j] ) break;
			}

			//Found?
			if( j == codelen ) 
			{
				Offsets[c] = i;
				bFound = true;
				break;
			}
		}
		if( !bFound )
		{
			fprintf( stderr, "no matching pattern found.  Copying.\n" );
			Offsets[c] = TMapPos;
			for( unsigned j = 0; j < codelen; j++ )
				TMap[TMapPos++] = BitsToMap[j];
		}
		fprintf( stderr, "match found.\n" );
#endif
	}

	printf( "const unsigned short RawdrawFontCharMap[%d] = {", emitchars );
	for( c = 0; c < emitchars; c++ )
	{
		if( c % 16 == 0 )
		{
			printf( "\n\t" );
		}
		printf( "%d, ", Offsets[c] );
	}
	printf( "};\n\n" );
	printf( "const unsigned char RawdrawFontCharData[%d] = {", outCodePos );
	for( unsigned i = 0; i < outCodePos; i++ )
	{
		if( i % 16 == 0 ) 
			printf( "\n\t" );
		printf( "0x%02x, ", BitsToMap[i] );
	}
	printf( "};\n\n" );
}