#include "bench/fib.hpp"

// RE Benchmark TU 2204 of 20000 (depth=28, stamp="default")
namespace bench_tu_2204 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2204>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2204
