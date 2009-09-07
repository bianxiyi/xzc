/*
 * KernelResource.cpp
 *
 *  Created on: Sep 7, 2009
 *      Author: msuchard
 */

#include "KernelResource.h"

KernelResource::KernelResource() {
}

KernelResource::KernelResource(
        int inPaddedStateCount,
        char* inKernelString,
        int inPatternBlockSize,
        int inMatrixBlockSize,
        int inBlockPeelingSize,
        int inSlowReweighing,
        int inMultiplyBlockSize,
        int inCategoryCount,
        int inPatternCount
        ) {
    paddedStateCount = inPaddedStateCount;
    kernelCode = inKernelString;
    patternBlockSize = inPatternBlockSize;
    matrixBlockSize = inMatrixBlockSize;
    blockPeelingSize = inBlockPeelingSize,
    slowReweighing = inSlowReweighing;
    multiplyBlockSize = inMultiplyBlockSize;
    categoryCount = inCategoryCount;
    patternCount = inPatternCount;
}

KernelResource::~KernelResource() {
}

KernelResource* KernelResource::copy(void) {
    return new KernelResource(
            paddedStateCount,
            kernelCode,
            patternBlockSize,
            matrixBlockSize,
            blockPeelingSize,
            slowReweighing,
            multiplyBlockSize,
            categoryCount,
            patternCount);
}