#include "bench/fib.hpp"

// RE Benchmark TU 991 of 20000 (depth=28, stamp="default")
namespace bench_tu_991 {
constexpr unsigned long long result = ::bench::slow_fib<28, 991>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_991
