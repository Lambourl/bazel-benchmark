#include "bench/fib.hpp"

// RE Benchmark TU 10976 of 20000 (depth=28, stamp="default")
namespace bench_tu_10976 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10976>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10976
