#include "bench/fib.hpp"

// RE Benchmark TU 11385 of 20000 (depth=28, stamp="default")
namespace bench_tu_11385 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11385>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11385
