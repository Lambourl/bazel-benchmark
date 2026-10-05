#include "bench/fib.hpp"

// RE Benchmark TU 3626 of 20000 (depth=28, stamp="default")
namespace bench_tu_3626 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3626>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3626
