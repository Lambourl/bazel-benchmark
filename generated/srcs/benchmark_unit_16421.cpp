#include "bench/fib.hpp"

// RE Benchmark TU 16421 of 20000 (depth=28, stamp="default")
namespace bench_tu_16421 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16421>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16421
