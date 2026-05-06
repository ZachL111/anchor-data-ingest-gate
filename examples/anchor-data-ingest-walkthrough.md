# Anchor Data Ingest Gate Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 195 | ship |
| stress | lineage depth | 254 | ship |
| edge | partition skew | 104 | hold |
| recovery | quality gap | 219 | ship |
| stale | schema drift | 189 | ship |

Start with `stress` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
