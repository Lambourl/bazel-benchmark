#include "bench/fib.hpp"

// RE Benchmark TU 2614 of 20000 (depth=28, stamp="default")
namespace bench_tu_2614 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2614>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2614
