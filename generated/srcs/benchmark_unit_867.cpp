#include "bench/fib.hpp"

// RE Benchmark TU 867 of 20000 (depth=28, stamp="default")
namespace bench_tu_867 {
constexpr unsigned long long result = ::bench::slow_fib<28, 867>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_867
