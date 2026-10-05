#include "bench/fib.hpp"

// RE Benchmark TU 14752 of 20000 (depth=28, stamp="default")
namespace bench_tu_14752 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14752>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14752
