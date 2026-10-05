#include "bench/fib.hpp"

// RE Benchmark TU 13609 of 20000 (depth=28, stamp="default")
namespace bench_tu_13609 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13609>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13609
