#include "bench/fib.hpp"

// RE Benchmark TU 2141 of 20000 (depth=28, stamp="default")
namespace bench_tu_2141 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2141>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2141
