#ifndef _KMEANS_
#define _KMEANS_

#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>
#include <utility>
#include "Dataset.h"

class Kmeans {
public:
	static void clusteringKmeans(DatasetPtr dataset, std::size_t k, std::size_t iterations);
};

class Evaluation {
public:
	static void evaluation(
		DatasetPtr clustering_dataset, 
		std::size_t k, 
		std::pair<std::vector<double>, std::vector<std::size_t>>& result_pair);

};

#endif // !_KMEANS_

