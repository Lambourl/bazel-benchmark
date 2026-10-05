#include "bench/fib.hpp"

// RE Benchmark TU 10522 of 20000 (depth=28, stamp="default")
namespace bench_tu_10522 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10522>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10522
