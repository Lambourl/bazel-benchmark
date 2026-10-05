#include "bench/fib.hpp"

// RE Benchmark TU 18188 of 20000 (depth=28, stamp="default")
namespace bench_tu_18188 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18188>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18188
