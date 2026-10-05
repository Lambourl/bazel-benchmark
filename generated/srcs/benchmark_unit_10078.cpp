#include "bench/fib.hpp"

// RE Benchmark TU 10078 of 20000 (depth=28, stamp="default")
namespace bench_tu_10078 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10078>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10078
