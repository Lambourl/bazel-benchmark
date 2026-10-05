#include "bench/fib.hpp"

// RE Benchmark TU 10600 of 20000 (depth=28, stamp="default")
namespace bench_tu_10600 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10600>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10600
