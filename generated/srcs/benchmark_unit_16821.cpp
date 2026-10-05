#include "bench/fib.hpp"

// RE Benchmark TU 16821 of 20000 (depth=28, stamp="default")
namespace bench_tu_16821 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16821>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16821
