#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{71, 41, 11, 45};
    assert(domain_review_score(item) == 195);
    assert(domain_review_lane(item) == "ship");
}
