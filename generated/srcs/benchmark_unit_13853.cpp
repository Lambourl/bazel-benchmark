#include "bench/fib.hpp"

// RE Benchmark TU 13853 of 20000 (depth=28, stamp="default")
namespace bench_tu_13853 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13853>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13853
