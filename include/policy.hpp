#pragma once
#include <string>

struct Signal {
    int demand;
    int capacity;
    int latency;
    int risk;
    int weight;
};

int score_signal(const Signal& signal);
std::string classify_signal(const Signal& signal);
