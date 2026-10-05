#include "bench/fib.hpp"

// RE Benchmark TU 8951 of 20000 (depth=28, stamp="default")
namespace bench_tu_8951 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8951>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8951
