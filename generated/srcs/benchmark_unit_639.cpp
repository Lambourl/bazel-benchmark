#include "bench/fib.hpp"

// RE Benchmark TU 639 of 20000 (depth=28, stamp="default")
namespace bench_tu_639 {
constexpr unsigned long long result = ::bench::slow_fib<28, 639>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_639
