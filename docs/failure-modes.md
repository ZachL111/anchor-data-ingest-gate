# Failure Modes

For `anchor-data-ingest-gate`, I would look first for these mistakes:

- `schema drift` cases moving lanes without a matching threshold change.
- `partition skew` scoring higher after drag increases.
- Duplicate fixture ids hiding a stale golden row.
- README examples drifting away from the verifier.

The local checks are intentionally strict about these cases.
