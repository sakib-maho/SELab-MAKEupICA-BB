# SELab Makeup ICA BB (Upgraded)

This repository is upgraded into a modular C metrics CLI for software engineering lab practice.
It now includes clean source separation, reusable functions, tests, and build automation.

## Features

- CLI accepts integer inputs
- Computes sum, average, and max value
- Separate metrics module (`src/metrics.c`)
- Test executable for verification
- `Makefile` targets: `build`, `test`, `clean`

## Build and Run

```bash
make build
./metrics_cli 4 8 15 16 23 42
```

## Test

```bash
make test
```

## License

MIT License. See `LICENSE`.
