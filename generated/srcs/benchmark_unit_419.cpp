#include "bench/fib.hpp"

// RE Benchmark TU 419 of 20000 (depth=28, stamp="default")
namespace bench_tu_419 {
constexpr unsigned long long result = ::bench::slow_fib<28, 419>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_419
