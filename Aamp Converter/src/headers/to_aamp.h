#ifndef __AAMP__
#define __AAMP__

#include <global.h>

void to_aamp(string filename);

enum DataType
{
	Bool = 0x0,
	Float = 0x1,
	Int = 0x2,
	Vector2 = 0x3,
	Vector3 = 0x4,
	Vector4 = 0x6,
	String = 0x7,
	String2 = 0x14,
	Actor = 0x8,
	Path = 0xF
};

int getType(string type);

#endif