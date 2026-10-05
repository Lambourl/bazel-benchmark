#include "bench/fib.hpp"

// RE Benchmark TU 6192 of 20000 (depth=28, stamp="default")
namespace bench_tu_6192 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6192>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6192
