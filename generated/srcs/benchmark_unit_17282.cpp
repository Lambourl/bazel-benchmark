#include "bench/fib.hpp"

// RE Benchmark TU 17282 of 20000 (depth=28, stamp="default")
namespace bench_tu_17282 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17282>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17282
