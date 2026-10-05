#include "bench/fib.hpp"

// RE Benchmark TU 5125 of 20000 (depth=28, stamp="default")
namespace bench_tu_5125 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5125>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5125
