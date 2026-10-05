#include "bench/fib.hpp"

// RE Benchmark TU 11963 of 20000 (depth=28, stamp="default")
namespace bench_tu_11963 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11963>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11963
