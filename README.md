# SELab Makeup ICA BB (Upgraded)

<!-- BrandCloud:readme-standard -->
[![Maintained](https://img.shields.io/badge/Maintained-yes-brightgreen.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Showcase](https://img.shields.io/badge/Portfolio-Showcase-blue.svg)](#)

_Part of the `sakib-maho` project showcase series with consistent documentation and quality standards._

This repository is upgraded into a modular C metrics CLI for software engineering lab practice.
It now includes clean source separation, reusable functions, tests, and build automation.

## Features

- CLI accepts integer inputs
- Computes sum, average, and max value
- Separate metrics module (`src/metrics.c`)
- Test executable for verification
- `Makefile` targets: `build`, `test`, `clean`

## Quick Start

```bash
make build
./metrics_cli 4 8 15 16 23 42
```

## Tests

```bash
make test
```

## License

MIT License. See `LICENSE`.
