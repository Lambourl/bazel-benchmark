#include "bench/fib.hpp"

// RE Benchmark TU 819 of 20000 (depth=28, stamp="default")
namespace bench_tu_819 {
constexpr unsigned long long result = ::bench::slow_fib<28, 819>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_819
