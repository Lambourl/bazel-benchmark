#include "bench/fib.hpp"

// RE Benchmark TU 1952 of 20000 (depth=28, stamp="default")
namespace bench_tu_1952 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1952>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1952
