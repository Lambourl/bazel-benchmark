#include "bench/fib.hpp"

// RE Benchmark TU 16304 of 20000 (depth=28, stamp="default")
namespace bench_tu_16304 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16304>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16304
