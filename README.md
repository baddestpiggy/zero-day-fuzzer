# 💥 Zero-Day Fuzzer

Feed a program unexpected inputs until something breaks, then capture the
crash, pinpoint the memory bug with sanitizers, and replay the exact input
that caused it.

> **Status:** in development

## Tech
C++20 · LLVM / Clang · AFL++ · AddressSanitizer / UBSan · CMake

## How it works
1. **Target** – build a deliberately vulnerable test program (`targets/`) with sanitizers.
2. **Fuzz** – mutate seed inputs from `corpus/` with AFL++ (and a small custom mutator).
3. **Triage** – deduplicate crashes and classify them (heap overflow, use-after-free, …).
4. **Replay** – reproduce each crash deterministically and produce a minimal input.

## Roadmap
- [ ] Vulnerable test targets
- [ ] AFL++ harness + seed corpus
- [ ] Crash triage and deduplication
- [ ] Minimiser + replay tool
- [ ] Crash report summary

## Getting started
Requires Clang, CMake and AFL++ (easiest on Linux or WSL).
```bash
cmake -B build -DCMAKE_CXX_COMPILER=clang++
cmake --build build
```

## Ethics
Only fuzz software you own or are authorised to test. Report real
vulnerabilities through responsible disclosure.

## License
MIT
