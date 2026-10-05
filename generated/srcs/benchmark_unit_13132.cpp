#include "bench/fib.hpp"

// RE Benchmark TU 13132 of 20000 (depth=28, stamp="default")
namespace bench_tu_13132 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13132>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13132
