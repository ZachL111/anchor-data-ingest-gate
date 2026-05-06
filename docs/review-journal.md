# Review Journal

The repository goal stays the same: build a C++ toolkit that studies ingest behavior through transition tables, with invalid-transition tests and no credentials or hosted services. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 195, lane `ship`
- `stress`: `lineage depth`, score 254, lane `ship`
- `edge`: `partition skew`, score 104, lane `hold`
- `recovery`: `quality gap`, score 219, lane `ship`
- `stale`: `schema drift`, score 189, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
