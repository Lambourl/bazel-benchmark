#include "bench/fib.hpp"

// RE Benchmark TU 10291 of 20000 (depth=28, stamp="default")
namespace bench_tu_10291 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10291>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10291
