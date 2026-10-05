#include "bench/fib.hpp"

// RE Benchmark TU 395 of 20000 (depth=28, stamp="default")
namespace bench_tu_395 {
constexpr unsigned long long result = ::bench::slow_fib<28, 395>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_395
