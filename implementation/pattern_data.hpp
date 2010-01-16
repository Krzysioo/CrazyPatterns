#ifndef PATTERN_DATA_HPP_
#define PATTERN_DATA_HPP_

#define MAX_HASH 1000000

namespace Hex {

class PatternData {
public:
	PatternData();
	~PatternData();

	float getRatio(int);
	unsigned int getFound(int);
	unsigned int getPicked(int);

private:
	float* ratio;
	unsigned int* found;
	unsigned int* picked;
};

}
#endif
