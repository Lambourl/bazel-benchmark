#include "bench/fib.hpp"

// RE Benchmark TU 9929 of 20000 (depth=28, stamp="default")
namespace bench_tu_9929 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9929>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9929
