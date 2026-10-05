#include "bench/fib.hpp"

// RE Benchmark TU 1916 of 20000 (depth=28, stamp="default")
namespace bench_tu_1916 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1916>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1916
