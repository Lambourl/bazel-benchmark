#include "bench/fib.hpp"

// RE Benchmark TU 17137 of 20000 (depth=28, stamp="default")
namespace bench_tu_17137 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17137>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17137
