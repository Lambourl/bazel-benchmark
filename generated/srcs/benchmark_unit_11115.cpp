#include "bench/fib.hpp"

// RE Benchmark TU 11115 of 20000 (depth=28, stamp="default")
namespace bench_tu_11115 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11115>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11115
