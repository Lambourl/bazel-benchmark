#include "bench/fib.hpp"

// RE Benchmark TU 13524 of 20000 (depth=28, stamp="default")
namespace bench_tu_13524 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13524>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13524
