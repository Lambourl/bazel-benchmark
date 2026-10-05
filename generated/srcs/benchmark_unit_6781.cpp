#include "bench/fib.hpp"

// RE Benchmark TU 6781 of 20000 (depth=28, stamp="default")
namespace bench_tu_6781 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6781>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6781
