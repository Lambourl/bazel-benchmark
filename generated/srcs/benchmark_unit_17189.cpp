#include "bench/fib.hpp"

// RE Benchmark TU 17189 of 20000 (depth=28, stamp="default")
namespace bench_tu_17189 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17189>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17189
