#include "bench/fib.hpp"

// RE Benchmark TU 5781 of 20000 (depth=28, stamp="default")
namespace bench_tu_5781 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5781>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5781
