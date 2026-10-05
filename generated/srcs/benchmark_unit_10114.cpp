#include "bench/fib.hpp"

// RE Benchmark TU 10114 of 20000 (depth=28, stamp="default")
namespace bench_tu_10114 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10114>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10114
