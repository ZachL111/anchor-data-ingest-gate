#pragma once
#include <string>

struct DomainReview {
    int signal;
    int slack;
    int drag;
    int confidence;
};

int domain_review_score(const DomainReview& item);
std::string domain_review_lane(const DomainReview& item);
