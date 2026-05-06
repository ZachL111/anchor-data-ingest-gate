# anchor-data-ingest-gate

`anchor-data-ingest-gate` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies ingest behavior through transition tables, with invalid-transition tests and no credentials or hosted services.

## Project Rationale

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Anchor Data Ingest Gate Review Notes

For a quick review, compare `lineage depth` with `partition skew` before reading the middle cases.

## Feature Set

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/anchor-data-ingest-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `lineage depth` and `partition skew`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `schema drift`, `lineage depth`, `partition skew`, and `quality gap`.

The C++ addition stays small enough to inspect in one sitting.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Test Command

The check exercises the source code and the review fixture. `stress` is the high score at 254; `edge` is the low score at 104.

## Next Improvements

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
