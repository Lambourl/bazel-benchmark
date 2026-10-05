#include "bench/fib.hpp"

// RE Benchmark TU 1609 of 20000 (depth=28, stamp="default")
namespace bench_tu_1609 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1609>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1609
