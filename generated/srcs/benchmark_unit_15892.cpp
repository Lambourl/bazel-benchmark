#include "bench/fib.hpp"

// RE Benchmark TU 15892 of 20000 (depth=28, stamp="default")
namespace bench_tu_15892 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15892>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15892
