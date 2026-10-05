#include "bench/fib.hpp"

// RE Benchmark TU 12062 of 20000 (depth=28, stamp="default")
namespace bench_tu_12062 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12062>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12062
