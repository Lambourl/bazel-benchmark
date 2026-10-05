#include "bench/fib.hpp"

// RE Benchmark TU 19913 of 20000 (depth=28, stamp="default")
namespace bench_tu_19913 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19913>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19913
