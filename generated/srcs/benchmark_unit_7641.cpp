#include "bench/fib.hpp"

// RE Benchmark TU 7641 of 20000 (depth=28, stamp="default")
namespace bench_tu_7641 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7641>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7641
