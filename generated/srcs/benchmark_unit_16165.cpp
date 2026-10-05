#include "bench/fib.hpp"

// RE Benchmark TU 16165 of 20000 (depth=28, stamp="default")
namespace bench_tu_16165 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16165>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16165
