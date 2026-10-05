#include "bench/fib.hpp"

// RE Benchmark TU 10107 of 20000 (depth=28, stamp="default")
namespace bench_tu_10107 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10107>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10107
