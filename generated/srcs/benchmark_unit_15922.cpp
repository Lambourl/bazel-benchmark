#include "bench/fib.hpp"

// RE Benchmark TU 15922 of 20000 (depth=28, stamp="default")
namespace bench_tu_15922 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15922>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15922
