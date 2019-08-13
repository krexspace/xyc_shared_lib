#ifndef UTILS_XYZ_H
#define UTILS_XYZ_H

#include <math.h>
#include <map>
#include <vector>
#include <string>

#include <sstream>
#define shared_exports
#include "shared_exports.h"

using namespace std;

//namespace xyz {
//	namespace util {
		string SHARED_EXPORT ping(string s);

		//
		// STRING UTILS
		//

		// Splits line into a vector or ints
		vector<int> SHARED_EXPORT split_to_ints(string str, char delimiter);

		// Splits line into a vector or floats
		vector<float> SHARED_EXPORT split_to_floats(string str, char delimiter);

//	}
//}

#endif