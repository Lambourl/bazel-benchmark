#include "bench/fib.hpp"

// RE Benchmark TU 4739 of 20000 (depth=28, stamp="default")
namespace bench_tu_4739 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4739>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4739
