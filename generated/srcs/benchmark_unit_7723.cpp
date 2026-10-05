#include "bench/fib.hpp"

// RE Benchmark TU 7723 of 20000 (depth=28, stamp="default")
namespace bench_tu_7723 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7723>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7723
