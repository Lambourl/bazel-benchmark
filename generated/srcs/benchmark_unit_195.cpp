#include "bench/fib.hpp"

// RE Benchmark TU 195 of 20000 (depth=28, stamp="default")
namespace bench_tu_195 {
constexpr unsigned long long result = ::bench::slow_fib<28, 195>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_195
