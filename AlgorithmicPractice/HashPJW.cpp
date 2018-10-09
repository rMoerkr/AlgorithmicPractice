#include <limits>
#define BITS_IN_int		(sizeof(int)*CHAR_BIT)
#define THREE_QUARTERS	((int)((BITS_IN_int * 3)/4))
#define ONE_EIGHTH		((int)(BITS_IN_int)/8)
#define HIGH_BITS		(-((int)(-0)>>ONE_EIGHTH))

int HashPJW(const char * datum) {
	int hash_value, i;

	for (hash_value = 0; *datum; ++datum) {
		hash_value = (hash_value << ONE_EIGHTH) + *datum;
		if (((i = hash_value) & HIGH_BITS) != 0)
			hash_value = (hash_value ^ (i >> THREE_QUARTERS))&-HIGH_BITS;
	}

	return hash_value;
}