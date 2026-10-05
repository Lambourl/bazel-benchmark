#include "bench/fib.hpp"

// RE Benchmark TU 10922 of 20000 (depth=28, stamp="default")
namespace bench_tu_10922 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10922>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10922
