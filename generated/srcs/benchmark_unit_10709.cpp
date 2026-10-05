#include "bench/fib.hpp"

// RE Benchmark TU 10709 of 20000 (depth=28, stamp="default")
namespace bench_tu_10709 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10709>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10709
