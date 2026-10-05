#include "bench/fib.hpp"

// RE Benchmark TU 16991 of 20000 (depth=28, stamp="default")
namespace bench_tu_16991 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16991>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16991
