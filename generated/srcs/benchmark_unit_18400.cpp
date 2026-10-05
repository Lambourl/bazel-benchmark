#include "bench/fib.hpp"

// RE Benchmark TU 18400 of 20000 (depth=28, stamp="default")
namespace bench_tu_18400 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18400>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18400
