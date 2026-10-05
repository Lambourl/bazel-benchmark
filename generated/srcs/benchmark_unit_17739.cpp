#include "bench/fib.hpp"

// RE Benchmark TU 17739 of 20000 (depth=28, stamp="default")
namespace bench_tu_17739 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17739>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17739
