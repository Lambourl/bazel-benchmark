#include "bench/fib.hpp"

// RE Benchmark TU 5175 of 20000 (depth=28, stamp="default")
namespace bench_tu_5175 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5175>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5175
