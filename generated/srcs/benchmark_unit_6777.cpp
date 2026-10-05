#include "bench/fib.hpp"

// RE Benchmark TU 6777 of 20000 (depth=28, stamp="default")
namespace bench_tu_6777 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6777>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6777
