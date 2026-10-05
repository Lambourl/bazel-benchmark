#include "bench/fib.hpp"

// RE Benchmark TU 7030 of 20000 (depth=28, stamp="default")
namespace bench_tu_7030 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7030>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7030
