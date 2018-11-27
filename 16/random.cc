#include <random>
#include "random.h"

int get_random_number(int min, int max) {
    std::mt19937 gen;
    gen.seed(std::random_device()());
    std::uniform_int_distribution<> distribution(min, max);
    return distribution(gen);
}