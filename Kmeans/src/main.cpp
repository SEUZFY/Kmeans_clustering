﻿// main.cpp: 定义应用程序的入口点。

#include "Dataset.h"
#include "ReadDataset.h"
#include "Preprocessing.h"

int main()
{
	std::cout << "Hello CMake." << '\n';

	DatasetPtr dataset(ReadDataset::readxyz(DATA_PATH));
	Preprocessing::meanNormalize(dataset);

	std::cout << dataset->nrows; // total rows: 1246507
	
	return 0;

}
