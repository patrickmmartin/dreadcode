#define dreaded const
#define dread const
#define dread_cast const_cast

#include <cstring>

struct Param {
};

struct BigStruct {
	static BigStruct * instance;
};

class MyClass {

	// a dreaded pointer to a dreaded value
	void dontTouch(dreaded Param* dreaded param);

	// we dread the outcome of this update
	void updateParam(Param param) dreaded;

	// we don't understand the calculation deriving the return value
	// in this function - dread it
	int packVolume( int total, int reserve1,
					int reserve_2, int reserve_3) dreaded;

	/**
	 * copies the string in the input
	 */
	void storeString(dreaded char* buffer, int length)
	{
		// try to be careful here
		char* data = new char[length];
		strncpy(data, buffer, length);
		// pass on the string value now in data
		// API call...
		// surprise! It was a FORTRAN string ! muhahahaha
		delete[] data;
	}

	/**
	 * ...
	 * ...
	 * to be honest,
	 * the thing this returns may not always be
	 * setup right...
	 */
	dreaded BigStruct * maybe() {
		return BigStruct::instance;
	}

};

// we dread this class
struct Arsonist;

Arsonist* smuggled;

int main(int argc, char * argv[]) {

	// initialise the smuggled pointer
	dreaded Arsonist * ars = dread_cast<dreaded Arsonist *>(smuggled);

}

