#include "bench/fib.hpp"

// RE Benchmark TU 15036 of 20000 (depth=28, stamp="default")
namespace bench_tu_15036 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15036>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15036
