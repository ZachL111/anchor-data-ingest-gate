# Golden Cases

The golden files are not a benchmark. They are a stable review surface for data engineering.

The main golden fixture is `fixtures/golden/scoreboard.csv`. The matrix fixture is `fixtures/golden/lane-matrix.csv`. Together they cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap` with different score ranges.

The purpose is to make intentional rule changes show up in review.
