#include "domain_review.hpp"

int domain_review_score(const DomainReview& item) {
    return item.signal * 2 + item.slack + item.confidence - item.drag * 3;
}

std::string domain_review_lane(const DomainReview& item) {
    int score = domain_review_score(item);
    if (score >= 140) return "ship";
    if (score >= 105) return "watch";
    return "hold";
}
